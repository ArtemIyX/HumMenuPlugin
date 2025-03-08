// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objects/MessageBoxBase.h"
#include "ApplyMessageBoxObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class HUMMENUPLUGIN_API UApplyMessageBoxObject : public UMessageBoxBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void ApplyButtonEvent();



	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnApplyButtonEvent);

	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnApplyButtonEvent OnApplyButtonEvent;
};
