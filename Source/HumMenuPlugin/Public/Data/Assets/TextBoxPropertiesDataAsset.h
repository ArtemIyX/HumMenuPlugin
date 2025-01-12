// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "TextBoxPropertiesDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class HUMMENUPLUGIN_API UTextBoxPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()
	

public:
	UTextBoxPropertiesDataAsset();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text Box Settings") //Scroll bar style
	FEditableTextBoxStyle MenuTextBox;
};
