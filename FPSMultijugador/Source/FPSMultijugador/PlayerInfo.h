// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerInfo.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSMULTIJUGADOR_API UPlayerInfo : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerInfo();

	UFUNCTION(BlueprintCallable, BlueprintPure)
		float GetActualHealth() { return health; }

	UFUNCTION(BlueprintCallable, BlueprintPure)
		float GetFactorizedHealth() { return health / maxHealth; }

	UFUNCTION(BlueprintCallable)
		void DoDamage(float dmg);

	UFUNCTION(BlueprintCallable)
		void HealthPlayer(float nHealth);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool GetAlive() { return alive; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HealthVariables, Replicated)
		bool alive = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HealthVariables, Replicated)
		float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HealthVariables)
		float maxHealth;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
