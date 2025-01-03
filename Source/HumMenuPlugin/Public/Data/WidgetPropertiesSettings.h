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
class HUMMENUPLUGIN_API UWidgetPropertiesSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UWidgetPropertiesSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Widgets Settings",
		DisplayName="Widget Properties")
	TSoftObjectPtr<UWidgetsPropertiesDataAsset> WidgetsPropertiesDataAsset;
};
