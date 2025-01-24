// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Objects/WindowOfSettingsObject.h"
#include "OptionMenuParametersDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType,Blueprintable)
class HUMMENUPLUGIN_API UOptionMenuParametersDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UWindowOfSettingsObject>> OptionMenuParameters;


	UOptionMenuParametersDataAsset();
};
