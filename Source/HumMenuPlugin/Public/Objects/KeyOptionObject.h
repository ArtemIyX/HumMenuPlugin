// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objects/OptionObject.h"
#include "InputCoreTypes.h"


#include "EnhancedInputComponent.h"
#include "KeyOptionObject.generated.h"


/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class HUMMENUPLUGIN_API UKeyOptionObject : public UOptionObject
{
	GENERATED_BODY()
	

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKeyOptionUpdate, UOptionObject*, OptionObject, FKey, Value);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnKeyOptionUpdate OnKeyOptionUpdate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	FKey CurrentKey;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	FName MappingName;


	UFUNCTION(BlueprintCallable, Category = "Events")
	void CallOnKeyOptionUpdate(UOptionObject* OptionObject, FKey Value);
};
