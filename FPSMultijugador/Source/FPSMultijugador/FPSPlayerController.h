// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FPSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FPSMULTIJUGADOR_API AFPSPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	AFPSPlayerController();


	// Called every frame
	virtual void PlayerTick(float DeltaTime) override;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//Funcion encargada de crear la UI en blueprints
	UFUNCTION(BlueprintCallable, CallInEditor, BlueprintNativeEvent)
	void InitializeUI();
};
