#pragma once

#include "CoreMinimal.h"
#include "Objects/OptionObject.h"
#include "FloatOptionObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)

/**
* @brief An object that describes an option widget returning a value as an float
*/
class HUMMENUPLUGIN_API UFloatOptionObject : public UOptionObject
{
	GENERATED_BODY()

public:

	/**
	* @brief Delegate for notifying when a  Float Option value has been updated.
	 *	Called when the option's value changes.
	 * @param OptionObject Pointer to the updated option object.
	* @param Value New float value.
	 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFloatOptionUpdate, UOptionObject*, OptionObject, float, Value);


	/**
	 * @brief Delegate triggered when the option value changes.
	 */
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnFloatOptionUpdate OnFloatOptionUpdate;

	/**
	* @brief Current float value of the option.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	float CurrentValue;

	/**
	* @brief The maximum slider value that the option can return
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	float MinVal;

	/**
	* @brief The minimum slider value that the option can return
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	float MaxVal;

	/**
	* @brief Step of changing option value
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	float SliderStep;


	/**
* @brief Calls the OnFloatOptionUpdate delegate with the specified value.
*
* Used to notify listeners that the option's value has changed.
*
* @param OptionObject Pointer to the option object.
* @param Value New Float value.
*/
	UFUNCTION(BlueprintCallable, Category = "Events")
	void CallOnFloatOptionUpdate(UOptionObject* OptionObject, float Value);
};
