// Copyright Epic Games, Inc. All Rights Reserved.


#include "VehicleDemoUI.h"

void UVehicleDemoUI::UpdateSpeed(float NewSpeed)
{
	// format the speed to KPH or MPH
	float FormattedSpeed = FMath::Abs(NewSpeed) * (bIsMPH ? 0.022f : 0.036f);

	// call the Blueprint handler
	OnSpeedUpdate(FormattedSpeed);
}

void UVehicleDemoUI::UpdateGear(int32 NewGear)
{
	// call the Blueprint handler
	OnGearUpdate(NewGear);
}

void UVehicleDemoUI::UpdateEngineRPM(float NewEngineRPM)
{
	OnEngineRPMUpdate(NewEngineRPM);
}

