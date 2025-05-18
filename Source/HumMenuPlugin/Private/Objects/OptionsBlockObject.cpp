// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/OptionsBlockObject.h"
#include "Blueprint/UserWidget.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

UOptionsBlockObject::UOptionsBlockObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

UUserWidget* UOptionsBlockObject::GetOptionsBlockWidget_Implementation(UObject* WorldContextObject, APlayerController* InPlayerController)
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

    UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
    if (!IsValid(World))
    {
        UE_LOG(LogHumMenu, Warning, TEXT("%s World is invalid!"), TEXT(__FUNCTION__));
        return nullptr;
    }


    return nullptr;
}


void UOptionsBlockObject::AddOptions_Implementation(const TArray<UOptionObject*>& OptionObjects, UObject* WorldContextObject, APlayerController* InPlayerController)
{
	
}

void UOptionsBlockObject::GenerateOptions_Implementation(UObject* WorldContextObject, APlayerController* InPlayerController, TArray<UOptionObject*>& OutOptions)
{
    if (!IsValid(WorldContextObject) || !IsValid(InPlayerController))
    {
        UE_LOG(LogHumMenu, Warning, TEXT("%s: Invalid parameters!"), TEXT(__FUNCTION__));
        return;
    }

    
    OutOptions.Empty();

   

    UE_LOG(LogHumMenu, Log, TEXT("%s: Options generated successfully."), TEXT(__FUNCTION__));
}

