// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "E_Text_style.h" 
#include "TextPropertiesDataAsset.h" // Уже существующий класс TextPropertiesDataAsset
#include "ButtonPropertiesDataAsset.h"
#include "WidgetsPropertiesDataAsset.generated.h"

/**
 *
 */
UCLASS(BlueprintType)
class HUMMENUPLUGIN_API UWidgetsPropertiesDataAsset : public UAdvancedDataAsset
{
    GENERATED_BODY()

public:
    UWidgetsPropertiesDataAsset();

    // Map with style of text block
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget Properties")
    TMap<E_Text_style, TSoftObjectPtr<UTextPropertiesDataAsset>> TextTypes;

    // Button properties
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget Properties")
    TSoftObjectPtr<UButtonPropertiesDataAsset> ButtonProperties;

    // Function to get text type
    UFUNCTION(BlueprintCallable)
    void GetTextType(E_Text_style InStyle, UTextPropertiesDataAsset*& OutAsset, bool& OutSuccess);
};

