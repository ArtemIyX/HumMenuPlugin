// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Styling/SlateWidgetStyle.h" // Для работы с FCheckBoxStyle
#include "Styling/SlateTypes.h"       // Для стилей виджетов
#include "CheckBoxPropertiesDataAsset.generated.h"


UCLASS()
class HUMMENUPLUGIN_API UCheckBoxPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()
	
public:
	UCheckBoxPropertiesDataAsset();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CheckBox Style")
	FCheckBoxStyle MenuCheckBoxStyle;
};
