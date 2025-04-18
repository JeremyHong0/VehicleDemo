// Copyright Epic Games, Inc. All Rights Reserved.

#include "VehicleDemoWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UVehicleDemoWheelFront::UVehicleDemoWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}