// Fill out your copyright notice in the Description page of Project Settings.


#include "Data/Assets/MessageBoxStyle.h"

/**
* @brief Constructor sets the Data Asset **MbStyle** type
* 
* Z-order for the message box widget to 0.
*/
UMessageBoxStyle::UMessageBoxStyle()
{
	AssetType = TEXT("MbStyle");
	MessageBoxZOrder = 0;
}