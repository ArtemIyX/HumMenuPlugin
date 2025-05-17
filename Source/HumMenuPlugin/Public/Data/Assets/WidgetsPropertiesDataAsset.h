// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Data/HumMenuTypes.h"
#include "Data/Assets/MenuScrollsSettings.h"
#include "Data/Assets/TextBoxPropertiesDataAsset.h"
#include "Data/Assets/CheckBoxPropertiesDataAsset.h"
#include "Data/Assets/SliderPropertiesDataAsset.h"
#include "Data/Assets/OptionMenuParametersDataAsset.h"
#include "Data/Assets/OptionStyleDataAsset.h"
#include "Data/Assets/BindingMappingsDataAsset.h"
#include "Data/Assets/MessageBoxStyle.h"
#include "WidgetsPropertiesDataAsset.generated.h"

class UButtonPropertiesDataAsset;
class UButtonActionDataAsset;
class UTextPropertiesDataAsset;

/**
 *
 */
UCLASS(BlueprintType)
/**
 * @brief A central Data Asset that stores appearance and behavior settings for UI widgets.
 *
 * This asset contains properties for customizing various UI components, including text styles,
 * buttons, sliders, checkboxes, message boxes, and scrollbars.
 *

 * Allows you to centrally configure widget properties without changing their blueprints.
 *
 * The settings stored here are used by the UI system to dynamically style and manage widgets at runtime.
 * 
 * @note You can customize this data asset in Developer settings - UWidgetPropertiesSettings
 */
class HUMMENUPLUGIN_API UWidgetsPropertiesDataAsset : public UAdvancedDataAsset
{
    GENERATED_BODY()

public:
    UWidgetsPropertiesDataAsset();

public:
    /** Mapping of text styles to their corresponding types*/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget Properties")
    TMap<ETextStyle, TSoftObjectPtr<UTextPropertiesDataAsset>> TextTypes;
	
    /** Base button styling and behavior properties asset. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widget Properties")
    TSoftObjectPtr<UButtonPropertiesDataAsset> ButtonProperties;
	
    /** Strength of background blur effect for menus(linked to all menus). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Appearance")
    float MenuBlurStrength;

     /**
     * @brief Background color of the menu(linked to all menus)
     * 
     * * It is recommended to use a low alpha value to achieve a subtle background color tone effect.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Appearance")
    FLinearColor BackgroundMenuColor;

    /**
   * @brief This parameter is used to define the significant styling color of your UI elements.
   * 
   * @note For example can be used to adjust the color styles of your elements
   */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Appearance")
    FLinearColor SurfaceMenuElementColor;

        /**
     * @brief This parameter is used to define the significant styling color of your elements when hovered over.
     *
     * @note For example can be used to adjust the color styles of your elements
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget Appearance")
    FLinearColor HoveredSurfaceMenuElementColor;
    
        /**
    * @brief Array used to store actions and parameters for buttons in the **main menu**.
    * Each element in the array references a specific button action that can be triggered when the corresponding button is pressed.
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Menu Butons Action") 
    TArray<TSoftObjectPtr<UButtonActionDataAsset>> ButtonActions;

    /** Scroll settings for menu scrollbar elements. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scroll Settings")
    UMenuScrollsSettings* ScrollSetting;

    /** Appearance properties for text box elements. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text Box Properties")
    UTextBoxPropertiesDataAsset* TextBoxProperties;

    /** Appearance properties for check box elements. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Check Box Properties")
    UCheckBoxPropertiesDataAsset* CheckBoxProperties;

    /** Appearance and behavior properties for slider elements. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slider Properties")
    USliderPropertiesDataAsset* SliderProperties;

    /**Parameter for setting up the **options menu** structure. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OptionsMenuProperties")
    UOptionMenuParametersDataAsset* OptionsDataAsset;

    /**Visual styling data for the option widget element*/
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OptionsMenuProperties")
    UOptionStyleDataAsset* OptionStyle;

    /**
 * @brief A reference to the binding mappings asset used for configuring input bindings.
 *
 * This asset contains the mappings between input actions and UI elements in the options menu,
 * allowing for dynamic assignment and customization of input controls within the settings.

 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OptionsMenuProperties")
    UBindingMappingsDataAsset* BindingMappings;

    /** Styling and layout settings for message boxes. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox Style")
    UMessageBoxStyle* MessageBoxDatAsset;



public:

    /**
     * @brief Retrieves the text style asset corresponding to the specified text style.
     *
     * @param InStyle The text style to retrieve.
     * @param OutAsset A reference to the retrieved Text Properties Data Asset.
     * @param OutSuccess True if a corresponding asset was found; otherwise false.
     */
    UFUNCTION(BlueprintCallable)
    void GetTextType(ETextStyle InStyle, UTextPropertiesDataAsset*& OutAsset, bool& OutSuccess);
};

