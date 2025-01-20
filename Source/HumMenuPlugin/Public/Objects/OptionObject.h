// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OptionObject.generated.h"

class UUserWidget;
class APlayerController;


UCLASS(Blueprintable, BlueprintType, meta = (ShowWorldContextPin))


class HUMMENUPLUGIN_API UOptionObject : public UObject
{
	GENERATED_BODY()
	
public:
	UOptionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Option", meta = (WorldContext = "WorldContextObject"))
	UUserWidget* GetOptionWidget(UObject* WorldContextObject, APlayerController* InPlayerController);
};
