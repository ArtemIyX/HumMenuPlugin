// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/CustomMenuListView.h"

UCustomMenuListView::UCustomMenuListView(const FObjectInitializer& Initialize) : Super(Initialize)
{
}

void UCustomMenuListView::SetEntryWidgetClass(TSubclassOf<UUserWidget> InClass)
{
	EntryWidgetClass = InClass;
}
