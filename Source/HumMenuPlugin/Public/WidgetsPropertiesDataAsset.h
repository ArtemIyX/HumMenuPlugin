// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "E_Text_style.h" 
#include "TextPropertiesDataAsset.h" // Уже существующий класс TextPropertiesDataAsset
#include "WidgetsPropertiesDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class HUMMENUPLUGIN_API UWidgetsPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
    // Карта с ключами типа E_Text_style и значениями типа TextPropertiesDataAsset
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget Properties")
    TMap<TEnumAsByte<E_Text_style>, UTextPropertiesDataAsset*> TextTypes;
};
