//Enum
#pragma once

#include "CoreMinimal.h"
#include "HumMenuTypes.generated.h"

UENUM(BlueprintType, Blueprintable)
enum class ETextStyle : uint8
{
	Text_None UMETA(Hidden),
	Text_Base UMETA(DisplayName = "Text Base"), // Text style base
	Text_Title UMETA(DisplayName = "Text Title"), // Title text style
	Text_Small UMETA(DisplayName = "Text Small"), // Small text type
	Text_BigTitle UMETA(DisplayName = "Text Big Title"), // Big Title style
	Text_Max UMETA(Hidden)
};
