// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/PlayerInterface.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase, public IPlayerInterface
{
	GENERATED_BODY()

public:
	AAuraCharacter();
	virtual void OnRep_PlayerState() override;
	virtual void PossessedBy(AController* NewController) override;

	/* Player Interface */
	virtual void AddToXP_Implementation(int32 InXP) override;
	virtual void LevelUp_Implementation() override;
	/* PlayerInterface */
	
	/* Combat Interface */
	virtual int32 GetCharacterLevel_Implementation() override;
	/* Combat Interface */

protected:

private:
	virtual void InitAbilityActorInfo() override;
	
	
};
