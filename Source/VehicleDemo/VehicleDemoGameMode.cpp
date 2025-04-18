// Copyright Epic Games, Inc. All Rights Reserved.

#include "VehicleDemoGameMode.h"
#include "VehicleDemoPlayerController.h"

AVehicleDemoGameMode::AVehicleDemoGameMode()
{
	PlayerControllerClass = AVehicleDemoPlayerController::StaticClass();
}
