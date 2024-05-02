// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/AuraPlayerController.h"
#include "Interaction/EnemyInterface.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
}

void AAuraPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CursorTrace();
}

void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();

	SetupInputSettings();
}

void AAuraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// CastChecked will prematurely crash the program if the cast fails
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAuraPlayerController::Move);
}

void AAuraPlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation = FRotator(0.f, Rotation.Yaw, 0.f);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
		ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);
	}
}

void AAuraPlayerController::CursorTrace()
{
	FHitResult CursorHit;
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
	if (!CursorHit.bBlockingHit) { return; }
	
	LastActor = ThisActor;
	ThisActor = Cast<IEnemyInterface>(CursorHit.GetActor());

	/**
	* Line trace from cursor. There are several scenarios:
	* A. LastActor is null && ThisActor is null
	*	- Do nothing
	* B. LastActor is null && ThisActor is valid
	*	- Call highlight on ThisActor
	* C. LastActor is valid && ThisActor is null
	*	- Call unhighlight on LastActor
	* D. LastActor is valid && ThisActor is valid, but LastActor != ThisActor
	*	- Unhighlight LastActor, highlight ThisActor
	* E. Both actors are valid, and are the same actor
	*	- Do nothing
	*/

	if (LastActor == nullptr)
	{
		if (ThisActor) { ThisActor->HighlightActor(); }
	}
	// LastActor valid
	else
	{
		if (!ThisActor)
		{
			// Case C
			LastActor->UnHighlightActor();
		}
		else if (LastActor != ThisActor)
		{
			// Case D
			LastActor->UnHighlightActor();
			ThisActor->HighlightActor();
		}
	}
}

/**
 * Helper function to set up our input settings
*/
void AAuraPlayerController::SetupInputSettings()
{
	// Will halt execution if this pointer isn't valid before the game runs
	check(AuraContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(AuraContext, 0);

	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
}
