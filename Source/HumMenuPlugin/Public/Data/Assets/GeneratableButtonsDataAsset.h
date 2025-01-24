// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Data/Assets/ButtonActionDataAsset.h"
#include "GeneratableButtonsDataAsset.generated.h"


/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API UGeneratableButtonsDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
	UGeneratableButtonsDataAsset();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UButtonActionDataAsset*> ButtonActions;
	
};
