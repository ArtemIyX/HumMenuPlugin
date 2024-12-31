//Enum
#pragma once

#include "CoreMinimal.h"
#include "E_Text_style.generated.h"

// Enum для использования в C++ и Blueprints
UENUM(BlueprintType)
enum  E_Text_style : uint8
{
    TextBase UMETA(DisplayName = "Text Base"), // Основной стиль текста
    TextTitle UMETA(DisplayName = "Text Title"), // Стиль заголовка
    TextSmall UMETA(DisplayName = "Text Small")  // Стиль мелкого текста
};
