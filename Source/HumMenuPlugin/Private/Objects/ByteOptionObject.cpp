// Fill out your copyright notice in the Description page of Project Settings.


#include "Objects/ByteOptionObject.h"


void UByteOptionObject::CallOnByteOptionUpdate(UOptionObject* OptionObject, uint8 Value)
{

    if (OnByteOptionUpdate.IsBound())
    {

        OnByteOptionUpdate.Broadcast(OptionObject, Value);
    }
}

