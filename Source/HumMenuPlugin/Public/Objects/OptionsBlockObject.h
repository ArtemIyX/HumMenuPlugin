// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Objects/OptionObject.h"
#include "OptionsBlockObject.generated.h"

/**
 * 
 */

class UUserWidget;
class APlayerController;

UCLASS(Blueprintable, BlueprintType, meta = (ShowWorldContextPin))

/**
 * @brief Represents a container object for grouping multiple widgets.
 *
 * The block is intended to separate a list of option items in a settings menu, usually by option categories.
 * @note For example, separating options by categories for video settings: Resolution, Miscellaneous, Graphics.
 * 
 * These blocks populate the settings **window** widget based on the UWindowOfSettingsObject, forming the structure of the options menu.
 */
class HUMMENUPLUGIN_API UOptionsBlockObject : public UObject
{
	GENERATED_BODY()
	

public:
	UOptionsBlockObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * @brief Displayed option block name in the widget .
	 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText BlockName;

	/**
	 * @brief Unique option block identifier
	 *
	 * @note Can be used to retrieve a pointer to the option block  object via a UDataOptionsCachingSubsystem
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BlockID;



		/**
	 * @brief A function that generates a visual widget for the block based on the provided options and their values(Functionality extendable in Blueprints)
	 * @param WorldContextObject World context for widget creation.
	 * @param InPlayerController Player controller owning the widget.
	 * @return Pointer to the created  UUserWidget instance representing the block.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	UUserWidget* GetOptionsBlockWidget(UObject* WorldContextObject, APlayerController* InPlayerController);


		/**
	 * @brief The function is created to populate the current block with options.
	 *
	 * This function is intended to be extended via Blueprints.
	 * 
	 * The function is also intended for caching the options via a UDataOptionsCachingSubsystem
	 *
	 * @param OptionObjects              Array of option objects to add in block
	 * @param WorldContextObject         Context object for world access.
	 * @param InPlayerController         Player controller responsible for owning the options UI.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Options")
	void AddOptions(const TArray<UOptionObject*>& OptionObjects, UObject* WorldContextObject, APlayerController* InPlayerController);


	/**
	 * @brief Generates a set of option objects for this options block.
	 *
	 * This function is intended to be extended in Blueprints to create and configure
	 * instances of UOptionObject-based classes, which represent individual settings options.
	 *
	 * The created option objects should be added to the provided output array.
	 *
	 * @param WorldContextObject Context object for accessing world-related data.
	 * @param InPlayerController Player controller associated with the UI context.
	 * @param OutOptions An array to populate with generated option objects.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Options")
	void GenerateOptions(UObject* WorldContextObject, APlayerController* InPlayerController, TArray<UOptionObject*>& OutOptions);


};
