// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "GameplayTagContainer.h"
#include "SpellMenuWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpellGlobeSelectedSignature, bool, bSpendPointsButtonEnabled, bool, bEquipButtonEnabled);

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURA_API USpellMenuWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()
public:
    virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnPlayerStatChangedSignature SpellPointsChangedDelegate;

	UFUNCTION(BlueprintCallable, Category = "GAS|Spells")
	void SpellGlobeSelected(const FGameplayTag& AbilityTag);
	
	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FSpellGlobeSelectedSignature SpellGlobeSelectedDelegate;

private:
	static void ShouldEnableButtons(const FGameplayTag& AbilityStatus, int32 SpellPoints,
		bool& bShouldEnableSPButton, bool& bShouldEnableEquipButton);
};
