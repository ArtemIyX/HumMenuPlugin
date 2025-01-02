// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "E_Text_style.h" 
#include "TextPropertiesDataAsset.h" // Уже существующий класс TextPropertiesDataAsset
#include "ButtonPropertiesDataAsset.h"
#include "ButtonActionDataAsset.h"
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

    // Strength of the menu blur effect
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Appearance")//Menues Blur Strength
    float MenuBlurStrength;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Appearance")//Menu background color
    FLinearColor BackgroundMenuColor;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Menu Butons Action") // Array of Button Action Data Assets
    TArray<TSoftObjectPtr<UButtonActionDataAsset>> ButtonActions;

    // Function to get text type
    UFUNCTION(BlueprintCallable)
    void GetTextType(E_Text_style InStyle, UTextPropertiesDataAsset*& OutAsset, bool& OutSuccess);
};

