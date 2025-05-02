// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "WidgetPropertiesSettings.generated.h"

class UWidgetsPropertiesDataAsset;
/**
 * 
 */
UCLASS(config = Game, defaultconfig)
/**
 * @brief Settings class for configuring widget properties, extending basic settings.
 *
 * Stores a soft reference to a Widgets Properties Data Asset, allowing configuration
 * of UI widget-related properties through project settings.
 */
class HUMMENUPLUGIN_API UWidgetPropertiesSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	/**
	 * @brief Constructor for initializing UWidgetPropertiesSettings.
	 *
	 * Uses FObjectInitializer for initialization. Defaults to FObjectInitializer::Get() if not provided.
	 *
	 * @param ObjectInitializer Reference to FObjectInitializer. Defaults to FObjectInitializer::Get().
	 */
	UWidgetPropertiesSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	/**
	 * @brief Soft reference to a Widgets Properties Data Asset.
	 *
	 * This asset contains configuration data for UI widgets.
	 * Can be set through Project Settings under "Widgets Settings" category.
	 */
	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Widgets Settings",
		DisplayName="Widget Properties")
	TSoftObjectPtr<UWidgetsPropertiesDataAsset> WidgetsPropertiesDataAsset;
};
