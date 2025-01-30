// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/OptionObject.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

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



UUserWidget* UOptionObject::CreateCustomWidget(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, APlayerController* InPlayerController)
{
	if (!IsValid(WorldContextObject) || !IsValid(WidgetClass))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s: Invalid parameters!"), *FString(__func__));
		return nullptr;
	}

	// Получаем мир из контекста (лучший способ)
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!IsValid(World))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s: Could not get valid World!"), *FString(__func__));
		return nullptr;
	}

	// Если контроллер не передан, берём первого
	if (!IsValid(InPlayerController))
	{
		InPlayerController = World->GetFirstPlayerController();
		if (!IsValid(InPlayerController))
		{
			UE_LOG(LogTemp, Warning, TEXT("%s: No valid PlayerController found!"), *FString(__func__));
			return nullptr;
		}
	}

	// Создаём виджет с правильным типом
	UUserWidget* CreatedWidget = CreateWidget<UUserWidget>(InPlayerController, WidgetClass);
	if (!IsValid(CreatedWidget))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s: Failed to create widget!"), *FString(__func__));
		return nullptr;
	}

	return CreatedWidget; // Просто создаём и возвращаем, НЕ добавляя в Viewport
}
