// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Data/LevelUpInfo.h"

int32 ULevelUpInfo::GetLevelForXPValue(int32 XPValueToConvert)
{
	// We are just using the array's index as the level, so we need to add 1 to the result
	return BinarySearch(LevelUpInformation, XPValueToConvert) + 1;
}

/*
 * Since we could have a lot of levels, this will be a much quicker lookup time than
 * having to traverse an entire array
 * @return int32: Returns index of the closest level
 */
int32 ULevelUpInfo::BinarySearch(const TArray<FAuraLevelUpInfo>& ArraySegment, int32 Target)
{
	int LowIndex = 0;
	int HighIndex = ArraySegment.Num() - 1;
	
	int32 ClosestIndex = -1;  // Track the closest index that doesn't exceed the target
    
	while (LowIndex <= HighIndex)
	{
		int32 MidIndex = (LowIndex + HighIndex) / 2;

		// If MidIndex element is within bounds and less than or equal to target, store it as a potential result
		if (ArraySegment[MidIndex].LevelUpRequirement <= Target)
		{
			ClosestIndex = MidIndex;  // Update closest valid index
			LowIndex = MidIndex + 1;  // Search in the right half for possibly closer match
		}
		else
		{
			// Search in the left half
			HighIndex = MidIndex - 1;
		}
	}

	return ClosestIndex;
}
