// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSMultijugadorGameMode.h"
#include "FPSMultijugadorHUD.h"
#include "FPSMultijugadorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSMultijugadorGameMode::AFPSMultijugadorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSMultijugadorHUD::StaticClass();
}
