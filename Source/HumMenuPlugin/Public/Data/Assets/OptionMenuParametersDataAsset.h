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
/**
 * @brief A data asset that stores a list of UWindowOfSettingsObject classes to be displayed in the options menu.
 * 
 * @note You can configure the parameters of this data asset via UWidgetsPropertiesDataAsset::OptionsDataAsset(located in Developer Settings - UWidgetPropertiesSettings)
 */

class HUMMENUPLUGIN_API UOptionMenuParametersDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()
public:
	/*List of classes" */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UWindowOfSettingsObject>> OptionMenuParameters;


	UOptionMenuParametersDataAsset();
};
