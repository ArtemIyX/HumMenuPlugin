// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Styling/SlateTypes.h" 
#include "MenuScrollsSettings.generated.h"

/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API UMenuScrollsSettings : public UAdvancedDataAsset
{
	GENERATED_BODY()
	
public:
	UMenuScrollsSettings();
	// ScrollBar style variable for Menu
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings")
	FScrollBarStyle MenuScrollBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings")
	float MenuScrollThickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings")
	FMargin MenuScrollPadding;
};
