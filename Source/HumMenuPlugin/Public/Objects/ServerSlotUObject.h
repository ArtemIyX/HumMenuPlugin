#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ServerSlotUObject.generated.h"

// Forward declaration для UUserWidget
class UUserWidget;

/**
 *
 */
UCLASS(Blueprintable, meta = (ShowWorldContextPin))
class HUMMENUPLUGIN_API UServerSlotUObject : public UObject
{
    GENERATED_BODY()

public:
    // Объявляем BlueprintNativeEvent с параметром WorldContextObject
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Server Slot", meta = (WorldContext = "WorldContextObject"))
    UUserWidget* GetServerSlotWidget(UObject* WorldContextObject);

    // Виртуальная реализация функции в C++
    virtual UUserWidget* GetServerSlotWidget_Implementation(UObject* WorldContextObject);
};
