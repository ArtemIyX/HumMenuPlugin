// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Objects/OptionObject.h"
#include "OptionsBlockObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class HUMMENUPLUGIN_API UOptionsBlockObject : public UObject
{
	GENERATED_BODY()
	

public:
	UOptionsBlockObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText BlockName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UOptionObject>> OptionClasses;
};
