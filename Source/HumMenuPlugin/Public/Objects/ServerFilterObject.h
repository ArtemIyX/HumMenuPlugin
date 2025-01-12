#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Delegates/DelegateCombinations.h"
#include "ServerFilterObject.generated.h"

class UUserWidget;

/**
 *
 */
UCLASS(Blueprintable, meta = (ShowWorldContextPin))
class HUMMENUPLUGIN_API UServerFilterObject : public UObject
{
    GENERATED_BODY()

public:
    // Объявляем BlueprintNativeEvent с параметрами WorldContextObject и PlayerController
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Server Filter", meta = (WorldContext = "WorldContextObject"))
    UUserWidget* GetServerFilterWidget(UObject* WorldContextObject, APlayerController* PlayerController);

    // Виртуальная реализация функции в C++
    virtual UUserWidget* GetServerFilterWidget_Implementation(UObject* WorldContextObject, APlayerController* PlayerController);

    // Свойство для хранения класса виджета
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> WidgetClass;



    // Ивент-диспетчер для обновления фильтра сервера
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateServerFilter, UServerFilterObject*, CurrentObject);

    UPROPERTY(BlueprintAssignable, Category = "Server Filter")
    FOnUpdateServerFilter OnUpdateServerFilter;

    // Функция для вызова диспетчера с параметром
    UFUNCTION(BlueprintCallable, Category = "Server Filter")
    void CallUpdateServerFilter(UServerFilterObject* CurrentObject);

};
