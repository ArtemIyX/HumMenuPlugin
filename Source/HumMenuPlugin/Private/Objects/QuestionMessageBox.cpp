// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/QuestionMessageBox.h"

void UQuestionMessageBox::ApplyButtonEvent()
{
	OnApplyButtonEvent.Broadcast();
}

void UQuestionMessageBox::RejectButtonEvent()
{
	OnRejectButtonEvent.Broadcast();
}