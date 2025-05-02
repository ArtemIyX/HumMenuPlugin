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
    /**
   * @brief A data asset that describes the button both functionally and visually
   */
class HUMMENUPLUGIN_API UButtonActionDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
    UButtonActionDataAsset();

public:
    /**
   * @brief Visual text of the button
   */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Button")
    FText ButtonText;
	
    /**
   * @brief A button object that characterizes the functionality when the button is pressed
   */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Button")
    TSoftClassPtr<UMenuButtonCommand> ButtonObjectClass;
};
