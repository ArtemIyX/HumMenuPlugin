// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objects/MessageBoxBase.h"
#include "QuestionMessageBox.generated.h"

/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API UQuestionMessageBox : public UMessageBoxBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void ApplyButtonEvent();



	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnApplyButtonEvent);

	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnApplyButtonEvent OnApplyButtonEvent;





	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void RejectButtonEvent();


	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRejectButtonEvent);

	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnRejectButtonEvent OnRejectButtonEvent;

	
};
