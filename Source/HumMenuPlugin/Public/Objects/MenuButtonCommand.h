// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuButtonCommand.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class HUMMENUPLUGIN_API UMenuButtonCommand : public UObject
{
	GENERATED_BODY()

public:
	UMenuButtonCommand(const FObjectInitializer& ObjectInitializer  = FObjectInitializer::Get());
};
