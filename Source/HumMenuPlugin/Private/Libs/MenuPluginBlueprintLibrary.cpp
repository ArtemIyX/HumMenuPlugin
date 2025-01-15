#include "Libs/MenuPluginBlueprintLibrary.h"

#include "Blueprint/UserWidget.h"
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

void UMenuPluginBlueprintLibrary::ClearObject(UObject*& InObjectRef)
{
	// Exit if the object reference is invalid.
	if (!IsValid(InObjectRef))
	{
		return; 
	}

	if (AActor* actor = Cast<AActor>(InObjectRef))
	{
		// Destroy the actor.
		actor->Destroy();
		
		// Clear the reference.
		InObjectRef = nullptr; 
		return;
	}

	if (UUserWidget* userWidget = Cast<UUserWidget>(InObjectRef))
	{
		// Remove the user widget from its parent.
		userWidget->RemoveFromParent(); 
	}

	// Mark the object for destruction.
	InObjectRef->ConditionalBeginDestroy(); 
	// Clear the reference.
	InObjectRef = nullptr;
}
