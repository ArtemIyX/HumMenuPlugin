// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Objects/OptionsBlockObject.h"
#include "OptionWindowWidget.generated.h"

/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API UOptionWindowWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Options", meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<UOptionsBlockObject>> OptionsBlockClasses;
};
