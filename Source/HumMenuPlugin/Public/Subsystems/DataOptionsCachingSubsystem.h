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
/**
* @brief Subsystem is used for caching and management of objects related to the option menu structure.
* @brief Caching of such data types as UOptionObject and UOptionsBlockObject.
* @brief It is possible to receive and add data
*/
class HUMMENUPLUGIN_API UDataOptionsCachingSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	/**
	* @brief Cached options map.
	*
	* Stores UOptionObject instances using their unique FName OptionID as a key.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, UOptionObject*> CachedOptions;

	/**
	 * @brief Cached option blocks map.
	 *
	 * Stores UOptionsBlockObject instances using their unique FName BlockID as a key.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, UOptionsBlockObject*> CachedBlocks;
	/**
	 * @brief Returns the entire map of cached option objects.
	 * @return Map of option objects identified by their FName IDs.
	 */
	UFUNCTION(BlueprintCallable)
	TMap<FName, UOptionObject*> GetCachingOptionsData() const { return CachedOptions; }

	/**
	 * @brief Returns the entire map of cached block objects.
	 * @return Map of option block objects identified by their FName IDs.
	 */
	UFUNCTION(BlueprintCallable)
	TMap<FName, UOptionsBlockObject*> GetCachingBlocksData() const { return CachedBlocks; }


	/**
	* @brief Adds an array of options to the cache.
	*
	* Iterates the provided array and adds each object to the cache map.
	* using its OptionID if it is valid (not null and OptionID is not None).
	*
	* @param Options Array of UOptionObject pointers for the cache.
	*/
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

	/**
	* @brief Retrieves a specific option object from the cache by ID.
	*
	* @param OptionID Unique identifier (FName) of the desired option object.
	* @return Pointer to the UOptionObject if found, nullptr otherwise.
	 */
	UFUNCTION(BlueprintCallable)
	UOptionObject* GetObject(const FName OptionID) const
	{
		if (UOptionObject* const* FoundOption = CachedOptions.Find(OptionID)) 
		{
			return *FoundOption; 
		}
		return nullptr;
	}

		/**
	 * @brief Retrieves a specific option block object from the cache by ID.
	 * 
	 * @param BlockID Unique identifier (FName) of the desired option block.
	 * @return Pointer to the UOptionsBlockObject if found, nullptr otherwise.
	 */
	UFUNCTION(BlueprintCallable)
	UOptionsBlockObject* GetBlock(const FName BlockID) const
	{
		if (UOptionsBlockObject* const* FoundBlock = CachedBlocks.Find(BlockID))
		{
			return *FoundBlock;
		}
		return nullptr;
	}

	/**
	 * @brief Add array of option block objects to the cache.
	 *
	 * Iterates through the provided array and adds each block to the cache map
	 * using its BlockID, provided it is valid (non-null and BlockID is not None).
	 *
	 * @param Blocks Array of UOptionsBlockObject pointers to cache.
	 */
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




