// Fill out your copyright notice in the Description page of Project Settings.

#include "WidgetsPropertiesDataAsset.h"

UWidgetsPropertiesDataAsset::UWidgetsPropertiesDataAsset()
{
	ButtonProperties = nullptr;
	AssetType = TEXT("WidgetsProperties");
}

void UWidgetsPropertiesDataAsset::GetTextType(E_Text_style InStyle, UTextPropertiesDataAsset*& OutAsset, bool& OutSuccess)
{
	OutAsset = nullptr;
	OutSuccess = false;

	// Проверяем, есть ли данный стиль текста в карте
	if (TextTypes.Contains(InStyle))
	{
		// Получаем TSoftObjectPtr из карты
		TSoftObjectPtr<UTextPropertiesDataAsset> SoftPtr = TextTypes[InStyle];

		// Загружаем объект синхронно
		UTextPropertiesDataAsset* LoadedAsset = SoftPtr.LoadSynchronous();

		// Проверяем, загрузился ли объект
		if (LoadedAsset)
		{
			OutAsset = LoadedAsset;
			OutSuccess = true;
		}
	}
}
