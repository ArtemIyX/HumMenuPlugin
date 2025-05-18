# Menu Plugin for Unreal 5.5
A plugin used for building parts of the menu for the game Riftborn.

Allows for quick configuration and extension of ready-made menu layouts.

## Examples

### Main Menu

![MainMenu](https://github.com/user-attachments/assets/3cabf52a-3d7d-45f5-b1f8-0299303463e0)


### Server Menu

![ServerMenu](https://github.com/user-attachments/assets/c6e28969-9abd-4ed5-b03e-4e604bf6ae84)

### Options Menu

![OptionsMenu](https://github.com/user-attachments/assets/6381e3c7-b18e-4862-bec2-023bfbbf40c5)

## Easy plugin setup

There is the possibility to easily customize the appearance of widget elements and more

![Widget Settings](https://github.com/user-attachments/assets/46dd819e-5268-42c5-9082-788bd08f6989)

![Data Asset Setup](https://github.com/user-attachments/assets/0a7988e7-bc4a-45fc-8f40-f26bd7ea9b91)

## Asset Manager

```
+PrimaryAssetTypesToScan=(PrimaryAssetType="TextProperties",AssetBaseClass="/Script/HumMenuPlugin.TextPropertiesDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets/TextStyles")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="ButtonProperties",AssetBaseClass="/Script/HumMenuPlugin.ButtonPropertiesDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets/ButtonProperties")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="WidgetsProperties",AssetBaseClass="/Script/HumMenuPlugin.WidgetsPropertiesDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="ButtonAction",AssetBaseClass="/Script/HumMenuPlugin.ButtonActionDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets/ButtonActionDescribe")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="ScrollSettings",AssetBaseClass="/Script/HumMenuPlugin.MenuScrollsSettings",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="TextBoxProperties",AssetBaseClass="/Script/HumMenuPlugin.TextBoxPropertiesDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="CheckBoxProperties",AssetBaseClass="/Script/HumMenuPlugin.CheckBoxPropertiesDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="SliderProperties",AssetBaseClass="/Script/HumMenuPlugin.SliderPropertiesDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="BindingMappingsDA",AssetBaseClass="/Script/HumMenuPlugin.BindingMappingsDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets/InputData")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="KeyProperties",AssetBaseClass="/Script/HumMenuPlugin.KeysPropertiesDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets/InputData")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="ScrollSettings",AssetBaseClass="/Script/HumMenuPlugin.MenuScrollsSettings",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="MbStyle",AssetBaseClass="/Script/HumMenuPlugin.MessageBoxStyle",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="OptionMenuParameters",AssetBaseClass="/Script/HumMenuPlugin.OptionMenuParametersDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
+PrimaryAssetTypesToScan=(PrimaryAssetType="OptionStyle",AssetBaseClass="/Script/HumMenuPlugin.OptionStyleDataAsset",bHasBlueprintClasses=False,bIsEditorOnly=False,Directories=((Path="/HumMenuPlugin/DataAssets")),SpecificAssets=,Rules=(Priority=-1,ChunkId=-1,bApplyRecursively=True,CookRule=AlwaysCook))
```

## Blueprint Subsystems

- BPS_ServerSaver
![subsystems](https://github.com/user-attachments/assets/17608cb9-b231-4df9-8108-3c69f4949d1e)

## Dependecies
- [MenuPlugin](https://github.com/ArtemIyX/HumMenuPlugin)
- [AdvancedAsset](https://github.com/ArtemIyX/AdvancedAssetUnreal)
- [BlueprintSubsystems](https://github.com/ArtemIyX/BlueprintSubsystemsUnreal)
- [DataSerializer](https://github.com/ArtemIyX/DataSerializerUnreal)
- [EasySettings](https://github.com/ArtemIyX/EasySettingsUnreal)
