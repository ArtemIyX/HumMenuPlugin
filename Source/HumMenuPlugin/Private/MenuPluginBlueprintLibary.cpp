// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuPluginBlueprintLibary.h"


#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "WidgetPropertiesSetings.h"  // Подключаем настройки для виджетов

UWidgetsPropertiesDataAsset* UMenuPluginBlueprintLibary::GetWidgetPropertiesDataAsset()
{
    // Получаем настройки виджетов из конфигурации
    UWidgetPropertiesSetings* WidgetSettings = GetMutableDefault<UWidgetPropertiesSetings>();

    // Проверяем, есть ли ссылка на Data Asset
    if (WidgetSettings && WidgetSettings->WidgetsPropertiesDataAsset.IsValid())
    {
        return WidgetSettings->WidgetsPropertiesDataAsset.LoadSynchronous(); // Загружаем Data Asset синхронно
    }

    // Если Data Asset не задан, возвращаем nullptr
    return nullptr;
}
