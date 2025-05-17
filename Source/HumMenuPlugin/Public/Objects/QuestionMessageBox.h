// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objects/MessageBoxBase.h"
#include "QuestionMessageBox.generated.h"

/**
 * 
 */
UCLASS()
/**
 * @brief Represents a message box object for simple yes/no or confirm/cancel type questions.
 *
 * Inherits from @ref UMessageBoxBase and provides additional functionality
 * for handling user responses via Apply (confirm) and Reject (cancel) actions.
 *
 * Suitable for modal dialogs, confirmation prompts, or simple in-game notifications.
 *
 * The behavior and appearance can be extended through Blueprints.
 */
class HUMMENUPLUGIN_API UQuestionMessageBox : public UMessageBoxBase
{
	GENERATED_BODY()
	
public:

	/**
	 * @brief Triggers the Apply event.
	 *
	 * Typically called when the user confirms or accepts the dialog.
	 */
	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void ApplyButtonEvent();


	/**
	 * @brief Delegate fired when the Apply button is pressed.
	 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnApplyButtonEvent);


	/** Event dispatcher for Apply action. */
	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnApplyButtonEvent OnApplyButtonEvent;




	/**
	 * @brief Triggers the Reject event.
	 *
	 * Typically called when the user cancels or closes the dialog.
	 */
	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void RejectButtonEvent();


		/**
	 * @brief Delegate fired when the Reject button is pressed.
	 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRejectButtonEvent);

	/** Event dispatcher for Reject action. */
	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnRejectButtonEvent OnRejectButtonEvent;

	
};
