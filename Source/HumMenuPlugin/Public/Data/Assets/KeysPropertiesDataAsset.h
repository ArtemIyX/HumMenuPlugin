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

/**
* @brief Data asset that describes information about the key
*/
class HUMMENUPLUGIN_API UKeysPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
    /**
 * @brief A map containing key-specific properties for input keys.
 *
 * This map stores data structures associated with specific keys.
 * For example: the 'R' key can have a structure FInputKeyPropertiesStructure describing its icon, key name.
 
 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Key Properties")
    TMap<FKey, FInputKeyPropertiesStructure> InputKeyPropertiesMap;
    UKeysPropertiesDataAsset();
};
