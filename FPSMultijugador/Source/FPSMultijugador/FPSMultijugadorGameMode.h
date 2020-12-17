// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSMultijugadorGameMode.generated.h"

class AFPSPlayerController;
class ATargetPoint;

UCLASS(minimalapi)
class AFPSMultijugadorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFPSMultijugadorGameMode();

	//Por motivos que desconozco, no se porque el SetTimer no me lo aceptaba como esta declarado en el .cpp, asi que decidi de hacerlo un evento en Blueprint.

	/*Funcion para hacer spawn del jugador despues de 10 segundos*/
	UFUNCTION(BlueprintCallable, CallInEditor, BlueprintNativeEvent)
	void SpawnPlayer(AFPSPlayerController* controller);

protected:

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
	TArray<AActor*> spawnPoints;


private:

	FTimerHandle DeadSpawn;
	void ResetDeadSpawn(AFPSPlayerController* controller);

};



