// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objects/OptionObject.h"
#include "InputCoreTypes.h"


#include "EnhancedInputComponent.h"
#include "KeyOptionObject.generated.h"


/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
/**
* @brief An object that describes an option widget returning a value as an key
*/
class HUMMENUPLUGIN_API UKeyOptionObject : public UOptionObject
{
	GENERATED_BODY()
	

public:
	/**
	* @brief Delegate for notifying when a  Key Option value has been updated.
	*	Called when the option's value changes.
	* @param OptionObject Pointer to the updated option object.
	* @param Value New key value.
 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKeyOptionUpdate, UOptionObject*, OptionObject, FKey, Value);

	/**
	 * @brief Delegate triggered when the option value changes.
	 */
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnKeyOptionUpdate OnKeyOptionUpdate;

	/**
	* @brief Current key value of the option.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	FKey CurrentKey;

	/**
	* @brief The name of the Mapping whose key this option changes
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	FName MappingName;

	/**
* @brief Calls the OnKeyOptionUpdate delegate with the specified value.
*
* Used to notify listeners that the option's value has changed.
*
* @param OptionObject Pointer to the option object.
* @param Value New Key value.
*/
	UFUNCTION(BlueprintCallable, Category = "Events")
	void CallOnKeyOptionUpdate(UOptionObject* OptionObject, FKey Value);
};
