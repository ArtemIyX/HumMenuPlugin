// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MessageBoxBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class HUMMENUPLUGIN_API UMessageBoxBase : public UObject
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FText MessageTitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FText MessageInfoText;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MessageBox")
	void AddMessageToViewport(UUserWidget* MessageWidgetRef);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Option", meta = (WorldContext = "WorldContextObject", ShowWorldContextPin))
	UUserWidget* GetMessageBoxWidget(UObject* WorldContextObject, APlayerController* InPlayerController);

	UFUNCTION(BlueprintCallable, Category = "Option")
	UUserWidget* CreateNewWidget(APlayerController* InPlayerController, TSubclassOf<UUserWidget> WidgetClass);
};
