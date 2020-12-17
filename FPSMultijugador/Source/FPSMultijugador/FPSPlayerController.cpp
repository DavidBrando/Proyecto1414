// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSPlayerController.h"
#include "Engine/TargetPoint.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"

AFPSPlayerController::AFPSPlayerController() : Super() {


}


void AFPSPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void AFPSPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AFPSPlayerController::InitializeUI_Implementation()
{
}
