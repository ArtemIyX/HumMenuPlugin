// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h" 
#include "Kismet/GameplayStatics.h" 

#include "OptionObject.generated.h"

class UUserWidget;
class APlayerController;


UCLASS(Blueprintable, BlueprintType)


class HUMMENUPLUGIN_API UOptionObject : public UObject
{
	GENERATED_BODY()
	
public:
	UOptionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Option", meta = (WorldContext = "WorldContextObject", ShowWorldContextPin))
	UUserWidget* GetOptionWidget(UObject* WorldContextObject, APlayerController* InPlayerController);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Option", meta = (WorldContext = "WorldContextObject"), meta = (WorldContext = "WorldContextObject", ShowWorldContextPin))
	UUserWidget* CreateOptionWidget(UObject* WorldContextObject, APlayerController* InPlayerController, UUserWidget* InputWidget);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText OptionName;


	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UUserWidget> OptionWidget;

	UFUNCTION(BlueprintCallable, Category = "UI", meta = (WorldContext = "WorldContextObject", ShowWorldContextPin, DeterminesOutputType = "WidgetClass", ExposeOnSpawn = "WidgetClass"))
	static UUserWidget* CreateCustomWidget(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetClass, APlayerController* InPlayerController);
};
