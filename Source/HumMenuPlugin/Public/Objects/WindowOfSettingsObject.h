// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Objects/OptionsBlockObject.h"
#include "WindowOfSettingsObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class HUMMENUPLUGIN_API UWindowOfSettingsObject : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText WindowName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UOptionsBlockObject*> OptionsBlocks;
};
