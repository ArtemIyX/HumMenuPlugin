// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WidgetsPropertiesDataAsset.h"  // ���������� Data Asset
#include "MenuPluginBlueprintLibary.generated.h"

/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API UMenuPluginBlueprintLibary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

    // ������ �������, ������� ���������� Data Asset ��� Widget Properties
    UFUNCTION(BlueprintCallable, Category = "Widget Settings")
    static UWidgetsPropertiesDataAsset* GetWidgetPropertiesDataAsset();
};
