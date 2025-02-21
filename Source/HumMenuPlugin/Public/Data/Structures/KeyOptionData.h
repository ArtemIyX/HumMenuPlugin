#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"

#include "EnhancedInputComponent.h"
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
    UInputAction* CurrentInputAction;

    FKeyOptionData()
        :  CurrentInputAction(nullptr)
    {
    }
};
