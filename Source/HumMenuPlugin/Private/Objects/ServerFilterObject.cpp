#include "Objects/ServerFilterObject.h"
#include "Blueprint/UserWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"

UUserWidget* UServerFilterObject::GetServerFilterWidget_Implementation(UObject* WorldContextObject, APlayerController* PlayerController)
{
    if (!WorldContextObject)
    {
        UE_LOG(LogTemp, Warning, TEXT("WorldContextObject is invalid!"));
        return nullptr;
    }

    if (!PlayerController)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerController is invalid!"));
        return nullptr;
    }

    UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
    if (!World)
    {
        UE_LOG(LogTemp, Warning, TEXT("World is invalid!"));
        return nullptr;
    }

    if (!WidgetClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("WidgetClass is not set!"));
        return nullptr;
    }

    UUserWidget* Widget = CreateWidget<UUserWidget>(World, WidgetClass);
    if (!Widget)
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to create widget!"));
        return nullptr;
    }

    return Widget;
}


void UServerFilterObject::CallUpdateServerFilter(UServerFilterObject* CurrentObject)
{
    if (OnUpdateServerFilter.IsBound()) 
    {
        OnUpdateServerFilter.Broadcast(CurrentObject); 
    }
}