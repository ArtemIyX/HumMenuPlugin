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
        // Возвращаем сам TSoftObjectPtr (не загружаем объект)
        TSoftObjectPtr<UWidgetsPropertiesDataAsset> da =  WidgetSettings->WidgetsPropertiesDataAsset;
        return da;
    }

    // Если Data Asset не задан или ссылка невалидна, возвращаем пустой TSoftObjectPtr
    return TSoftObjectPtr<UWidgetsPropertiesDataAsset>(); // Пустой TSoftObjectPtr
}
