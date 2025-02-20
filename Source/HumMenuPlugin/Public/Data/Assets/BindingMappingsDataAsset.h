// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Data/Structures/KeyOptionData.h"
#include "InputMappingContext.h"
#include "BindingMappingsDataAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class HUMMENUPLUGIN_API UBindingMappingsDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key Options")
	TArray<FKeyOptionData> BindingMappings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key Options")
	TArray<UInputMappingContext*> CurrentMappingContexts;


	UBindingMappingsDataAsset();
};
