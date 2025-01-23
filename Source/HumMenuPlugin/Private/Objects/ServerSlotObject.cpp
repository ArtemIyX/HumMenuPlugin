#include "Objects/ServerSlotObject.h"

#include "HumMenuPlugin.h"
#include "Blueprint/UserWidget.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"


UServerSlotObject::UServerSlotObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

UUserWidget* UServerSlotObject::GetServerSlotWidget_Implementation(UObject* WorldContextObject,
                                                                   APlayerController* InPlayerController)
{
	if (!IsValid(WorldContextObject))
	{
		UE_LOG(LogHumMenu, Warning, TEXT("%s WorldContextObject is invalid!"), TEXT(__FUNCTION__));
		return nullptr;
	}

	if (!IsValid(InPlayerController))
	{
		UE_LOG(LogHumMenu, Warning, TEXT("%s PlayerController is invalid!"), TEXT(__FUNCTION__));
		return nullptr;
	}

	UWorld* world = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!IsValid(world))
	{
		UE_LOG(LogHumMenu, Warning, TEXT("%s World is invalid!"), TEXT(__FUNCTION__));
		return nullptr;
	}

	//TODO: Make same as server filter
	return nullptr;
}

UUserWidget* UServerSlotObject::GetServerInfoWidget_Implementation(UObject* WorldContextObject,
	APlayerController* InPlayerController)
{
	if (!IsValid(WorldContextObject))
	{
		UE_LOG(LogHumMenu, Warning, TEXT("%s WorldContextObject is invalid!"), TEXT(__FUNCTION__));
		return nullptr;
	}

	if (!IsValid(InPlayerController))
	{
		UE_LOG(LogHumMenu, Warning, TEXT("%s PlayerController is invalid!"), TEXT(__FUNCTION__));
		return nullptr;
	}

	UWorld* world = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!IsValid(world))
	{
		UE_LOG(LogHumMenu, Warning, TEXT("%s World is invalid!"), TEXT(__FUNCTION__));
		return nullptr;
	}

	// TODO: Add logic to retrieve the server info widget
	return nullptr;
}


void UServerSlotObject::CallOnSlotClicked(UUserWidget* ClickedWidget)
{
	if (OnSlotClicked.IsBound())
	{
		OnSlotClicked.Broadcast(this, ClickedWidget);
	}
}
