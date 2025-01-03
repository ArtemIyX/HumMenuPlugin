#include "Libs/MenuPluginBlueprintLibrary.h"

#include "Data/WidgetPropertiesSettings.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"


TSoftObjectPtr<UWidgetsPropertiesDataAsset> UMenuPluginBlueprintLibrary::GetWidgetPropertiesDataAsset()
{
	if (const UWidgetPropertiesSettings* widgetSettings = GetDefault<UWidgetPropertiesSettings>())
	{
		TSoftObjectPtr<UWidgetsPropertiesDataAsset> da = widgetSettings->WidgetsPropertiesDataAsset;
		return da;
	}
	return TSoftObjectPtr<UWidgetsPropertiesDataAsset>();
}
