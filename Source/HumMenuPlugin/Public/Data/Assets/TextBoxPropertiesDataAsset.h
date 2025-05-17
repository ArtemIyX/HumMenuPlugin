// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "TextBoxPropertiesDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
/**
 * @brief Data Asset class for configuring text box appearance in the menu system.
 *
 * Contains editable styling settings for text box widgets used within the plugin.
 * 
 * @note By configuring this data asset, you define the parameters of the UTextBox element in the plugin via UWidgetsPropertiesDataAsset::TextBoxProperties (located in Developer Settings - UWidgetPropertiesSettings)
 */
class HUMMENUPLUGIN_API UTextBoxPropertiesDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()
	

public:
	UTextBoxPropertiesDataAsset();
	/**
	 * @brief Text box style settings for menu UI.
	 *
	 * Defines appearance and behavior of editable text box widgets, including font, background,
	 * scrollbar appearance, and other styling options.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text Box Settings") 
	FEditableTextBoxStyle MenuTextBox;
};
