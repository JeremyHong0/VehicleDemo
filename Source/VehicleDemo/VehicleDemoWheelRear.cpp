// Copyright Epic Games, Inc. All Rights Reserved.

#include "VehicleDemoWheelRear.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"

UVehicleDemoWheelRear::UVehicleDemoWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}
