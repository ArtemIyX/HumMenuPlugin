// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Objects/OptionObject.h"
#include "Objects/OptionsBlockObject.h"


#include "DataOptionsCachingSubsystem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class HUMMENUPLUGIN_API UDataOptionsCachingSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, UOptionObject*> CachedOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, UOptionsBlockObject*> CachedBlocks;

	UFUNCTION(BlueprintCallable)
	TMap<FName, UOptionObject*> GetCachingOptionsData() const { return CachedOptions; }

	UFUNCTION(BlueprintCallable)
	TMap<FName, UOptionsBlockObject*> GetCachingBlocksData() const { return CachedBlocks; }

	UFUNCTION(BlueprintCallable)
	void AddOptionCache(const TArray<UOptionObject*>& Options)
	{
		for (UOptionObject* Option : Options)
		{
			if (Option && !Option->OptionID.IsNone())
			{
				CachedOptions.Add(Option->OptionID, Option);
			}
		}
	}


	UFUNCTION(BlueprintCallable)
	UOptionObject* GetObject(const FName OptionID) const
	{
		if (UOptionObject* const* FoundOption = CachedOptions.Find(OptionID)) 
		{
			return *FoundOption; 
		}
		return nullptr;
	}

	UFUNCTION(BlueprintCallable)
	UOptionsBlockObject* GetBlock(const FName BlockID) const
	{
		if (UOptionsBlockObject* const* FoundBlock = CachedBlocks.Find(BlockID))
		{
			return *FoundBlock;
		}
		return nullptr;
	}


	UFUNCTION(BlueprintCallable)
	void AddBlockCache(const TArray<UOptionsBlockObject*>& Blocks)
	{
		for (UOptionsBlockObject* Block : Blocks)  
		{
			if (Block && !Block->BlockID.IsNone())  
			{
				CachedBlocks.Add(Block->BlockID, Block);  
			}
		}
	}



};




