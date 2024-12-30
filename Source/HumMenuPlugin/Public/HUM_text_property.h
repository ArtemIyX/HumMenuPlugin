// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateColor.h"

#include "HUM_text_property.generated.h"

/**
 * Data Asset для хранения свойств текста
 */
UCLASS(BlueprintType)
class HUMMENUPLUGIN_API UHUM_text_property : public UDataAsset
{
    GENERATED_BODY()

public:
    // Шрифт текста (Slate Font Info)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text Settings")
    FSlateFontInfo FontInfo;

    // Цвет текста (Slate Color)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text Settings")
    FSlateColor TextColor;
};
