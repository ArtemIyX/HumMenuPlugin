// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WidgetsPropertiesDataAsset.h"  // Подключаем Data Asset
#include "MenuPluginBlueprintLibary.generated.h"

/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API UMenuPluginBlueprintLibary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

    // Пример функции, которая возвращает Data Asset для Widget Properties
    UFUNCTION(BlueprintCallable, Category = "Widget Settings")
    static UWidgetsPropertiesDataAsset* GetWidgetPropertiesDataAsset();
};
