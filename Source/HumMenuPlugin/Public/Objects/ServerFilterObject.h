#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Delegates/DelegateCombinations.h"
#include "ServerFilterObject.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateServerFilter, UServerFilterObject*, CurrentObject);

/**
 * The ServerFilterObject class provides functionality for managing server filter logic
 * and creating associated UI widgets in the game.
 * 
 * This class is used to define the properties and methods related to server filtering
 * and UI handling. It includes methods to retrieve the server filter widget and trigger
 * updates to the server filter.
 * 
 * @note This class is designed to be used in Blueprint for easy customization.
 */
UCLASS(Blueprintable, BlueprintType, meta = (ShowWorldContextPin))
class HUMMENUPLUGIN_API UServerFilterObject : public UObject
{
    GENERATED_BODY()

public:
    /**
     * Default constructor for UServerFilterObject.
     */
    UServerFilterObject(const FObjectInitializer& ObjectInitializer  = FObjectInitializer::Get());

protected:
    /**
     * The class of the widget associated with this server filter object.
     * This class is used to instantiate the UI widget when necessary.
     * 
     * @see UUserWidget
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Category = "UI")
    TSubclassOf<UUserWidget> WidgetClass;

public:
	/**
	 * @brief Retrieves a server filter widget instance for the specified context and player controller.
	 *
	 * This function attempts to create a widget of type `UUserWidget` using the specified `WidgetClass`. 
	 * It validates the provided world context, player controller, and the widget class before attempting to create the widget. 
	 * Logs warnings if any validation fails.
	 *
	 * @param WorldContextObject A context object that provides access to the world. Must be valid.
	 * @param InPlayerController The player controller responsible for the widget. Must be valid.
	 * 
	 * @return A pointer to the created `UUserWidget` if successful, or `nullptr` if any validation or widget creation fails.
	 *
	 */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Server Filter", meta = (WorldContext = "WorldContextObject"))
    UUserWidget* GetServerFilterWidget(UObject* WorldContextObject, APlayerController* InPlayerController);

    /**
     * Calls the update event for the server filter.
     * 
     * This function triggers the OnUpdateServerFilter event to notify subscribers 
     * that the server filter has been updated. The current object is passed as an argument.
     * 
     * @param InCurrentObject A pointer to the current server filter object.
     */
    UFUNCTION(BlueprintCallable, Category = "Server Filter")
    virtual void CallUpdateServerFilter(UServerFilterObject* InCurrentObject);

public:
    /**
     * Event that is triggered when the server filter is updated.
     *
     * @see CallUpdateServerFilter
     */
    UPROPERTY(BlueprintAssignable, Category = "Server Filter")
    FOnUpdateServerFilter OnUpdateServerFilter;
};
