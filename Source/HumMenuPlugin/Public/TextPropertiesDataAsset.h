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
class HUMMENUPLUGIN_API UTextPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()
	
public:
    UTextPropertiesDataAsset();
    // Font text (Slate Font Info)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text Settings")
    FSlateFontInfo FontInfo;

    // Text color settings(Slate Color)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text Settings")
    FSlateColor TextColor;
};
