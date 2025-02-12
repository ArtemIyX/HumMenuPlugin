#pragma once

#include "CoreMinimal.h"
#include "KeyOptionData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct HUMMENUPLUGIN_API FKeyOptionData
{
    GENERATED_BODY()

public:
   
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key Options")
    FName MappingName;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key Options")
    FText KeyOptionName;


    FKeyOptionData()
        : MappingName(NAME_None), KeyOptionName(FText::FromString("Default Option"))
    {
    }
};
