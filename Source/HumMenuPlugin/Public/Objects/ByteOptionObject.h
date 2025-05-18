// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objects/OptionObject.h"
#include "ByteOptionObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
/**
* @brief An object that describes an option widget returning a value as an unit8
*/
class HUMMENUPLUGIN_API UByteOptionObject : public UOptionObject
{
	GENERATED_BODY()
	
public:
	/**
	 * @brief Delegate for notifying when a ByteOption value has been updated.
	 *	Called when the option's value changes.
	 * @param OptionObject Pointer to the updated option object.
	 * @param Value New unit8 value.
	 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnByteOptionUpdate, UOptionObject*, OptionObject, uint8, Value);

	/**
	 * @brief Delegate triggered when the option value changes.
	 */
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnByteOptionUpdate OnByteOptionUpdate;

	/**
	* @brief Current unit8 value of the option.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	uint8 CurrentValue;

	/**
	 * @brief List of paragraphs associated with specific values
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	TArray<FText> Paragraphs;

	/**
	* @brief Calls the OnByteOptionUpdate delegate with the specified value.
	*
	* Used to notify listeners that the option's value has changed.
	*
	* @param OptionObject Pointer to the option object.
	* @param Value New unit8 value.
	*/
	UFUNCTION(BlueprintCallable, Category = "Events")
	void CallOnByteOptionUpdate(UOptionObject* OptionObject, uint8 Value);
};
