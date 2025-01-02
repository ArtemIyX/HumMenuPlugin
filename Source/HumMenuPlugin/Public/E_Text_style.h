//Enum
#pragma once

#include "CoreMinimal.h"
#include "E_Text_style.generated.h"

// Enum для использования в C++ и Blueprints
UENUM(BlueprintType)
enum class  E_Text_style : uint8
{
    NoneVal UMETA(DisplayName = "NoneVal"), // None valu
    TextBase UMETA(DisplayName = "Text Base"), // Text style base(for base menues elements)
    TextTitle UMETA(DisplayName = "Text Title"), // Title text style(for example title for windows )
    TextSmall UMETA(DisplayName = "Text Small"),  // Small text type(tooltips and other)
    TextBigTitle UMETA(DisplayName = "Text Big Title")  // Big Title style(for example game name title in main menu)
};
