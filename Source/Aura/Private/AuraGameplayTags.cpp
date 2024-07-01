// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

// Define the static member variable
FAuraGameplayTags FAuraGameplayTags::GameplayTags;

/* PRIMARY ATTRIBUTES */
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Primary_Strength, "Attributes.Primary.Strength");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Primary_Intelligence, "Attributes.Primary.Intelligence");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Primary_Resilience, "Attributes.Primary.Resilience");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Primary_Vigor, "Attributes.Primary.Vigor");

/* SECONDARY ATTRIBUTES*/
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Secondary_Armor, "Attributes.Secondary.Armor");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Secondary_ArmorPenetration, "Attributes.Secondary.ArmorPenetration");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Secondary_BlockChance, "Attributes.Secondary.BlockChance");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Secondary_CriticalHitChance, "Attributes.Secondary.CriticalHitChance");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Secondary_CriticalHitDamage, "Attributes.Secondary.CriticalHitDamage");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Secondary_CriticalHitResistance, "Attributes.Secondary.CriticalHitResistance");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Secondary_HealthRegeneration, "Attributes.Secondary.HealthRegeneration");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Secondary_ManaRegeneration, "Attributes.Secondary.ManaRegeneration");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Secondary_MaxHealth, "Attributes.Secondary.MaxHealth");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Secondary_MaxMana, "Attributes.Secondary.MaxMana");

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	/*
	 * Primary Attributes
	 */
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Primary.Strength"));
	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Primary.Intelligence"));
	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Primary.Resilience"));
	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Primary.Vigor"));

	/*
	 * Secondary Attributes
	 */
	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Secondary.Armor"));
	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Secondary.ArmorPenetration"));
	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Secondary.BlockChance"));
	GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Secondary.CriticalHitChance"));
	GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Secondary.CriticalHitDamage"));
	GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Secondary.CriticalHitResistance"));
	GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Secondary.HealthRegeneration"));
	GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Secondary.ManaRegeneration"));
	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Secondary.MaxHealth"));
	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Secondary.MaxMana"));

}
