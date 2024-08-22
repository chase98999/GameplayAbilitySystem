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

/* RESISTANCES */
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Resistance_Piercing, "Attributes.Resistance.Piercing");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Resistance_Slashing, "Attributes.Resistance.Slashing");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Resistance_Blunt, "Attributes.Resistance.Blunt");

UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Resistance_Fire, "Attributes.Resistance.Fire");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Resistance_Lightning, "Attributes.Resistance.Lightning");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Resistance_Arcane, "Attributes.Resistance.Arcane");

/* INPUT ACTION TAGS */
UE_DEFINE_GAMEPLAY_TAG(TAG_InputTag_LMB, "InputTag.LMB");
UE_DEFINE_GAMEPLAY_TAG(TAG_InputTag_RMB, "InputTag.RMB");
UE_DEFINE_GAMEPLAY_TAG(TAG_InputTag_1, "InputTag.1");
UE_DEFINE_GAMEPLAY_TAG(TAG_InputTag_2, "InputTag.2");
UE_DEFINE_GAMEPLAY_TAG(TAG_InputTag_3, "InputTag.3");
UE_DEFINE_GAMEPLAY_TAG(TAG_InputTag_4, "InputTag.4");
UE_DEFINE_GAMEPLAY_TAG(TAG_InputTag_Shift, "InputTag.Shift");

/* Effects Tags */
UE_DEFINE_GAMEPLAY_TAG(TAG_Effects_HitReact, "Effects.HitReact");

/* Damage Input Tags */
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage, "Damage");

UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Physical_Piercing, "Damage.Physical.Piercing");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Physical_Slashing, "Damage.Physical.Slashing");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_Physical_Blunt, "Damage.Physical.Blunt");

UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_NonPhysical_Fire, "Damage.NonPhysical.Fire");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_NonPhysical_Lightning, "Damage.NonPhysical.Lightning");
UE_DEFINE_GAMEPLAY_TAG(TAG_Damage_NonPhysical_Arcane, "Damage.NonPhysical.Arcane");


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

	/*
	* Resistances
	*/
	GameplayTags.Attributes_Resistance_Piercing = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Resistance.Piercing"));
	GameplayTags.Attributes_Resistance_Slashing = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Resistance.Slashing"));
	GameplayTags.Attributes_Resistance_Blunt = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Resistance.Blunt"));
	GameplayTags.Attributes_Resistance_Fire = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Resistance.Fire"));
	GameplayTags.Attributes_Resistance_Lightning = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Resistance.Lightning"));
	GameplayTags.Attributes_Resistance_Arcane = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Resistance.Arcane"));

	/*
	* Input Tags
	*/
	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().RequestGameplayTag(FName("InputTag.LMB"));
	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().RequestGameplayTag(FName("InputTag.RMB"));
	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().RequestGameplayTag(FName("InputTag.1"));
	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().RequestGameplayTag(FName("InputTag.2"));
	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().RequestGameplayTag(FName("InputTag.3"));
	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().RequestGameplayTag(FName("InputTag.4"));
	GameplayTags.InputTag_Shift = UGameplayTagsManager::Get().RequestGameplayTag(FName("InputTag.Shift"));

	/* Effects Tags */
	GameplayTags.Effects_HitReact = UGameplayTagsManager::Get().RequestGameplayTag(FName("Effects.HitReact"));

	/* Damage Gameplay Tags */
	GameplayTags.Damage = UGameplayTagsManager::Get().RequestGameplayTag(FName("Damage"));
	GameplayTags.Damage_Physical_Piercing = UGameplayTagsManager::Get().RequestGameplayTag(FName("Damage.Physical.Piercing"));
	GameplayTags.Damage_Physical_Slashing = UGameplayTagsManager::Get().RequestGameplayTag(FName("Damage.Physical.Slashing"));
	GameplayTags.Damage_Physical_Blunt = UGameplayTagsManager::Get().RequestGameplayTag(FName("Damage.Physical.Blunt"));
	GameplayTags.Damage_NonPhysical_Fire = UGameplayTagsManager::Get().RequestGameplayTag(FName("Damage.NonPhysical.Fire"));
	GameplayTags.Damage_NonPhysical_Lightning = UGameplayTagsManager::Get().RequestGameplayTag(FName("Damage.NonPhysical.Lightning"));
	GameplayTags.Damage_NonPhysical_Arcane = UGameplayTagsManager::Get().RequestGameplayTag(FName("Damage.NonPhysical.Arcane"));

	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Physical_Piercing, GameplayTags.Attributes_Resistance_Piercing);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Physical_Slashing, GameplayTags.Attributes_Resistance_Slashing);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Physical_Blunt, GameplayTags.Attributes_Resistance_Blunt);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_NonPhysical_Fire, GameplayTags.Attributes_Resistance_Fire);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_NonPhysical_Lightning, GameplayTags.Attributes_Resistance_Lightning);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_NonPhysical_Arcane, GameplayTags.Attributes_Resistance_Arcane);
}
