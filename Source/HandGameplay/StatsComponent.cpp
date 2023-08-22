// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UStatsComponent::UStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UStatsComponent::HealthChange(float value,bool bItHurts)
{
	if(bItHurts)
	{
		CurrentHealth -= value;
		if(CurrentHealth <=0 ) OnDeath.Broadcast();
	}else
	{
		CurrentHealth += value;
		CurrentHealth = FMath::Clamp(CurrentHealth,0.0f,MaxHealth);
		if(CurrentHealth==MaxHealth) OnFullyHealed.Broadcast();
	}
}

float UStatsComponent::GetMaxHealth() const
{
	return MaxHealth;
}

void UStatsComponent::SetMaxHealth(float NewMaxHealth)
{
	MaxHealth = NewMaxHealth;
}

float UStatsComponent::GetCurrentHealth() const
{
	return CurrentHealth;
}

void UStatsComponent::SetCurrentHealth(float NewCurrentHealth)
{
	CurrentHealth = NewCurrentHealth;
}

float UStatsComponent::GetSpeed() const
{
	return Speed;
}

void UStatsComponent::SetSpeed(float NewSpeed)
{
	Speed = NewSpeed;
}

float UStatsComponent::GetSpeedModifier() const
{
	return SpeedModifier;
}

void UStatsComponent::SetSpeedModifier(float NewSpeedModifier)
{
	SpeedModifier = NewSpeedModifier;
}

float UStatsComponent::GetTrueDamage() const
{
	return TrueDamage;
}

void UStatsComponent::SetTrueDamage(float NewTrueDamage)
{
	TrueDamage = NewTrueDamage;
}

float UStatsComponent::GetAirDamage() const
{
	return AirDamage;
}

void UStatsComponent::SetAirDamage(float NewAirDamage)
{
	AirDamage = NewAirDamage;
}

float UStatsComponent::GetFireDamage() const
{
	return FireDamage;
}

void UStatsComponent::SetFireDamage(float NewFireDamage)
{
	FireDamage = NewFireDamage;
}

float UStatsComponent::GetWaterDamage() const
{
	return WaterDamage;
}

void UStatsComponent::SetWaterDamage(float NewWaterDamage)
{
	WaterDamage = NewWaterDamage;
}

float UStatsComponent::GetEarthDamage() const
{
	return EarthDamage;
}

void UStatsComponent::SetEarthDamage(float NewEarthDamage)
{
	EarthDamage = NewEarthDamage;
}

float UStatsComponent::GetTrueDamageModifier() const
{
	return TrueDamageModifier;
}

void UStatsComponent::SetTrueDamageModifier(float NewTrueDamageModifier)
{
	TrueDamageModifier = NewTrueDamageModifier;
}

float UStatsComponent::GetAirDamageModifier() const
{
	return AirDamageModifier;
}

void UStatsComponent::SetAirDamageModifier(float NewAirDamageModifier)
{
	AirDamageModifier = NewAirDamageModifier;
}

float UStatsComponent::GetFireDamageModifier() const
{
	return FireDamageModifier;
}

void UStatsComponent::SetFireDamageModifier(float NewFireDamageModifier)
{
	FireDamageModifier = NewFireDamageModifier;
}

float UStatsComponent::GetWaterDamageModifier() const
{
	return WaterDamageModifier;
}

void UStatsComponent::SetWaterDamageModifier(float NewWaterDamageModifier)
{
	WaterDamageModifier = NewWaterDamageModifier;
}

float UStatsComponent::GetEarthDamageModifier() const
{
	return EarthDamageModifier;
}

void UStatsComponent::SetEarthDamageModifier(float NewEarthDamageModifier)
{
	EarthDamageModifier = NewEarthDamageModifier;
}

float UStatsComponent::GetTrueResist() const
{
	return TrueResist;
}

void UStatsComponent::SetTrueResist(float NewTrueResist)
{
	TrueResist = NewTrueResist;
}

float UStatsComponent::GetAirResist() const
{
	return AirResist;
}

void UStatsComponent::SetAirResist(float NewAirResist)
{
	AirResist = NewAirResist;
}

float UStatsComponent::GetFireResist() const
{
	return FireResist;
}

void UStatsComponent::SetFireResist(float NewFireResist)
{
	FireResist = NewFireResist;
}

float UStatsComponent::GetWaterResist() const
{
	return WaterResist;
}

void UStatsComponent::SetWaterResist(float NewWaterResist)
{
	WaterResist = NewWaterResist;
}

float UStatsComponent::GetEarthResist() const
{
	return EarthResist;
}

void UStatsComponent::SetEarthResist(float NewEarthResist)
{
	EarthResist = NewEarthResist;
}

float UStatsComponent::GetTrueResistModifier() const
{
	return TrueResistModifier;
}

void UStatsComponent::SetTrueResistModifier(float NewTrueResistModifier)
{
	TrueResistModifier = NewTrueResistModifier;
}

float UStatsComponent::GetAirResistModifier() const
{
	return AirResistModifier;
}

void UStatsComponent::SetAirResistModifier(float NewAirResistModifier)
{
	AirResistModifier = NewAirResistModifier;
}

float UStatsComponent::GetFireResistModifier() const
{
	return FireResistModifier;
}

void UStatsComponent::SetFireResistModifier(float NewFireResistModifier)
{
	FireResistModifier = NewFireResistModifier;
}

float UStatsComponent::GetWaterResistModifier() const
{
	return WaterResistModifier;
}

void UStatsComponent::SetWaterResistModifier(float NewWaterResistModifier)
{
	WaterResistModifier = NewWaterResistModifier;
}

float UStatsComponent::GetEarthResistModifier() const
{
	return EarthResistModifier;
}

void UStatsComponent::SetEarthResistModifier(float NewEarthResistModifier)
{
	EarthResistModifier = NewEarthResistModifier;
}

bool UStatsComponent::IsCanMove() const
{
	return bCanMove;
}

void UStatsComponent::SetCanMove(bool NewbCanMove)
{
	bCanMove = NewbCanMove;
}

bool UStatsComponent::IsIsPoisoned() const
{
	return bIsPoisoned;
}

void UStatsComponent::SetIsPoisoned(bool NewbIsPoisoned)
{
	bIsPoisoned = NewbIsPoisoned;
}

bool UStatsComponent::IsIsOnFire() const
{
	return bIsOnFire;
}

void UStatsComponent::SetIsOnFire(bool NewbIsOnFire)
{
	bIsOnFire = NewbIsOnFire;
}

bool UStatsComponent::IsIsInRecovery() const
{
	return bIsInRecovery;
}

void UStatsComponent::SetIsInRecovery(bool NewbIsInRecovery)
{
	bIsInRecovery = NewbIsInRecovery;
}

// Called when the game starts
void UStatsComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}



// Called every frame
void UStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

