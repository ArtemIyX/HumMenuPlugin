// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Objects/OptionObject.h"
#include "OptionsBlockObject.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class HUMMENUPLUGIN_API UOptionsBlockObject : public UObject
{
	GENERATED_BODY()
	

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Options")
    FText OptionsBlockName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Options")
	TArray<TSubclassOf<UOptionObject>> OptionsObjects;
};
