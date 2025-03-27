// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objects/MessageBoxBase.h"
#include "TextMessageBox.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnApplyButtonEvent, FText, InputText);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRejectButtonEvent);

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class HUMMENUPLUGIN_API UTextMessageBox : public UMessageBoxBase
{
	GENERATED_BODY()

public:
	UTextMessageBox();


	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void ApplyButtonEvent(FText InputText);



	

	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnApplyButtonEvent OnApplyButtonEvent;





	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void RejectButtonEvent();



	

	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnRejectButtonEvent OnRejectButtonEvent;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FText HintTextBox;
};
