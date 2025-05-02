// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h" 
#include "Kismet/GameplayStatics.h" 

#include "OptionObject.generated.h"

class UUserWidget;
class APlayerController;
class UActorComponent;


UCLASS(Blueprintable, BlueprintType)

/**
 * @brief Represents a configurable option object for UI interactions.
 *
 * Can be extended in Blueprints to define option-related behavior,
 * 
 * Stores the value and identifiers of the option.
 *  @warning This class is not intended for persistent data storage.
 */
class HUMMENUPLUGIN_API UOptionObject : public UObject
{
	GENERATED_BODY()

public:
	UOptionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
		/**
	 * @brief Function that returns the widget of the current option 
	 *
	 * The function creates and customizes widget on the basis of received knowledge from the given class.
	 * ()
	 * * @param WorldContextObject World context for widget creation(**is necessary for the widget creation operation** )
	 * @param InPlayerController Player controller owning the widget.
	 * @return Pointer to the created  UUserWidget instance.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Option", meta = (WorldContext = "WorldContextObject", ShowWorldContextPin))
	UUserWidget* GetOptionWidget(UObject* WorldContextObject, APlayerController* InPlayerController);

		/**
	 * @brief The function places the widget creation in a container based on **WB_BaseOptionButton**(functionality is extended in Blueprints)
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Option", meta = (WorldContext = "WorldContextObject"), meta = (WorldContext = "WorldContextObject", ShowWorldContextPin))
	UUserWidget* CreateOptionWidget(UObject* WorldContextObject, APlayerController* InPlayerController, UUserWidget* InputWidget);

	/**
	 * @brief Displayed option name in the widget .
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	FText OptionName;

	/**
	 * @brief Unique option identifier
	 * 
	 * @note Can be used to retrieve a pointer to the option object via a UDataOptionsCachingSubsystem
	 */

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	FName OptionID;



	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UUserWidget> OptionWidget;


		/**
	 * Essentially a wrapper around the standard CreateWidget() function.
	 *
	 * This method was implemented to simplify widget creation from Blueprints when working within a UObject-based class,
	 * where direct usage of **CreateWidget** can be inconvenient or problematic.
	 */
	UFUNCTION(BlueprintCallable, Category = "Option")
	UUserWidget* CreateNewWidget(APlayerController* InPlayerController, TSubclassOf<UUserWidget> WidgetClass);


};
