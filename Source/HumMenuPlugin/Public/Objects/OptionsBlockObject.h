// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Objects/OptionObject.h"
#include "OptionsBlockObject.generated.h"

/**
 * 
 */

class UUserWidget;
class APlayerController;

UCLASS(Blueprintable, BlueprintType, meta = (ShowWorldContextPin))
class HUMMENUPLUGIN_API UOptionsBlockObject : public UObject
{
	GENERATED_BODY()
	

public:
	UOptionsBlockObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText BlockName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UOptionObject>> OptionClasses;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	UUserWidget* GetOptionsBlockWidget(UObject* WorldContextObject, APlayerController* InPlayerController);


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Options")
	void AddOptions(const TArray<UOptionObject*>& OptionObjects, UObject* WorldContextObject, APlayerController* InPlayerController);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Options")
	void GenerateOptions(UObject* WorldContextObject, APlayerController* InPlayerController, TArray<UOptionObject*>& OutOptions);


};
