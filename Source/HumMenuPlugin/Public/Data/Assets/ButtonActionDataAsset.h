// Fill out your copyright notice in the Description page of Project Settings.
//Data asset to describe action of button
#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "ButtonActionDataAsset.generated.h"

class UMenuButtonCommand;
/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API UButtonActionDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
    UButtonActionDataAsset();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Button")
    FText ButtonText;
	
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Button")
    TSoftClassPtr<UMenuButtonCommand> ButtonObjectClass;
};
