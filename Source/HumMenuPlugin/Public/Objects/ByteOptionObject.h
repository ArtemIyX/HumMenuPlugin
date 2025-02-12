// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objects/OptionObject.h"
#include "ByteOptionObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class HUMMENUPLUGIN_API UByteOptionObject : public UOptionObject
{
	GENERATED_BODY()
	
public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnByteOptionUpdate, UOptionObject*, OptionObject, uint8, Value);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnByteOptionUpdate OnByteOptionUpdate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	uint8 CurrentValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	TArray<FText> Paragraphs;


	UFUNCTION(BlueprintCallable, Category = "Events")
	void CallOnByteOptionUpdate(UOptionObject* OptionObject, uint8 Value);
};
