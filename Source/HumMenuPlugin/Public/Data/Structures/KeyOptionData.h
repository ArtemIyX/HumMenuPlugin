#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"

#include "EnhancedInputComponent.h"
#include "KeyOptionData.generated.h"



/**
 * @brief  This class is used as a structure for storing information, to list those InputActions in UBindingMappingsDataAsset::BindingMappings that will be used button bind menu
 */
USTRUCT(BlueprintType)
struct HUMMENUPLUGIN_API FKeyOptionData
{
    GENERATED_BODY()

public:
   




    /**
    * @brief Used to store Input Action for binding
    */

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key Options")
    UInputAction* CurrentInputAction;

    FKeyOptionData()
        :  CurrentInputAction(nullptr)
    {
    }
};
