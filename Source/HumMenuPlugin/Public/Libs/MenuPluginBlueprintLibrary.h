// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MenuPluginBlueprintLibrary.generated.h"

class UWidgetsPropertiesDataAsset;
/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API UMenuPluginBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	
    UFUNCTION(BlueprintCallable, Category = "Widget Settings")
	static TSoftObjectPtr<UWidgetsPropertiesDataAsset> GetWidgetPropertiesDataAsset();
};
