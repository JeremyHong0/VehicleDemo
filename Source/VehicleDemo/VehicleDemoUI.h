// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VehicleDemoUI.generated.h"

/**
 *  Simple Vehicle HUD class
 *  Displays the current speed and gear.
 *  Widget setup is handled in a Blueprint subclass.
 */
UCLASS(abstract)
class VEHICLEDEMO_API UVehicleDemoUI : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	/** Controls the display of speed in Km/h or MPH */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Vehicle)
	bool bIsMPH = false;

public:

	/** Called to update the speed display */
	void UpdateSpeed(float NewSpeed);

	/** Called to update the gear display */
	void UpdateGear(int32 NewGear);
	
	/** Called to update the engine rpm display */
	void UpdateEngineRPM(float NewEngineRPM);

	/** Called to update the break display */
	void UpdateBreak(float NewBreak);
	
	/** Called to update the throttle display */
	void UpdateThrottle(float NewThrottle);

	/** Called to update the steering display */
	void UpdateSteering(float NewSteering);

protected:

	/** Implemented in Blueprint to display the new speed */
	UFUNCTION(BlueprintImplementableEvent, Category = Vehicle)
	void OnSpeedUpdate(float NewSpeed);

	/** Implemented in Blueprint to display the new gear */
	UFUNCTION(BlueprintImplementableEvent, Category = Vehicle)
	void OnGearUpdate(int32 NewGear);

	/** Implemented in Blueprint to display the new engine rpm */
	UFUNCTION(BlueprintImplementableEvent, Category = Vehicle)
	void OnEngineRPMUpdate(float NewRpm);

	/** Implemented in Blueprint to display the new break amount */
	UFUNCTION(BlueprintImplementableEvent, Category = Vehicle)
	void OnBreakUpdate(float NewBreak);
	
	/** Implemented in Blueprint to display the new throttle amount */
	UFUNCTION(BlueprintImplementableEvent, Category = Vehicle)
	void OnThrottleUpdate(float NewThrottle);

	/** Implemented in Blueprint to display the new steering amount */
	UFUNCTION(BlueprintImplementableEvent, Category = Vehicle)
	void OnSteeringUpdate(float NewSteering);
};


