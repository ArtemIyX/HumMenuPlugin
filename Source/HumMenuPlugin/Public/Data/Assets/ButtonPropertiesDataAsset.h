// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "ButtonPropertiesDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class HUMMENUPLUGIN_API UButtonPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
	UButtonPropertiesDataAsset();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TSoftObjectPtr<USoundBase> PressSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TSoftObjectPtr<USoundBase> HoverSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Hover Appearance")
	FSlateColor HoverColor;
};
