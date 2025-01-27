// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "InputKeyPropertiesStructure.generated.h"

/**
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


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InputKeyProperties")
    FSlateBrush Icon;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InputKeyProperties")
    FKey InputKey;
};
