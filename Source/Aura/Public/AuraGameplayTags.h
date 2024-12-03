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

/* META TAGS */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Meta_IncomingDamage);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Meta_IncomingXP);

/* RESISTANCES */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Resistance_Piercing);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Resistance_Slashing);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Resistance_Blunt);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Resistance_Fire);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Resistance_Lightning);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Attributes_Resistance_Arcane);

/* Input Action Tags */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_InputTag_LMB);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_InputTag_RMB);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_InputTag_1);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_InputTag_2);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_InputTag_3);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_InputTag_4);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_InputTag_Shift);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_InputTag_Passive_1);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_InputTag_Passive_2);

/* Effects Tags */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Effects_HitReact);

/* Damage Gameplay Tags */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Damage);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Damage_Physical_Piercing);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Damage_Physical_Slashing);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Damage_Physical_Blunt);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Damage_NonPhysical_Fire);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Damage_NonPhysical_Lightning);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Damage_NonPhysical_Arcane);

/* Abilities Tags */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Attack_Melee);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Attack_Ranged);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Attack_Spell);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Summon);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(Tag_Abilities_Fire_Firebolt);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_HitReact);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Status_Locked);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Status_Eligible);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Status_Unlocked);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Status_Equipped);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Type_Offensive);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Type_Passive);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Abilities_Type_None);

/* Cooldown Tags */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Cooldown_Fire_Firebolt);

/* Combat Socket Tags */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_CombatSocket_Weapon);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_CombatSocket_RightHand);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_CombatSocket_LeftHand);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_CombatSocket_Tail);

/* Montage Tags */
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Montage_Attack_1);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Montage_Attack_2);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Montage_Attack_3);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Montage_Attack_4);


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

	FGameplayTag Attributes_Primary_Strength;
	FGameplayTag Attributes_Primary_Intelligence;
	FGameplayTag Attributes_Primary_Resilience;
	FGameplayTag Attributes_Primary_Vigor;

	FGameplayTag Attributes_Secondary_Armor;
	FGameplayTag Attributes_Secondary_ArmorPenetration;
	FGameplayTag Attributes_Secondary_BlockChance;
	FGameplayTag Attributes_Secondary_CriticalHitChance;
	FGameplayTag Attributes_Secondary_CriticalHitDamage;
	FGameplayTag Attributes_Secondary_CriticalHitResistance;
	FGameplayTag Attributes_Secondary_HealthRegeneration;
	FGameplayTag Attributes_Secondary_ManaRegeneration;
	FGameplayTag Attributes_Secondary_MaxHealth;
	FGameplayTag Attributes_Secondary_MaxMana;

	FGameplayTag Attributes_Meta_IncomingDamage;
	FGameplayTag Attributes_Meta_IncomingXP;

	FGameplayTag Attributes_Resistance_Piercing;
	FGameplayTag Attributes_Resistance_Slashing;
	FGameplayTag Attributes_Resistance_Blunt;
	FGameplayTag Attributes_Resistance_Fire;
	FGameplayTag Attributes_Resistance_Lightning;
	FGameplayTag Attributes_Resistance_Arcane;

	FGameplayTag InputTag_LMB;
	FGameplayTag InputTag_RMB;
	FGameplayTag InputTag_1;
	FGameplayTag InputTag_2;
	FGameplayTag InputTag_3;
	FGameplayTag InputTag_4;
	FGameplayTag InputTag_Shift;
	FGameplayTag InputTag_Passive_1;
	FGameplayTag InputTag_Passive_2;

	FGameplayTag Effects_HitReact;

	FGameplayTag Damage;
	FGameplayTag Damage_Physical_Piercing;
	FGameplayTag Damage_Physical_Slashing;
	FGameplayTag Damage_Physical_Blunt;
	FGameplayTag Damage_NonPhysical_Fire;
	FGameplayTag Damage_NonPhysical_Lightning;
	FGameplayTag Damage_NonPhysical_Arcane;

	FGameplayTag Abilities_Attack_Melee;
	FGameplayTag Abilities_Attack_Ranged;
	FGameplayTag Abilities_Attack_Spell;
	FGameplayTag Abilities_Summon;

	FGameplayTag Abilities_HitReact;
	
	FGameplayTag Abilities_Status_Locked;
	FGameplayTag Abilities_Status_Eligible;
	FGameplayTag Abilities_Status_Unlocked;
	FGameplayTag Abilities_Status_Equipped;

	FGameplayTag Abilities_Type_Offensive;
	FGameplayTag Abilities_Type_Passive;
	FGameplayTag Abilities_Type_None;
	
	FGameplayTag Abilities_Fire_Firebolt;
	FGameplayTag Cooldown_Fire_Firebolt;

	FGameplayTag CombatSocket_Weapon;
	FGameplayTag CombatSocket_RightHand;
	FGameplayTag CombatSocket_LeftHand;
	FGameplayTag CombatSocket_Tail;

	FGameplayTag Montage_Attack_1;
	FGameplayTag Montage_Attack_2;
	FGameplayTag Montage_Attack_3;
	FGameplayTag Montage_Attack_4;


	TMap<FGameplayTag, FGameplayTag> DamageTypesToResistances;


private:
	static FAuraGameplayTags GameplayTags;
};
