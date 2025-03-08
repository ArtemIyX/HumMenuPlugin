// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/ApplyMessageBoxObject.h"

void UApplyMessageBoxObject::ApplyButtonEvent()
{
	OnApplyButtonEvent.Broadcast();
}
