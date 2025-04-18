// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "VehicleDemoPawn.h"
#include "VehicleDemoSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class VEHICLEDEMO_API AVehicleDemoSportsCar : public AVehicleDemoPawn
{
	GENERATED_BODY()
	
public:

	AVehicleDemoSportsCar();
};
