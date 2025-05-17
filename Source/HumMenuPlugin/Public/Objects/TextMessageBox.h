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

/**
 * @brief Represents a specialized message box object with text input functionality.
 *
 * Inherits from @ref UMessageBoxBase and adds support for handling user text input,
 * as well as apply and reject button events.
 *
 * Can be used for confirmation dialogs, prompts, or text input windows within
 * menus or game UI.
 *
 * Designed to be extended via Blueprints.
 */
class HUMMENUPLUGIN_API UTextMessageBox : public UMessageBoxBase
{
	GENERATED_BODY()

public:
	UTextMessageBox();

	/**
	 * @brief Triggers the apply event with the provided text input.
	 *
	 * Typically called when the user confirms their input via an "Apply" button.
	 *
	 * @param InputText The text entered by the user.
	 */
	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void ApplyButtonEvent(FText InputText);



	
	/**
	 * @brief Delegate triggered when the apply button is pressed.
	 *
	 * Passes the entered text to any bound functions or Blueprint events.
	 */
	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnApplyButtonEvent OnApplyButtonEvent;




	/**
	 * @brief Triggers the reject event.
	 *
	 * Typically called when the user cancels or closes the message box via a "Reject" button.
	 */
	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void RejectButtonEvent();



	
	/**
	 * @brief Delegate triggered when the "reject" button is pressed.
	 */
	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnRejectButtonEvent OnRejectButtonEvent;

	/**
	 * @brief Hint text displayed inside the text input box.
	 *
	 * Can be used to show a placeholder or instruction for the user.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FText HintTextBox;
};
