// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Objects/OptionsBlockObject.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/OptionWindowWidget.h"
#include "WindowOfSettingsObject.generated.h"


/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)

/**
 * @brief Represents a container object for grouping multiple option blocks into a settings window.
 *
 * This object defines the structure of a settings window by organizing option blocks,
 * each containing a list of related options. Used to build modular, category-based settings menus.
 *
 * The 'window' is essentially a definition of the settings menu structure. In practice, this object serves to separate the settings menu into distinct categories.
 * @note For example:control ,video,audio.
 * 
 * @brief This class allows configuring the settings window and defining which option blocks (@ref UOptionsBlockObject) it should contain.
 *
 * @note The functionality is designed to be extended in Blueprints.
 */
class HUMMENUPLUGIN_API UWindowOfSettingsObject : public UObject
{
	GENERATED_BODY()
	
public:
	UWindowOfSettingsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * @brief Display name for the settings window.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText WindowName;

	/**
	 * @brief Array of option block classes that will populate this settings window.
	 *
	 * The window's overall structure is formed by these blocks.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UOptionsBlockObject>> OptionsBlocks;


	/**
	 * @brief A widget that displays a container for storing blocks.
	 * 
	 * @note It is recommended to use **WB_OptionsWindowBase** class (created in Blueprints).
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UOptionWindowWidget> WindowWidgetClass;
};
