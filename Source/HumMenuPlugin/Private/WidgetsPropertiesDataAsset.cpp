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
	if (TextTypes.Contains(InStyle)) {
		auto val = TextTypes.Find(InStyle);
		if (val) {
			auto val2 = *val;
			if (val2) {
				OutAsset = val2;
				OutSuccess = true;
			}
		}
	}
}
