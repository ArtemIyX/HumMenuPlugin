// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Data/Structures/KeyOptionData.h"
#include "InputMappingContext.h"
#include "BindingMappingsDataAsset.generated.h"


UCLASS(Blueprintable, BlueprintType)


/**
 * @brief Data Asset which contains the parameters of the input settings menu

 */
class HUMMENUPLUGIN_API UBindingMappingsDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:

	/**
	* @brief Array used to list Input Actions that can be binned in menu
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key Options")
	TArray<FKeyOptionData> BindingMappings;

	/**
	* @brief MappingContext array, which are needed for registration in the Enhanced Input User Settings system. For further use, their InputAction in the bind system settings
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key Options")
	TArray<UInputMappingContext*> CurrentMappingContexts;


	UBindingMappingsDataAsset();
};
