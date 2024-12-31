// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuPluginBlueprintLibary.h"


#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "WidgetPropertiesSetings.h"  // ���������� ��������� ��� ��������

UWidgetsPropertiesDataAsset* UMenuPluginBlueprintLibary::GetWidgetPropertiesDataAsset()
{
    // �������� ��������� �������� �� ������������
    UWidgetPropertiesSetings* WidgetSettings = GetMutableDefault<UWidgetPropertiesSetings>();

    // ���������, ���� �� ������ �� Data Asset
    if (WidgetSettings && WidgetSettings->WidgetsPropertiesDataAsset.IsValid())
    {
        return WidgetSettings->WidgetsPropertiesDataAsset.LoadSynchronous(); // ��������� Data Asset ���������
    }

    // ���� Data Asset �� �����, ���������� nullptr
    return nullptr;
}
