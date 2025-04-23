// Copyright Epic Games, Inc. All Rights Reserved.


#include "VehicleDemoPlayerController.h"
#include "VehicleDemoPawn.h"
#include "VehicleDemoUI.h"
#include "EnhancedInputSubsystems.h"
#include "ChaosWheeledVehicleMovementComponent.h"

void AVehicleDemoPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	// spawn the UI widget and add it to the viewport
	VehicleUI = CreateWidget<UVehicleDemoUI>(this, VehicleUIClass);

	check(VehicleUI);

	VehicleUI->AddToViewport();
}

void AVehicleDemoPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);

		// optionally add the steering wheel context
		if (bUseSteeringWheelControls && SteeringWheelInputMappingContext)
		{
			Subsystem->AddMappingContext(SteeringWheelInputMappingContext, 1);
		}
	}
}

void AVehicleDemoPlayerController::Tick(float Delta)
{
	Super::Tick(Delta);

	if (IsValid(VehiclePawn) && IsValid(VehicleUI))
	{
		VehicleUI->UpdateSpeed(VehiclePawn->GetChaosVehicleMovement()->GetForwardSpeed());
		VehicleUI->UpdateGear(VehiclePawn->GetChaosVehicleMovement()->GetCurrentGear());
		VehicleUI->UpdateEngineRPM(VehiclePawn->GetChaosVehicleMovement()->PhysicsVehicleOutput()->EngineRPM);
		VehicleUI->UpdateBreak(VehiclePawn->GetChaosVehicleMovement()->GetBrakeInput());
		VehicleUI->UpdateThrottle(VehiclePawn->GetChaosVehicleMovement()->GetThrottleInput());
		VehicleUI->UpdateSteering(VehiclePawn->GetChaosVehicleMovement()->GetSteeringInput() * VehiclePawn->SteeringInputMultiplier);
	}
}

void AVehicleDemoPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// get a pointer to the controlled pawn
	VehiclePawn = CastChecked<AVehicleDemoPawn>(InPawn);
}
