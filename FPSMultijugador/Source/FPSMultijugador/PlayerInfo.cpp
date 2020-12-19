// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfo.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
UPlayerInfo::UPlayerInfo()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	health = 100.f;
	maxHealth = health;
	this->SetIsReplicatedByDefault(true);
	
	// ...
}


// Called when the game starts
void UPlayerInfo::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerInfo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPlayerInfo, health);
}

void UPlayerInfo::DoDamage(float dmg)
{
	health -= dmg;

	if (health <= 0.0f) {
		alive = false;
	}

}

void UPlayerInfo::HealthPlayer(float nHealth)
{
	health += nHealth;

	if (health >= maxHealth) {
		health = maxHealth;
	}

}




