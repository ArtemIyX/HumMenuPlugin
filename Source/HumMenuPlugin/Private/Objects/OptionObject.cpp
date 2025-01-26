// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/OptionObject.h"

#include "HumMenuPlugin.h"

UOptionObject::UOptionObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}


UUserWidget* UOptionObject::GetOptionWidget_Implementation(UObject* WorldContextObject,
                                                           APlayerController* InPlayerController)
{
	if (!IsValid(WorldContextObject))
	{
		auto res = __func__;
		FString res2 = FString(res);
		UE_LOG(LogHumMenu, Warning, TEXT("%s WorldContextObject is invalid!"), *res2);
		return nullptr;
	}

	if (!IsValid(InPlayerController))
	{
		//UE_LOG(LogHumMenu, Warning, TEXT("%s PlayerController is invalid!"), TEXT(__FUNCTION__));
		return nullptr;
	}

	UWorld* world = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!IsValid(world))
	{
		//UE_LOG(LogHumMenu, Warning, TEXT("%s World is invalid!"), TEXT(__FUNCTION__));
		return nullptr;
	}


	return nullptr;
}

UUserWidget* UOptionObject::CreateOptionWidget_Implementation(UObject* WorldContextObject,
	APlayerController* InPlayerController, UUserWidget* InputWidget)
{
	if (!IsValid(WorldContextObject))
	{
		auto res = __func__;
		FString res2 = FString(res);
		UE_LOG(LogHumMenu, Warning, TEXT("%s WorldContextObject is invalid!"), *res2);
		return nullptr;
	}

	if (!IsValid(InPlayerController))
	{
		//UE_LOG(LogHumMenu, Warning, TEXT("%s PlayerController is invalid!"), TEXT(__FUNCTION__));
		return nullptr;
	}

	UWorld* world = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!IsValid(world))
	{
		//UE_LOG(LogHumMenu, Warning, TEXT("%s World is invalid!"), TEXT(__FUNCTION__));
		return nullptr;
	}


	return nullptr;
}
