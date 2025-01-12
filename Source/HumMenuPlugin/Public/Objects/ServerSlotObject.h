#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ServerSlotObject.generated.h"

class UUserWidget;
class APlayerController;

/**
 * @brief A blueprintable UObject representing a server slot.
 * 
 * This class provides functionality
 * to retrieve a server slot widget in a user interface. It is intended to be
 * used with Blueprints
 */
UCLASS(Blueprintable, BlueprintType, meta = (ShowWorldContextPin))
class HUMMENUPLUGIN_API UServerSlotObject : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * @brief Default constructor for the UServerSlotObject.
	 * 
	 */
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
};