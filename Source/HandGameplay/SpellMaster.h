// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpellMaster.generated.h"

UCLASS()
class HANDGAMEPLAY_API ASpellMaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpellMaster();


///Fields
	EElementType elementalType;
	float damage;
	float duration;
	
//Functions
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
