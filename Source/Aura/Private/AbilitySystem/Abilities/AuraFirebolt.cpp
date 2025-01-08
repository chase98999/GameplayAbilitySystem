// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/AuraFirebolt.h"
#include "Aura/Public/AuraGameplayTags.h"

FString UAuraFirebolt::GetDescription(int32 Level)
{
	const int32 Damage = GetDamageByDamageType(Level, FAuraGameplayTags::Get().Damage_NonPhysical_Fire);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCooldown(Level);
	if (Level == 1)
	{
		return FString::Printf(TEXT(
			//Title
			"<Title>FIRE BOLT</>\n\n"
			
			//Details
			"<Small>Level: </><Level>%d</>\n"
			"<Small>Mana Cost: </><ManaCost>%.1f</>\n"
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"

			//Description
			"<Default>Launches a bolt of fire, "
			"exploding on impact and dealing: </>"
			"<Damage>%d</><Default> "
			"fire damage with a chance to burn.</>\n\n"
			
			), Level, ManaCost, Cooldown, Damage);
	}
	else
	{
		return FString::Printf(TEXT(
		//Title
		"<Title>FIRE BOLT</>\n\n"
			
		//Details
		"<Small>Level: </><Level>%d</>\n"
		"<Small>Mana Cost: </><ManaCost>%.1f</>\n"
		"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"

		//Description
		"<Default>Launches %d bolts of fire, "
		"exploding on impact and dealing: </>"
		"<Damage>%d</><Default> "
		"fire damage with a chance to burn.</>\n\n"
			
		), Level, ManaCost, Cooldown, FMath::Min(Level, NumProjectiles), Damage);
	}
}

FString UAuraFirebolt::GetNextLevelDescription(int32 Level)
{
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCooldown(Level);
	const int32 Damage = DamageTypes[FAuraGameplayTags::Get().Damage_NonPhysical_Fire].GetValueAtLevel(Level);
	return FString::Printf(TEXT(
	//Title
	"<Title>NEXT LEVEL:</>\n\n"
			
	//Details
	"<Small>Level: </><Level>%d</>\n"
	"<Small>Mana Cost: </><ManaCost>%.1f</>\n"
	"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"

	//Description
	"<Default>Launches %d bolts of fire, "
	"exploding on impact and dealing: </>"
	"<Damage>%d</><Default> "
	"fire damage with a chance to burn.</>\n\n"
			
	), Level, ManaCost, Cooldown, FMath::Min(Level, NumProjectiles), Damage);
}