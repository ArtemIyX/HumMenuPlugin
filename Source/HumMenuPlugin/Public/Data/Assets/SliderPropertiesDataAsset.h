// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Styling/SlateWidgetStyle.h"
#include "SliderPropertiesDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API USliderPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()
	
public:
	USliderPropertiesDataAsset();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slider Properties")
	FSliderStyle MenuSliderStyle; 
};
