// Copyright Epic Games, Inc. All Rights Reserved.

#include "VehicleDemoWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UVehicleDemoWheelRear::UVehicleDemoWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}