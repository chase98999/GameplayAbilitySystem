// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NativeGameplayTags.h"

/* PRIMARY ATTRIBUTES */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Primary_Strength)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Primary_Intelligence)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Primary_Resilience)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Primary_Vigor)

/* SECONDARY ATTRIBUTES */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Secondary_Armor);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Secondary_ArmorPenetration);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Secondary_BlockChance);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Secondary_CriticalHitChance);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Secondary_CriticalHitDamage);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Secondary_CriticalHitResistance);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Secondary_HealthRegeneration);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Secondary_ManaRRegeneration);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Secondary_MaxHealth);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Secondary_MaxMana);

/*
* AuraGameplayTags
* 
* Singleton containing native gameplay tags
*/
struct FAuraGameplayTags
{
public:
	static const FAuraGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();

	//FGameplayTag Attributes_Secondary_Armor;
protected:

private:
	static FAuraGameplayTags GameplayTags;
};
