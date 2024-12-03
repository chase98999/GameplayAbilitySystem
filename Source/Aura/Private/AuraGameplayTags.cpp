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

/* META */
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Meta_IncomingDamage, "Attributes.Meta.IncomingDamage");
UE_DEFINE_GAMEPLAY_TAG(TAG_Attributes_Meta_IncomingXP, "Attributes.Meta.IncomingXP");

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
UE_DEFINE_GAMEPLAY_TAG(TAG_InputTag_Passive_1, "InputTag.Passive.1");
UE_DEFINE_GAMEPLAY_TAG(TAG_InputTag_Passive_2, "InputTag.Passive.2");


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

/* Abilities Tags */
UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Attack_Melee, "Abilities.Attack.Melee");
UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Attack_Ranged, "Abilities.Attack.Ranged");
UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Attack_Spell, "Abilities.Attack.Spell");
UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Summon, "Abilities.Summon");

UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Fire_Firebolt, "Abilities.Fire.Firebolt");
UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Lightning_Electricute, "Abilities.Lightning.Electrocute");

UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_HitReact, "Abilities.HitReact");

UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Status_Locked, "Abilities.Status.Locked");
UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Status_Eligible, "Abilities.Status.Eligible");
UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Status_Unlocked, "Abilities.Status.Unlocked");
UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Status_Equipped, "Abilities.Status.Equipped");

UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Type_Offensive, "Abilities.Type.Offensive");
UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Type_Passive, "Abilities.Type.Passive");
UE_DEFINE_GAMEPLAY_TAG(TAG_Abilities_Type_None, "Abilities.Type.None");

/* Cooldown Tags */
UE_DEFINE_GAMEPLAY_TAG(TAG_Cooldown_Fire_Firebolt, "Cooldown.Fire.Firebolt");

/* Combat Socket Tags */
UE_DEFINE_GAMEPLAY_TAG(TAG_CombatSocket_Weapon, "CombatSocket.Weapon");
UE_DEFINE_GAMEPLAY_TAG(TAG_CombatSocket_RightHand, "CombatSocket.RightHand");
UE_DEFINE_GAMEPLAY_TAG(TAG_CombatSocket_LeftHand, "CombatSocket.LeftHand");
UE_DEFINE_GAMEPLAY_TAG(TAG_CombatSocket_Tail, "CombatSocket.Tail");

/* Montage Tags */
UE_DEFINE_GAMEPLAY_TAG(TAG_Montage_Attack_1, "Montage.Attack.1");
UE_DEFINE_GAMEPLAY_TAG(TAG_Montage_Attack_2, "Montage.Attack.2");
UE_DEFINE_GAMEPLAY_TAG(TAG_Montage_Attack_3, "Montage.Attack.3");
UE_DEFINE_GAMEPLAY_TAG(TAG_Montage_Attack_4, "Montage.Attack.4");


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
	 * Meta Tags
	 */
	GameplayTags.Attributes_Meta_IncomingDamage = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Meta.IncomingDamage"));
	GameplayTags.Attributes_Meta_IncomingXP = UGameplayTagsManager::Get().RequestGameplayTag(FName("Attributes.Meta.IncomingXP"));
	
	
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
	GameplayTags.InputTag_Passive_1 = UGameplayTagsManager::Get().RequestGameplayTag(FName("InputTag.Passive.1"));
	GameplayTags.InputTag_Passive_2 = UGameplayTagsManager::Get().RequestGameplayTag(FName("InputTag.Passive.2"));

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

	/* Ability Gameplay Tags */
	GameplayTags.Abilities_Attack_Melee = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Attack.Melee"));
	GameplayTags.Abilities_Attack_Ranged = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Attack.Ranged"));
	GameplayTags.Abilities_Attack_Spell = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Attack.Spell"));
	GameplayTags.Abilities_Summon = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Summon"));
	GameplayTags.Abilities_Fire_Firebolt = UGameplayTagsManager::Get().RequestGameplayTag((FName("Abilities.Fire.Firebolt")));
	GameplayTags.Abilities_Lightning_Electrocute = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Lightning.Electrocute"));

	GameplayTags.Abilities_HitReact = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.HitReact"));

	GameplayTags.Abilities_Status_Locked = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Status.Locked"));
	GameplayTags.Abilities_Status_Eligible = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Status.Eligible"));
	GameplayTags.Abilities_Status_Unlocked = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Status.Unlocked"));
	GameplayTags.Abilities_Status_Equipped = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Status.Equipped"));

	GameplayTags.Abilities_Type_Offensive = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Type.Offensive"));
	GameplayTags.Abilities_Type_Passive = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Type.Passive"));
	GameplayTags.Abilities_Type_None = UGameplayTagsManager::Get().RequestGameplayTag(FName("Abilities.Type.None"));

	/* Cooldown Gameplay Tags */
	GameplayTags.Cooldown_Fire_Firebolt = UGameplayTagsManager::Get().RequestGameplayTag(FName("Cooldown.Fire.Firebolt"));

	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Physical_Piercing, GameplayTags.Attributes_Resistance_Piercing);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Physical_Slashing, GameplayTags.Attributes_Resistance_Slashing);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Physical_Blunt, GameplayTags.Attributes_Resistance_Blunt);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_NonPhysical_Fire, GameplayTags.Attributes_Resistance_Fire);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_NonPhysical_Lightning, GameplayTags.Attributes_Resistance_Lightning);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_NonPhysical_Arcane, GameplayTags.Attributes_Resistance_Arcane);

	/* Combat Socket Gameplay Tags */
	GameplayTags.CombatSocket_Weapon = UGameplayTagsManager::Get().RequestGameplayTag(FName("CombatSocket.Weapon"));
	GameplayTags.CombatSocket_RightHand = UGameplayTagsManager::Get().RequestGameplayTag(FName("CombatSocket.RightHand"));
	GameplayTags.CombatSocket_LeftHand = UGameplayTagsManager::Get().RequestGameplayTag(FName("CombatSocket.LeftHand"));
	GameplayTags.CombatSocket_Tail = UGameplayTagsManager::Get().RequestGameplayTag(FName("CombatSocket.Tail"));

	/* Montage Tags */
	GameplayTags.Montage_Attack_1 = UGameplayTagsManager::Get().RequestGameplayTag(FName("Montage.Attack.1"));
	GameplayTags.Montage_Attack_2 = UGameplayTagsManager::Get().RequestGameplayTag(FName("Montage.Attack.2"));
	GameplayTags.Montage_Attack_3 = UGameplayTagsManager::Get().RequestGameplayTag(FName("Montage.Attack.3"));
	GameplayTags.Montage_Attack_4 = UGameplayTagsManager::Get().RequestGameplayTag(FName("Montage.Attack.4"));
}
