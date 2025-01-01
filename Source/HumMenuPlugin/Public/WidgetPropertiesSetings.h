// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "WidgetsPropertiesDataAsset.h"
#include "WidgetPropertiesSetings.generated.h"

/**
 * 
 */
UCLASS(config = Game, defaultconfig)
class HUMMENUPLUGIN_API UWidgetPropertiesSetings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
    UWidgetPropertiesSetings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
    UPROPERTY(Config,EditAnywhere, BlueprintReadWrite, Category = "Widgets Settings")
    TSoftObjectPtr<UWidgetsPropertiesDataAsset> WidgetsPropertiesDataAsset;
};
