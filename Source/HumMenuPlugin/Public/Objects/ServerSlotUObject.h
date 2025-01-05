#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ServerSlotUObject.generated.h"

// Forward declaration ��� UUserWidget
class UUserWidget;

/**
 *
 */
UCLASS(Blueprintable, meta = (ShowWorldContextPin))
class HUMMENUPLUGIN_API UServerSlotUObject : public UObject
{
    GENERATED_BODY()

public:
    // ��������� BlueprintNativeEvent � ���������� WorldContextObject
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Server Slot", meta = (WorldContext = "WorldContextObject"))
    UUserWidget* GetServerSlotWidget(UObject* WorldContextObject);

    // ����������� ���������� ������� � C++
    virtual UUserWidget* GetServerSlotWidget_Implementation(UObject* WorldContextObject);
};
