// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "ButtonPropertiesDataAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
/**
 * @brief Data asset that defines general button properties used throughout the project.
 *
 * This asset encapsulates common button configuration parameters such as sounds
 * for button interactions and the visual appearance when hovering over buttons.
 * 
 * @note By configuring this data asset, you set the general appearance  for UButton elements in plugin, via UWidgetsPropertiesDataAsset::ButtonProperties(located in Developer Settings - UWidgetPropertiesSettings)
 */
class HUMMENUPLUGIN_API UButtonPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
	UButtonPropertiesDataAsset();

public:
	/**
	* @brief The sound that will be played when you press the button
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TSoftObjectPtr<USoundBase> PressSound;

	/**
	* @brief The sound that will be played when you hover over the button
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TSoftObjectPtr<USoundBase> HoverSound;

	/**
	* @brief Basic tint of buttons in the project
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Hover Appearance")
	FSlateColor HoverColor;
};
