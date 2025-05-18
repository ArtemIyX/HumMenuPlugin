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
/**
 * @brief Data asset for configuring menu scroll appearance and behavior.
 *
 * This asset contains parameters for customizing the style and layout of scrollbars
 * used within UI menus, such as their visual style, thickness, and padding.
 *
 *  You can set the general parameters of the UScrollBox element in UWidgetsPropertiesDataAsset::ScrollSetting(in Developer settings - UWidgetPropertiesSettings )
 */
class HUMMENUPLUGIN_API UMenuScrollsSettings : public UAdvancedDataAsset
{
	GENERATED_BODY()
	
public:
	UMenuScrollsSettings();
	

	/**
	 * @brief Scrollbar style settings for  scroll areas.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings")
	FScrollBarStyle MenuScrollBar;

	/**
	 * @brief Thickness value for the  scrollbar.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings")
	float MenuScrollThickness;

	/**
	 * @brief Padding applied to the menu scrollbar.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings")
	FMargin MenuScrollPadding;
};
