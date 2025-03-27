// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/TextMessageBox.h"

UTextMessageBox::UTextMessageBox()
{
}


void UTextMessageBox::ApplyButtonEvent(FText InputText)
{
	OnApplyButtonEvent.Broadcast(InputText);
}


void UTextMessageBox::RejectButtonEvent()
{
	OnRejectButtonEvent.Broadcast();
}