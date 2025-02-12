// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/KeyOptionObject.h"
#include "InputCoreTypes.h"

void UKeyOptionObject::CallOnKeyOptionUpdate(UOptionObject* OptionObject, FKey Value)
{

    if (OnKeyOptionUpdate.IsBound())
    {

        OnKeyOptionUpdate.Broadcast(OptionObject, Value);
    }
}

