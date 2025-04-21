// Copyright Epic Games, Inc. All Rights Reserved.


#include "VehicleDemoSportsWheelFront.h"

UVehicleDemoSportsWheelFront::UVehicleDemoSportsWheelFront()
{
	WheelRadius = 39.0f;
	WheelWidth = 35.0f;
	FrictionForceMultiplier = 3.0f;
	SideSlipModifier = 0.1f;

	MaxBrakeTorque = 4500.0f;
	MaxHandBrakeTorque = 6000.0f;
}