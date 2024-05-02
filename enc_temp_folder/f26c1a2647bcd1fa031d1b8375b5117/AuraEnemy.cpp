// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraEnemy.h"


void AAuraEnemy::HighlightActor()
{
	DrawDebugSphere(GetWorld(), GetActorLocation(), 20.f, 12, FColor::Red, false, 0.1f);
	UE_LOG(LogTemp, Warning, TEXT("Drawing spehere"));
}

void AAuraEnemy::UnHighlightActor()
{

}
