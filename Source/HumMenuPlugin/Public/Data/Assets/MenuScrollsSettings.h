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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings") //Scroll bar style
	FScrollBarStyle MenuScrollBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings")//Scroll bar thickness parameter
	float MenuScrollThickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings")// Scroll inside padding
	FMargin MenuScrollPadding;
};
