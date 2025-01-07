// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Data/HumMenuTypes.h"
#include "Data/Assets/MenuScrollsSettings.h"
#include "WidgetsPropertiesDataAsset.generated.h"

class UButtonPropertiesDataAsset;
class UButtonActionDataAsset;
class UTextPropertiesDataAsset;

/**
 *
 */
UCLASS(BlueprintType)
class HUMMENUPLUGIN_API UWidgetsPropertiesDataAsset : public UAdvancedDataAsset
{
    GENERATED_BODY()

public:
    UWidgetsPropertiesDataAsset();

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget Properties")
    TMap<ETextStyle, TSoftObjectPtr<UTextPropertiesDataAsset>> TextTypes;
	
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget Properties")
    TSoftObjectPtr<UButtonPropertiesDataAsset> ButtonProperties;
	
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Appearance")
    float MenuBlurStrength;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Appearance")
    FLinearColor BackgroundMenuColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Appearance")
    FLinearColor SurfaceMenuElementColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Appearance")
    FLinearColor HoveredSurfaceMenuElementColor;
    
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Menu Butons Action") 
    TArray<TSoftObjectPtr<UButtonActionDataAsset>> ButtonActions;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings")
    UMenuScrollsSettings* ScrollSetting;



public:
    UFUNCTION(BlueprintCallable)
    void GetTextType(ETextStyle InStyle, UTextPropertiesDataAsset*& OutAsset, bool& OutSuccess);
};

