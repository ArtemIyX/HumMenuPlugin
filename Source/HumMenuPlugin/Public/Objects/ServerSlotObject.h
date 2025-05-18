#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ServerSlotObject.generated.h"

class UUserWidget;
class APlayerController;



DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSlotClicked, UServerSlotObject*, CurrentObject, UUserWidget*, ClickedWidget);

UCLASS(Blueprintable, BlueprintType, meta = (ShowWorldContextPin))

/**
 * @brief A blueprintable UObject representing a server slot
 *
 * This class provides functionality to retrieve UI widgets related to a server slot
 * 
 * You can also handle interaction with the slot.
 * This object represents the slot widget — WB_ServerSlotButton, created in Blueprints.
 */
class HUMMENUPLUGIN_API UServerSlotObject : public UObject
{
	GENERATED_BODY()

public:

	UServerSlotObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	/**
	 * @brief Retrieves the server slot widget associated with this object.
	 * 
	 * This function is callable in Blueprints and is intended to be overridden in derived classes.
	 * 
	 * @param WorldContextObject The world context object, typically passed in for context-sensitive operations.
	 * @param InPlayerController The player controller requesting the server slot widget.
	 * @return A pointer to the user widget representing the server slot.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Server Slot", meta = (WorldContext = "WorldContextObject"))
	UUserWidget* GetServerSlotWidget(UObject* WorldContextObject, APlayerController* InPlayerController);


		/**
	 * @brief The function creates and returns a server information widget. 
		*It is designed to be extended in Blueprints.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Server Info", meta = (WorldContext = "WorldContextObject"))
	UUserWidget* GetServerInfoWidget(UObject* WorldContextObject, APlayerController* InPlayerController);


	/**
	 * @brief Triggers the OnSlotClicked delegate, signaling that the slot was clicked.
	 *
	 * @param ClickedWidget The widget that was clicked.
	 */
	UFUNCTION(BlueprintCallable, Category = "Server Filter")
	virtual void CallOnSlotClicked(UUserWidget* ClickedWidget);

public:

		/**
	 * @brief Delegate event triggered when the server slot widget is clicked.
	 *
	 * Provides the current server slot object and the clicked widget to listeners.
	 */
	UPROPERTY(BlueprintAssignable, Category = "Server Filter")
	FOnSlotClicked OnSlotClicked;
};