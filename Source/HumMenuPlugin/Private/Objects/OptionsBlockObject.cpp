// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/OptionsBlockObject.h"
#include "Blueprint/UserWidget.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

UOptionsBlockObject::UOptionsBlockObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

UUserWidget* UOptionsBlockObject::GetOptionsBlockWidget_Implementation(UObject* WorldContextObject,
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
