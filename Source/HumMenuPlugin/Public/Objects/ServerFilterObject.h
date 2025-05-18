#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Delegates/DelegateCombinations.h"
#include "ServerFilterObject.generated.h"


/**
 * @brief Delegate triggered when the server filter is updated.
 *
 * It is called whenever the user interacts with any filtering UI elements.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateServerFilter, UServerFilterObject*, CurrentObject);


UCLASS(Blueprintable, BlueprintType, meta = (ShowWorldContextPin))

/**
 * @brief Object class representing an individual server filter and its UI widget.
 *
 * UServerFilterObject serves as a container for the configuration and logic of a specific server filter
 * used in a server browser system. Each instance of this class represents one filter option.
 * 
 * Used to temporarily store the current filter value, filter control and other.
 * 
 */
class HUMMENUPLUGIN_API UServerFilterObject : public UObject
{
    GENERATED_BODY()

public:

    UServerFilterObject(const FObjectInitializer& ObjectInitializer  = FObjectInitializer::Get());

protected:

    /** The UI widget class associated with this server filter */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Category = "UI")
    TSubclassOf<UUserWidget> WidgetClass;

public:

        /**
     * @brief Returns the UI widget instance for this server filter.
     *
     * Instantiates a widget of the type specified in `WidgetClass` .
     *
     * @param WorldContextObject  The context object for accessing the world.
     * @param InPlayerController  The player controller responsible for the widget.
     * @return The created UUserWidget instance, or **nullptr** if creation failed.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Server Filter", meta = (WorldContext = "WorldContextObject"))
    UUserWidget* GetServerFilterWidget(UObject* WorldContextObject, APlayerController* InPlayerController);


        /**
     * @brief Triggers the server filter update event.
     *
     * Notifies all subscribed systems that the filter’s state has changed,
     * typically after a user interaction such as checking a box, entering a value, or selecting an option.
     *
     * @param InCurrentObject  The instance of the filter object that triggered the update.
     */
    UFUNCTION(BlueprintCallable, Category = "Server Filter")
    virtual void CallUpdateServerFilter(UServerFilterObject* InCurrentObject);

public:

        /**
     * @brief Delegate called when the server filter value is updated.
     *
     * This event allows other systems to respond to filter changes in real time —
     * for example, to refresh the server list based on new filter criteria.
     */
    UPROPERTY(BlueprintAssignable, Category = "Server Filter")
    FOnUpdateServerFilter OnUpdateServerFilter;
};
