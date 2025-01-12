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
    // ��������� BlueprintNativeEvent � ����������� WorldContextObject � PlayerController
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Server Filter", meta = (WorldContext = "WorldContextObject"))
    UUserWidget* GetServerFilterWidget(UObject* WorldContextObject, APlayerController* PlayerController);

    // ����������� ���������� ������� � C++
    virtual UUserWidget* GetServerFilterWidget_Implementation(UObject* WorldContextObject, APlayerController* PlayerController);

    // �������� ��� �������� ������ �������
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> WidgetClass;



    // �����-��������� ��� ���������� ������� �������
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateServerFilter, UServerFilterObject*, CurrentObject);

    UPROPERTY(BlueprintAssignable, Category = "Server Filter")
    FOnUpdateServerFilter OnUpdateServerFilter;

    // ������� ��� ������ ���������� � ����������
    UFUNCTION(BlueprintCallable, Category = "Server Filter")
    void CallUpdateServerFilter(UServerFilterObject* CurrentObject);

};
