// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Objects/OptionsBlockObject.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/OptionWindowWidget.h"
#include "WindowOfSettingsObject.generated.h"


/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class HUMMENUPLUGIN_API UWindowOfSettingsObject : public UObject
{
	GENERATED_BODY()
	
public:
	UWindowOfSettingsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText WindowName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UOptionsBlockObject>> OptionsBlocks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UOptionWindowWidget> WindowWidgetClass;
};
