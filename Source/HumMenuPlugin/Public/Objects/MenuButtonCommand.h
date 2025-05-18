// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuButtonCommand.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
/**
 * @brief  Class used to describe a button command.
 *
 * * Can be extended in Blueprints to define specific actions executed when a menu button is pressed.
 */
class HUMMENUPLUGIN_API UMenuButtonCommand : public UObject
{
	GENERATED_BODY()

public:
	UMenuButtonCommand(const FObjectInitializer& ObjectInitializer  = FObjectInitializer::Get());
};
