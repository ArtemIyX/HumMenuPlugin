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
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget Properties")//Map with style of text block
    TMap<TEnumAsByte<E_Text_style>, UTextPropertiesDataAsset*> TextTypes;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget Properties")
    UButtonPropertiesDataAsset* ButtonProperties;
};
