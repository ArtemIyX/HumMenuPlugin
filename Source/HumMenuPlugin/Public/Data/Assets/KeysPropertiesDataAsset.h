// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "InputCoreTypes.h"
#include "Data/Assets/InputKeyPropertiesStructure.h" 
#include "KeysPropertiesDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class HUMMENUPLUGIN_API UKeysPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Key Properties")
    TMap<FKey, FInputKeyPropertiesStructure> InputKeyPropertiesMap;
    UKeysPropertiesDataAsset();
};
