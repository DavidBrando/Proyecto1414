// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSMultijugadorHUD.generated.h"

UCLASS()
class AFPSMultijugadorHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPSMultijugadorHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

