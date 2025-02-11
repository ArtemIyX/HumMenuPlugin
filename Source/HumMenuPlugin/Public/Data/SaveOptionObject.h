// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveOptionObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class HUMMENUPLUGIN_API USaveOptionObject : public USaveGame
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TestVar")
	float SensetivityTest;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TestVar")
	float Float2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TestVar")
	float Float3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TestVar")
	uint8 ByteTestVar;
};
