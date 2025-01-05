#include "Objects/ServerSlotUObject.h"
#include "Blueprint/UserWidget.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

UUserWidget* UServerSlotUObject::GetServerSlotWidget_Implementation(UObject* WorldContextObject, APlayerController* PlayerController)
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

    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    if (!World)
    {
        UE_LOG(LogTemp, Warning, TEXT("World is invalid!"));
        return nullptr;
    }

    // Возвращаем nullptr, так как виджет создаётся в Blueprint
    return nullptr;
}
