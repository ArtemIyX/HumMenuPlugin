// Fill out your copyright notice in the Description page of Project Settings.
//Data asset to describe action of button
#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "MenuButtonUObject.h"
#include "ButtonActionDataAsset.generated.h"


/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API UButtonActionDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
    UButtonActionDataAsset();
    // The text of button
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Button")
    FText ButtonText;

    // Button action UObject
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Button")
    TSubclassOf<UMenuButtonUObject> ButtonObjectClass;
};
