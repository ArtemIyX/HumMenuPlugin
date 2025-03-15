// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "Data/HumMenuTypes.h"
#include "MessageBoxStyle.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class HUMMENUPLUGIN_API UMessageBoxStyle : public UAdvancedDataAsset
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FSlateColor MessageThemeColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	ETextStyle MessageTitleTextStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	ETextStyle MessageInformationTextStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox Button")
	FSlateBrush MessageButtonStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox Button")
	FSlateBrush MessageButtonStyleHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox Button")
	ETextStyle MessageBoxButtonTextStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FSlateBrush MessageBoxTopBlockStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	FSlateBrush MessageBoxDownBlockStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBox")
	int32 MessageBoxZOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBoxButtonText")
	FText ApplyButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MessageBoxButtonText")
	FText RejectButtonText;

	UMessageBoxStyle();
};
