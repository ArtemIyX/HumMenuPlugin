// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Data/HumMenuTypes.h"
#include "MessageBoxStyle.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
/**
 * @brief Data asset that defines appearance and styling parameters for message box widgets.
 *
 * This asset centralizes the configuration of visual properties and text content for message boxes
 * used across the project. It includes color themes, button styles, text styles, layout parameters,
 * and default labels for buttons and error messages.
 *
 *  @note By configuring this data asset, you define the parameters for MessageBox widget in the plugin via UWidgetsPropertiesDataAsset::MessageBoxDatAsset(located in Developer Settings - UWidgetPropertiesSettings)

 */
class HUMMENUPLUGIN_API UMessageBoxStyle : public UAdvancedDataAsset
{
	GENERATED_BODY()
	

public:
	/** Theme color for the message box background and some elements. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FSlateColor MessageThemeColor;

	/** Text style for the message box title. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	ETextStyle MessageTitleTextStyle;

	/** Text style for the informational message content. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	ETextStyle MessageInformationTextStyle;


	/** Style for the message box button in normal state. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox Button")
	FSlateBrush MessageButtonStyle;

	/** Style for the message box button when hovered. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox Button")
	FSlateBrush MessageButtonStyleHovered;

	/** Text style for labels on message box buttons. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox Button")
	ETextStyle MessageBoxButtonTextStyle;

	/** Brush style for the top block (header area) of the message box. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FSlateBrush MessageBoxTopBlockStyle;

	/** Brush style for the bottom block (footer area) of the message box. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FSlateBrush MessageBoxDownBlockStyle;

	/** Draw order priority for the message box widget(optional). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	int32 MessageBoxZOrder;

	/** Default label text for the Apply/Confirm button. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBoxButtonText")
	FText ApplyButtonText;

	/** Default label text for the Reject/Cancel button. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBoxButtonText")
	FText RejectButtonText;

	/** Error message text displayed in text message boxes when the input field is empty. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TextMessageBox")
	FText NullTextBoxErrorText;

	/**Style for the text input field in a text message box. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TextMessageBox")
	FSlateBrush TextBoxStyle;

	/** Style for the text input field when hovered in a text message box. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TextMessageBox")
	FSlateBrush TextBoxStyleHovered;

	UMessageBoxStyle();
};
