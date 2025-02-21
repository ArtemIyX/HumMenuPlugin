// Fill out your copyright notice in the Description page of Project Settings.

#include "Data/Assets/WidgetsPropertiesDataAsset.h"
#include "Data/Assets/TextPropertiesDataAsset.h"

UWidgetsPropertiesDataAsset::UWidgetsPropertiesDataAsset(): MenuBlurStrength(0), BackgroundMenuColor(),
                                                            SurfaceMenuElementColor(),
                                                            HoveredSurfaceMenuElementColor(),
                                                            ScrollSetting(nullptr),
                                                            TextBoxProperties(nullptr),
                                                            CheckBoxProperties(nullptr),
                                                            SliderProperties(nullptr),
                                                            OptionsDataAsset(nullptr),
                                                            OptionStyle(nullptr),
                                                            BindingMappings(nullptr)
{
	ButtonProperties = nullptr;
	AssetType = TEXT("WidgetsProperties");
}

void UWidgetsPropertiesDataAsset::GetTextType(ETextStyle InStyle, UTextPropertiesDataAsset*& OutAsset, bool& OutSuccess)
{
	OutAsset = nullptr;
	OutSuccess = false;
	
	if (TextTypes.Contains(InStyle))
	{
		TSoftObjectPtr<UTextPropertiesDataAsset> softPtr = TextTypes[InStyle];
		if (UTextPropertiesDataAsset* loadedAsset = softPtr.LoadSynchronous())
		{
			OutAsset = loadedAsset;
			OutSuccess = true;
		}
	}
}
