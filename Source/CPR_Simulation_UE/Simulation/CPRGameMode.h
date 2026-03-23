// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPRGameMode.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ECPRPhase : uint8
{
	Compression,
	Breath
};

UCLASS()
class CPR_SIMULATION_UE_API ACPRGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
    ACPRGameMode();

    // Called when player interacts
    void HandleInteraction(FName TargetTag);

protected:

    // CPR state
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    int CompressionCount;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    int BreathCount;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    ECPRPhase CurrentPhase;

    // Config
    UPROPERTY(EditDefaultsOnly)
    int MaxCompressions = 30;

    UPROPERTY(EditDefaultsOnly)
    int MaxBreaths = 2;

private:
    void ResetCycle();

public:
    void HandleCompression();
    void HandleBreath();
	
};
