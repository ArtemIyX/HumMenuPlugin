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

	// ���������, ���� �� ������ ����� ������ � �����
	if (TextTypes.Contains(InStyle))
	{
		// �������� TSoftObjectPtr �� �����
		TSoftObjectPtr<UTextPropertiesDataAsset> SoftPtr = TextTypes[InStyle];

		// ��������� ������ ���������
		UTextPropertiesDataAsset* LoadedAsset = SoftPtr.LoadSynchronous();

		// ���������, ���������� �� ������
		if (LoadedAsset)
		{
			OutAsset = LoadedAsset;
			OutSuccess = true;
		}
	}
}
