// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "InputKeyPropertiesStructure.generated.h"

/**
 * @brief Structure that represents input key properties including an icon and key value.
 *  The structure is intended to describe key data.
 * This structure is used in InputKeyProperties Map.
 * @see UKeysPropertiesDataAsset::InputKeyPropertiesMap 
 * 
 */
USTRUCT(BlueprintType)
struct FInputKeyPropertiesStructure
{
    GENERATED_BODY()


    FInputKeyPropertiesStructure()
        : InputKey(EKeys::Invalid)  
    {
    }

    /**
     * * @brief Visual icon displaying this key
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InputKeyProperties")
    FSlateBrush Icon;

    /**
     * * @brief The key corresponding to this input item
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InputKeyProperties")
    FKey InputKey;
};
