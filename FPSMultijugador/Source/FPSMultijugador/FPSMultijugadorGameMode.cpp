// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSMultijugadorGameMode.h"
#include "FPSMultijugadorHUD.h"
#include "FPSMultijugadorCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "FPSPlayerController.h"
#include "Engine/TargetPoint.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"


AFPSMultijugadorGameMode::AFPSMultijugadorGameMode() : Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSMultijugadorHUD::StaticClass();
}

//void AFPSMultijugadorGameMode::SpawnPlayer(AFPSPlayerController* controller)
//{
//	//GetWorld()->GetTimerManager().SetTimer(DeadSpawn, AFPSMultijugadorGameMode::ResetDeadSpawn(controller), 10.0f, false);
//
//}

void AFPSMultijugadorGameMode::SpawnPlayer_Implementation(AFPSPlayerController* controller)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, TEXT("Me llaman desde c++!"));
}

void AFPSMultijugadorGameMode::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), spawnPoints);
}

void AFPSMultijugadorGameMode::ResetDeadSpawn(AFPSPlayerController* controller)
{
}
