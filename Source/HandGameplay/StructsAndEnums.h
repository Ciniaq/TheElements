// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EHandGestureEnum : uint8
{
	NotSet,
	Victoria,
	ClenchedHandOld,
	AimingHandOld,
	TwoFingerPistolOld,
	HorizontalThumb,
	Essa,
	SpiderMan,
	Muka,
	FoldedMuka,
	HalfOfTriangle,
	HoldingTennisBall,
	HighFive,
	Pinching,
};

UENUM(BlueprintType)
enum class EElementsEnum : uint8
{
	NotSet,
	Water,
	Earth,
	Wind,
	Fire,
	Nature,
	Ice,
	Steam,
	Lava,
	Lighting,
};