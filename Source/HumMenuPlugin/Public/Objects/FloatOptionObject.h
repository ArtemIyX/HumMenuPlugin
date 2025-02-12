#pragma once

#include "CoreMinimal.h"
#include "Objects/OptionObject.h"
#include "FloatOptionObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class HUMMENUPLUGIN_API UFloatOptionObject : public UOptionObject
{
	GENERATED_BODY()

public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFloatOptionUpdate, UOptionObject*, OptionObject, float, Value);


	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnFloatOptionUpdate OnFloatOptionUpdate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	float CurrentValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	float MinVal;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	float MaxVal;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
	float SliderStep;



	UFUNCTION(BlueprintCallable, Category = "Events")
	void CallOnFloatOptionUpdate(UOptionObject* OptionObject, float Value);
};
