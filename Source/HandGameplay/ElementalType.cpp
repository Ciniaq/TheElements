// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementalType.h"

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

UENUM(BlueprintType)
enum class EElementalType : uint8
{
	None UMETA(DisplayName = "None"),
	Water UMETA(DisplayName = "Water"),
	Fire UMETA(DisplayName = "Fire"),
	Air UMETA(DisplayName = "Air"),
	Earth UMETA(DisplayName = "Earth")
	
};