// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSMultijugadorCharacter.h"
#include "FPSMultijugadorProjectile.h"
#include "FPSPlayerController.h"
#include "FPSMultijugadorGameMode.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "Net/UnrealNetwork.h"
#include "PlayerInfo.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AFPSMultijugadorCharacter

AFPSMultijugadorCharacter::AFPSMultijugadorCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component, se va a llevar a una clase arma
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	//creamos el componente
	PlayerInfo = CreateDefaultSubobject<UPlayerInfo>(TEXT("InfoPlayer"));
	this->AddOwnedComponent(PlayerInfo);
}

void AFPSMultijugadorCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFPSMultijugadorCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSMultijugadorCharacter::OnFire);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSMultijugadorCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSMultijugadorCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFPSMultijugadorCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFPSMultijugadorCharacter::LookUpAtRate);
}

void AFPSMultijugadorCharacter::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld*  World = GetWorld();
		if (World != nullptr)
		{
			//cosa de disparar
			Srv_Shoot_Remote(World);
		}
	}

		//cosa de efectos aqui
}


void AFPSMultijugadorCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AFPSMultijugadorCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AFPSMultijugadorCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AFPSMultijugadorCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
	Srv_CorrectPitch_Remote(FirstPersonCameraComponent->K2_GetComponentRotation()); //Pitch, Yaw, Roll
}


void AFPSMultijugadorCharacter::Srv_ReSpawn_Implementation()
{
	if (PlayerInfo->GetAlive() == false /*&& GetLocalRole() == ROLE_Authority*/) {
		Cast<AFPSMultijugadorGameMode>(GetWorld()->GetAuthGameMode())->SpawnPlayer(Cast<AFPSPlayerController>(this->GetController()));
		Destroy();
	}
}

bool  AFPSMultijugadorCharacter::Srv_ReSpawn_Validate()
{
	return true;
}

//evento de recibir daño de Unreal
float AFPSMultijugadorCharacter::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	ActualDamage = Damage;
	/*FString TheFloatStr = FString::SanitizeFloat(vidaCambios);
	GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Red, *TheFloatStr);*/
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Me pegan!" + this->GetName()));

	FString TheFloatStr1 = FString::SanitizeFloat(ActualDamage);
	FString TheFloatStr2 = FString::SanitizeFloat(Damage);

	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("me hace daño: " + TheFloatStr1 + " ---- " + TheFloatStr2));



	PlayerInfo->DoDamage(Damage);

	Srv_ReSpawn();


	return ActualDamage;
}


//Funciones de network


void AFPSMultijugadorCharacter::Srv_CorrectPitch_Remote_Implementation(FRotator N_Rotation)
{
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, TEXT("hola!"));
	Rotation = N_Rotation;
	Srv_CorrectPitch_Multicast(Rotation);

}

bool AFPSMultijugadorCharacter::Srv_CorrectPitch_Remote_Validate(FRotator N_Rotation)
{
	return true;
}

void AFPSMultijugadorCharacter::Srv_CorrectPitch_Multicast_Implementation(FRotator N_Rotation)
{
	FRotator r = FRotator(N_Rotation.Pitch, 0.f, 0.f);
	FirstPersonCameraComponent->SetRelativeRotation(r);
	
}

bool AFPSMultijugadorCharacter::Srv_CorrectPitch_Multicast_Validate(FRotator N_Rotation)
{
	return true;
}

void AFPSMultijugadorCharacter::Srv_GunEffects_Multicast_Implementation()
{
	// try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}


bool AFPSMultijugadorCharacter::Srv_GunEffects_Multicast_Validate()
{
	return true;
}


void AFPSMultijugadorCharacter::Srv_Shoot_Remote_Implementation(UWorld* World) {

	if (bUsingMotionControllers)
	{
		const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
		const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
		World->SpawnActor<AFPSMultijugadorProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
	}
	else
	{
		const FRotator SpawnRotation = GetControlRotation();
		// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
		const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) /*+ SpawnRotation.RotateVector(GunOffset)*/;

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		// spawn the projectile at the muzzle
		AFPSMultijugadorProjectile* bullet = World->SpawnActor<AFPSMultijugadorProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

		//Le añadimos quien es su owner para que no se haga daño el mismo
		if (bullet != nullptr) {
			bullet->SetOwner(this);
		}
	}

	Srv_GunEffects_Multicast();

}

bool AFPSMultijugadorCharacter::Srv_Shoot_Remote_Validate(UWorld* World) {

	return true;
}