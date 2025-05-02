// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objects/MessageBoxBase.h"
#include "ApplyMessageBoxObject.generated.h"

/**
 * @brief Message box object with an "Apply" button event.
 *
 * This class extends UMessageBoxBase to provide additional functionality for handling
 * an "Apply" button event
 */
UCLASS(Blueprintable,BlueprintType)
class HUMMENUPLUGIN_API UApplyMessageBoxObject : public UMessageBoxBase
{
	GENERATED_BODY()
	
public:
	/**
	* @brief Function called when the "Apply" button is clicked.
	*
	* Triggers the OnApplyButtonEvent multicast delegate.
	*/
	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void ApplyButtonEvent();

	/**
	* @brief Delegate triggered when the "Apply" button is clicked.
	*
	* Use this to bind logic that should occur when the "Apply" action is invoked.
	*/

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnApplyButtonEvent);
	/**
	 * @brief Multicast delegate for the "Apply" button event.
	 */
	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnApplyButtonEvent OnApplyButtonEvent;
};
