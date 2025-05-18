// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Objects/OptionsBlockObject.h"
#include "OptionWindowWidget.generated.h"

/**
 * 
 */
UCLASS()
/**
 * @brief The parent class of the entire **options menu** widget structure. Used as the main container.
 * 
 *
 * The class **WB_OptionsWIndowBase** was inherited from this class, it should be specified as a widget container in UWindowOfSettingsObject::WindowWidgetClass.
 * 
 * WB_OptionsWindowBase includes a widget element such as a scroll box (used for scrolling through options).
 */

class HUMMENUPLUGIN_API UOptionWindowWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	/**
	* @brief An array that is populated from the current window's object when this widget is created
 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Options", meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<UOptionsBlockObject>> OptionsBlockClasses;
};
