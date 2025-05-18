// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MessageBoxBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)

/**
 * @brief Base class for implementing message box windows in the project.
 *
 * Represents an object wrapper for managing message windows, allowing you to
 * set a title, description text, and control their appearance and closing behavior.
 * Suitable for notification systems, alerts, dialogs, and other interactive windows.
 *
 * Several functions are implemented to allow extension through Blueprints
 *
 * Allows creating a custom message box widget, adding it to the viewport, and
 * tracking its close event via a dynamic multicast delegate.
 *
 */

class HUMMENUPLUGIN_API UMessageBoxBase : public UObject
{
	GENERATED_BODY()
	
public:

	/**
	 * @brief The displayed title of the message window
	 */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FText MessageTitleText;

	/**
	 * @brief The displayed text in the message window
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FText MessageInfoText;


	/**
	 * @brief Adds the message box widget to the viewport.
	 *
	 * Can be overridden in Blueprints to implement custom display logic.
	 *
	 * @param PlayerController The player controller that owns the viewport.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MessageBox")
	void AddMessageToViewport(APlayerController* PlayerController);

		/**
	 * @brief Returns an instance of the message box widget.
	 *
	 * Can be overridden in Blueprints to create custom widgets or adjust their settings.
	 *
	 * @param WorldContextObject The world context for widget creation.
	 * @param InPlayerController The player controller that owns the widget.
	 * @return A pointer to the created or existing UUserWidget instance.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Option", meta = (WorldContext = "WorldContextObject", ShowWorldContextPin))
	UUserWidget* GetMessageBoxWidget(UObject* WorldContextObject, APlayerController* InPlayerController);

		/**
	 * Essentially a wrapper around the standard CreateWidget() function.
	 *
	 * This method was implemented to simplify widget creation from Blueprints when working within a UObject-based class,
	 * where direct usage of **CreateWidget** can be inconvenient or problematic.
	 */
	UFUNCTION(BlueprintCallable, Category = "Option")
	UUserWidget* CreateNewWidget(APlayerController* InPlayerController, TSubclassOf<UUserWidget> WidgetClass);


	
	/**
	 * @brief Closes the message box window.
	 *
	 * Optionally indicates whether it was closed via the cross (X) button.
	 *
	 * @param bIsCrossClose True if closed using the cross button.
	 */
	UFUNCTION(BlueprintCallable, Category = "MessageBox")
	void CloseMessageWindow(bool bIsCrossClose = false);


	/**
	 * @brief Delegate triggered when the message window is closed.
	 *
	 * Passes a boolean indicating whether it was closed via the cross button.
	 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCloseMessageWindow, bool, bIsCrossClose);


	/**
	 * @brief Event dispatcher for when the message window is closed.
	 */
	UPROPERTY(BlueprintAssignable, Category = "MessageBox")
	FOnCloseMessageWindow OnCloseMessageWindow;
};
