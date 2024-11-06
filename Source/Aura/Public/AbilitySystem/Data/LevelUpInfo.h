// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelUpInfo.generated.h"

USTRUCT(BlueprintType)
struct FAuraLevelUpInfo
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 LevelUpRequirement = 200;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 AttributePointReward = 5;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 SpellPointReward = 2;
};

/**
 * 
 */
UCLASS()
class AURA_API ULevelUpInfo : public UDataAsset
{
	GENERATED_BODY()

public:
	// MUST BE SORTED TO WORK PROPERLY
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "LevelUpInformation")
	TArray<FAuraLevelUpInfo> LevelUpInformation;	// Key, Val: XPReq, StructInfo

	UFUNCTION(BlueprintCallable, Category = "LevelUpInformation")
	int32 GetLevelForXPValue(int32 XPValueToConvert) const;

private:
	// Helper function to find level values through Binary Search Tree
	int32 BinarySearch(const TArray<FAuraLevelUpInfo>& ArraySegment, int32 Target);
};
