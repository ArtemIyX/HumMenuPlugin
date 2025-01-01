// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/AdvancedDataAsset.h"
#include "MenuButtonUObject.h"
#include "ButtonActionDataAsset.generated.h"


/**
 * 
 */
UCLASS()
class HUMMENUPLUGIN_API UButtonActionDataAsset : public UAdvancedDataAsset
{
	GENERATED_BODY()

public:
    // ���������� ��� ������ ������
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Button")
    FText ButtonText;

    // ���������� ��� ������� ������
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Button")
    UMenuButtonUObject* ButtonObject;
};
