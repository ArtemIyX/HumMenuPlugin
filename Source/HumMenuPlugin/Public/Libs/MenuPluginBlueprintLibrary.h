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
	UFUNCTION(BlueprintCallable, Category = "MenuPluginLibrary|Widget Settings")
	static TSoftObjectPtr<UWidgetsPropertiesDataAsset> GetWidgetPropertiesDataAsset();

	/**
	 * Clears the provided object reference by destroying or removing it appropriately.
	 *
	 * - If the object is an actor, it is destroyed 
	 * - If the object is a user widget, it is removed from its parent and marked for destruction (RAM Clear).
	 * - If the object is any other type, it is marked for destruction (RAM Clear)..
	 *
	 * @note In either case, the output variable will be nullptr so that your UPROPERTY variable does not point to an invalid object
	 * @warning The input object parameter must be valid (not in the process of deletion), otherwise the function will fail even if the pointer points to the some object!
	 *
	 * @param InObjectRef A reference to the UObject to be cleared. This parameter must be passed by reference.
	 */
	UFUNCTION(BlueprintCallable, Category = "MenuPluginLibrary|Misc")
	static void ClearObject(UPARAM(Ref, DisplayName="Object (Reference)")UObject*& InObjectRef);
};
