// Copyright Epic Games, Inc. All Rights Reserved.


#include "VehicleDemoSportsWheelRear.h"

UVehicleDemoSportsWheelRear::UVehicleDemoSportsWheelRear()
{
	WheelRadius = 40.f;
	WheelWidth = 40.0f;
	FrictionForceMultiplier = 4.0f;
	
	MaxSteerAngle = 0.0f;
	MaxHandBrakeTorque = 6000.0f;

	// SlipThreshold = 10.0f;
	// SkidThreshold = 10.0f;
	// SideSlipModifier = 0.1f;
}