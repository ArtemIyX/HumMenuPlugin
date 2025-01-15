// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "CustomMenuListView.generated.h"

/**
 * @brief Custom implementation of UListView that allows setting a custom widget class.
 * 
 * This class extends the functionality of UListView to allow developers to specify 
 * a custom entry widget class dynamically through Blueprints or code.
 */
UCLASS(Blueprintable, BlueprintType)
class HUMMENUPLUGIN_API UCustomMenuListView : public UListView
{
	GENERATED_BODY()

public:
	/**
	 * @brief Default constructor for UCustomMenuListView.
	 * 
	 * Initializes the custom list view with the provided object initializer.
	 * 
	 * @param Initialize Object initializer for the class.
	 */
	UCustomMenuListView(const FObjectInitializer& Initialize);

public:
	/**
	 * @brief Sets the entry widget class for the list view.
	 * 
	 * This method allows the specification of a custom user widget class to be used 
	 * as the entry widget for the list view. 
	 *
	 * @note Input class must implement 'IUserListEntry'
	 * @param InClass The custom widget class to be used as the entry widget. Must derive from UUserWidget.
	 */
	UFUNCTION(BlueprintCallable, Category="ListView")
	void SetEntryWidgetClass(UPARAM(DisplayName="User Entry Widget Class") TSubclassOf<UUserWidget> InClass);
};
