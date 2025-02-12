// Fill out your copyright notice in the Description page of Project Settings.
#include "Objects/FloatOptionObject.h"




void UFloatOptionObject::CallOnFloatOptionUpdate(UOptionObject* OptionObject, float Value)
{
    
    if (OnFloatOptionUpdate.IsBound())
    {
        
        OnFloatOptionUpdate.Broadcast(OptionObject, Value);
    }
}
