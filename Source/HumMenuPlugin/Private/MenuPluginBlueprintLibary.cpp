#include "MenuPluginBlueprintLibary.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "WidgetPropertiesSetings.h"  

TSoftObjectPtr<UWidgetsPropertiesDataAsset> UMenuPluginBlueprintLibary::GetWidgetPropertiesDataAsset()
{
    // get config settings
    const UWidgetPropertiesSetings* WidgetSettings = GetDefault<UWidgetPropertiesSetings>();

    // check valid of data asset
    if (WidgetSettings  )
    {
        // ���������� ��� TSoftObjectPtr (�� ��������� ������)
        TSoftObjectPtr<UWidgetsPropertiesDataAsset> da =  WidgetSettings->WidgetsPropertiesDataAsset;
        return da;
    }

    // ���� Data Asset �� ����� ��� ������ ���������, ���������� ������ TSoftObjectPtr
    return TSoftObjectPtr<UWidgetsPropertiesDataAsset>(); // ������ TSoftObjectPtr
}
