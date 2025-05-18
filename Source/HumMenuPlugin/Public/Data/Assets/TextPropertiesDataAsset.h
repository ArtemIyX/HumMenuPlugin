// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateColor.h"
#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "TextPropertiesDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
/**
 * @brief Data asset containing appearance properties for text elements used in the UI.
 *
 * This asset defines styling parameters such as font and color
 * Can be assigned to specific text elements or used as part of a style map.
 * 
 * @note By configuring this data asset, you define the parameters of the UTextBlock element in the plugin via UWidgetsPropertiesDataAsset::TextTypes(located in Developer Settings - UWidgetPropertiesSettings)
 */
class HUMMENUPLUGIN_API UTextPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()
	
public:
    UTextPropertiesDataAsset();

    /** Font settings for the text element. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text Settings")
    FSlateFontInfo FontInfo;
	
    /** Text color settings for the text element. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text Settings")
    FSlateColor TextColor;
};
