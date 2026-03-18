// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPR_Simulation_UEGameMode.generated.h"

/**
 *  Simple GameMode for a first person game
 */
UCLASS(abstract)
class ACPR_Simulation_UEGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACPR_Simulation_UEGameMode();
};



