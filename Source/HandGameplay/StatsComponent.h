// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFullyHealed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReceiveDamage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStunStart);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStunEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFireStart);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFireEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPoisonStart);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPoisonEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRegenerationStart);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRegenerationEnd);

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class HANDGAMEPLAY_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	// Sets default values for this component's properties
	UStatsComponent();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable, Category = "Health")
	FOnDeath OnDeath;
	UPROPERTY(BlueprintAssignable, Category = "Health")
	FOnFullyHealed OnFullyHealed;
	UPROPERTY(BlueprintAssignable, Category = "Health")
	FOnHealed OnHealed;
	UPROPERTY(BlueprintAssignable, Category = "Damage")
	FOnReceiveDamage OnReceiveDamage;
	UPROPERTY(BlueprintAssignable, Category = "Stans")
	FOnStunStart OnStunStart;
	UPROPERTY(BlueprintAssignable, Category = "Stans")
	FOnStunEnd OnStunEnd;
	UPROPERTY(BlueprintAssignable, Category = "Stans")
	FOnFireStart OnFireStart;
	UPROPERTY(BlueprintAssignable, Category = "Stans")
	FOnFireEnd OnFireEnd;
	UPROPERTY(BlueprintAssignable, Category = "Stans")
	FOnPoisonStart OnPoisonStart;
	UPROPERTY(BlueprintAssignable, Category = "Stans")
	FOnPoisonEnd OnPoisonEnd;
	UPROPERTY(BlueprintAssignable, Category = "Stans")
	FOnRegenerationStart OnRegenerationStart;
	UPROPERTY(BlueprintAssignable, Category = "Stans")
	FOnRegenerationEnd OnRegenerationEnd;

	UPROPERTY(BlueprintReadWrite, Category="Health")
	float MaxHealth = 100;
	UPROPERTY(BlueprintReadWrite, Category="Health")
	float CurrentHealth = MaxHealth;

	UPROPERTY(BlueprintReadWrite, Category="Speed")
	float Speed;
	UPROPERTY(BlueprintReadWrite, Category="Speed")
	float SpeedModifier;

	UPROPERTY(BlueprintReadWrite, Category="Damage")
	float TrueDamage;
	UPROPERTY(BlueprintReadWrite, Category="Damage")
	float AirDamage;
	UPROPERTY(BlueprintReadWrite, Category="Damage")
	float FireDamage;
	UPROPERTY(BlueprintReadWrite, Category="Damage")
	float WaterDamage;
	UPROPERTY(BlueprintReadWrite, Category="Damage")
	float EarthDamage;
	
	UPROPERTY(BlueprintReadWrite, Category="DamageModifer")
	float TrueDamageModifier;
	UPROPERTY(BlueprintReadWrite, Category="DamageModifer")
	float AirDamageModifier;
	UPROPERTY(BlueprintReadWrite, Category="DamageModifer")
	float FireDamageModifier;
	UPROPERTY(BlueprintReadWrite, Category="DamageModifer")
	float WaterDamageModifier;
	UPROPERTY(BlueprintReadWrite, Category="DamageModifer")
	float EarthDamageModifier;

	UPROPERTY(BlueprintReadWrite, Category="Resist")
	float TrueResist;
	UPROPERTY(BlueprintReadWrite, Category="Resist")
	float AirResist;
	UPROPERTY(BlueprintReadWrite, Category="Resist")
	float FireResist;
	UPROPERTY(BlueprintReadWrite, Category="Resist")
	float WaterResist;
	UPROPERTY(BlueprintReadWrite, Category="Resist")
	float EarthResist;

	UPROPERTY(BlueprintReadWrite, Category="ResistModifier")
	float TrueResistModifier;
	UPROPERTY(BlueprintReadWrite, Category="ResistModifier")
	float AirResistModifier;
	UPROPERTY(BlueprintReadWrite, Category="ResistModifier")
	float FireResistModifier;
	UPROPERTY(BlueprintReadWrite, Category="ResistModifier")
	float WaterResistModifier;
	UPROPERTY(BlueprintReadWrite, Category="ResistModifier")
	float EarthResistModifier;

	UPROPERTY(BlueprintReadWrite, Category="States")
	bool bCanMove = true;
	UPROPERTY(BlueprintReadWrite, Category="States")
	bool bIsPoisoned;
	UPROPERTY(BlueprintReadWrite, Category="States")
	bool bIsOnFire;
	UPROPERTY(BlueprintReadWrite, Category="States")
	bool bIsInRecovery;
	
	UFUNCTION(BlueprintCallable, Category="Health")
	void HealthChange(float value,bool bItHurts);
	UFUNCTION(BlueprintCallable, Category="Health")
	float GetMaxHealth() const;
	UFUNCTION(BlueprintCallable, Category="Health")
	void SetMaxHealth(float NewMaxHealth);
	UFUNCTION(BlueprintCallable, Category="Health")
	float GetCurrentHealth() const;
	UFUNCTION(BlueprintCallable, Category="Health")
	void SetCurrentHealth(float _CurrentHealth);
	
	UFUNCTION(BlueprintCallable, Category="Speed")
	float GetSpeed() const;
	UFUNCTION(BlueprintCallable, Category="Speed")
	void SetSpeed(float NewSpeed);
	UFUNCTION(BlueprintCallable, Category="Speed")
	float GetSpeedModifier() const;
	UFUNCTION(BlueprintCallable, Category="Speed")
	void SetSpeedModifier(float NewSpeedModifier);

	UFUNCTION(BlueprintCallable, Category="Damage")
	float GetTrueDamage() const;
	UFUNCTION(BlueprintCallable, Category="Damage")
	void SetTrueDamage(float NewTrueDamage);
	UFUNCTION(BlueprintCallable, Category="Damage")
	float GetAirDamage() const;
	UFUNCTION(BlueprintCallable, Category="Damage")
	void SetAirDamage(float NewAirDamage);
	UFUNCTION(BlueprintCallable, Category="Damage")
	float GetFireDamage() const;
	UFUNCTION(BlueprintCallable, Category="Damage")
	void SetFireDamage(float NewFireDamage);
	UFUNCTION(BlueprintCallable, Category="Damage")
	float GetWaterDamage() const;
	UFUNCTION(BlueprintCallable, Category="Damage")
	void SetWaterDamage(float NewWaterDamage);
	UFUNCTION(BlueprintCallable, Category="Damage")
	float GetEarthDamage() const;
	UFUNCTION(BlueprintCallable, Category="Damage")
	void SetEarthDamage(float NewEarthDamage);

	UFUNCTION(BlueprintCallable, Category="DamageModifier")
	float GetTrueDamageModifier() const;
	UFUNCTION(BlueprintCallable, Category="DamageModifier")
	void SetTrueDamageModifier(float NewTrueDamageModifier);
	UFUNCTION(BlueprintCallable, Category="DamageModifier")
	float GetAirDamageModifier() const;
	UFUNCTION(BlueprintCallable, Category="DamageModifier")
	void SetAirDamageModifier(float NewAirDamageModifier);
	UFUNCTION(BlueprintCallable, Category="DamageModifier")
	float GetFireDamageModifier() const;
	UFUNCTION(BlueprintCallable, Category="DamageModifier")
	void SetFireDamageModifier(float NewFireDamageModifier);
	UFUNCTION(BlueprintCallable, Category="DamageModifier")
	float GetWaterDamageModifier() const;
	UFUNCTION(BlueprintCallable, Category="DamageModifier")
	void SetWaterDamageModifier(float NewWaterDamageModifier);
	UFUNCTION(BlueprintCallable, Category="DamageModifier")
	float GetEarthDamageModifier() const;
	UFUNCTION(BlueprintCallable, Category="DamageModifier")
	void SetEarthDamageModifier(float NewEarthDamageModifier);

	UFUNCTION(BlueprintCallable, Category="Resist")
	float GetTrueResist() const;
	UFUNCTION(BlueprintCallable, Category="Resist")
	void SetTrueResist(float NewTrueResist);
	UFUNCTION(BlueprintCallable, Category="Resist")
	float GetAirResist() const;
	UFUNCTION(BlueprintCallable, Category="Resist")
	void SetAirResist(float NewAirResist);
	UFUNCTION(BlueprintCallable, Category="Resist")
	float GetFireResist() const;
	UFUNCTION(BlueprintCallable, Category="Resist")
	void SetFireResist(float NewFireResist);
	UFUNCTION(BlueprintCallable, Category="Resist")
	float GetWaterResist() const;
	UFUNCTION(BlueprintCallable, Category="Resist")
	void SetWaterResist(float NewWaterResist);
	UFUNCTION(BlueprintCallable, Category="Resist")
	float GetEarthResist() const;
	UFUNCTION(BlueprintCallable, Category="Resist")
	void SetEarthResist(float NewEarthResist);

	UFUNCTION(BlueprintCallable, Category="ResistModifier")
	float GetTrueResistModifier() const;
	UFUNCTION(BlueprintCallable, Category="ResistModifier")
	void SetTrueResistModifier(float NewTrueResistModifier);
	UFUNCTION(BlueprintCallable, Category="ResistModifier")
	float GetAirResistModifier() const;
	UFUNCTION(BlueprintCallable, Category="ResistModifier")
	void SetAirResistModifier(float NewAirResistModifier);
	UFUNCTION(BlueprintCallable, Category="ResistModifier")
	float GetFireResistModifier() const;
	UFUNCTION(BlueprintCallable, Category="ResistModifier")
	void SetFireResistModifier(float NewFireResistModifier);
	UFUNCTION(BlueprintCallable, Category="ResistModifier")
	float GetWaterResistModifier() const;
	UFUNCTION(BlueprintCallable, Category="ResistModifier")
	void SetWaterResistModifier(float NewWaterResistModifier);
	UFUNCTION(BlueprintCallable, Category="ResistModifier")
	float GetEarthResistModifier() const;
	UFUNCTION(BlueprintCallable, Category="ResistModifier")
	void SetEarthResistModifier(float NewEarthResistModifier);

	UFUNCTION(BlueprintCallable, Category="Stans")
	bool IsCanMove() const;
	UFUNCTION(BlueprintCallable, Category="Stans")
	void SetCanMove(bool NewCanMove);
	UFUNCTION(BlueprintCallable, Category="Stans")
	bool IsIsPoisoned() const;
	UFUNCTION(BlueprintCallable, Category="Stans")
	void SetIsPoisoned(bool NewIsPoisoned);
	UFUNCTION(BlueprintCallable, Category="Stans")
	bool IsIsOnFire() const;
	UFUNCTION(BlueprintCallable, Category="Stans")
	void SetIsOnFire(bool NewIsOnFire);
	UFUNCTION(BlueprintCallable, Category="Stans")
	bool IsIsInRecovery() const;
	UFUNCTION(BlueprintCallable, Category="Stans")
	void SetIsInRecovery(bool NewIsInRecovery);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
};
