// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Styling/SlateTypes.h"

#include "OptionStyleDataAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class HUMMENUPLUGIN_API UOptionStyleDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Style")
	FButtonStyle ButtonStyle;

	UOptionStyleDataAsset();
};

