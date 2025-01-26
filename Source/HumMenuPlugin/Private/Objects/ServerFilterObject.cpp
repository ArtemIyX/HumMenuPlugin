#include "Objects/ServerFilterObject.h"

#include "HumMenuPlugin.h"
#include "Blueprint/UserWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"



UServerFilterObject::UServerFilterObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    WidgetClass = UUserWidget::StaticClass();
}

UUserWidget* UServerFilterObject::GetServerFilterWidget_Implementation(UObject* WorldContextObject, APlayerController* InPlayerController)
{
    if (!IsValid(WorldContextObject))
    {
       // UE_LOG(LogHumMenu, Warning, TEXT("%s WorldContextObject is invalid!"), TEXT(__FUNCTION__));
        return nullptr;
    }

    if (!IsValid(InPlayerController))
    {
       // UE_LOG(LogHumMenu, Warning, TEXT("%s PlayerController is invalid!"), TEXT(__FUNCTION__));
        return nullptr;
    }

    UWorld* world = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
    if (!world)
    {
        //UE_LOG(LogHumMenu, Warning, TEXT("%s World is invalid!"), TEXT(__FUNCTION__));
        return nullptr;
    }

    if (!WidgetClass)
    {
        //UE_LOG(LogHumMenu, Warning, TEXT("%s WidgetClass is not set!"), TEXT(__FUNCTION__));
        return nullptr;
    }

    UUserWidget* widget = CreateWidget<UUserWidget>(InPlayerController, WidgetClass);
    if (!IsValid(widget))
    {
       // UE_LOG(LogHumMenu, Warning, TEXT("%s Failed to create widget!"), TEXT(__FUNCTION__));
        return nullptr;
    }

    return widget;
}

void UServerFilterObject::CallUpdateServerFilter(UServerFilterObject* InCurrentObject)
{
    if (OnUpdateServerFilter.IsBound()) 
    {
        OnUpdateServerFilter.Broadcast(InCurrentObject); 
    }
}
