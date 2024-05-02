// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraEnemy.h"


AAuraEnemy::AAuraEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAuraEnemy::HighlightActor()
{
	bShouldBeHighlighted = true;
}

void AAuraEnemy::UnHighlightActor()
{
	bShouldBeHighlighted = false;
}

void AAuraEnemy::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (bShouldBeHighlighted)
	{
		GetMesh()->SetRenderCustomDepth(true);
		GetMesh()->SetCustomDepthStencilValue(250);
		Weapon->SetRenderCustomDepth(true);
		Weapon->SetCustomDepthStencilValue(250);
	}
	else
	{
		GetMesh()->SetRenderCustomDepth(false);
		Weapon->SetRenderCustomDepth(false);
	}
}


