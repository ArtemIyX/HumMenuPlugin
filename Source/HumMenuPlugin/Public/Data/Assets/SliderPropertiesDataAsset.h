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
/**
 * @brief Data asset containing appearance properties for slider elements in the UI.
 *
 ** @note By configuring this data asset, you define the parameters of the USlider element in the plugin via UWidgetsPropertiesDataAsset::SliderProperties(located in Developer Settings - UWidgetPropertiesSettings)
 */
class HUMMENUPLUGIN_API USliderPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()
	
public:
	USliderPropertiesDataAsset();

	/** Slider style settings for menu and widget sliders. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slider Properties")
	FSliderStyle MenuSliderStyle; 
};
