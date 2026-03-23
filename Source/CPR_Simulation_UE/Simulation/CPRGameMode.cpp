// Fill out your copyright notice in the Description page of Project Settings.


#include "Simulation/CPRGameMode.h"
#include "Simulation/CPRCharacter.h"
#include "Kismet/GameplayStatics.h"

ACPRGameMode::ACPRGameMode()
{
    // DefaultPawnClass = ACPRCharacter::StaticClass();
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/CPR/Blueprint/BP_MainCharacter"));
    if (PlayerPawnBPClass.Class != nullptr)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
    CompressionCount = 0;
    BreathCount = 0;
    CurrentPhase = ECPRPhase::Compression;
}

void ACPRGameMode::HandleInteraction(FName TargetTag)
{
    if (CurrentPhase == ECPRPhase::Compression && TargetTag == "Chest")
    {
        HandleCompression();
    }
    else if (CurrentPhase == ECPRPhase::Breath && TargetTag == "Mouth")
    {
        HandleBreath();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Wrong action for current phase"));
    }
}

void ACPRGameMode::HandleCompression()
{
    CompressionCount++;

    UE_LOG(LogTemp, Warning, TEXT("Compression: %d"), CompressionCount);

    if (CompressionCount >= MaxCompressions)
    {
        CurrentPhase = ECPRPhase::Breath;
        BreathCount = 0;

        UE_LOG(LogTemp, Warning, TEXT("Switch to BREATH phase"));
    }
}

void ACPRGameMode::HandleBreath()
{
    BreathCount++;

    UE_LOG(LogTemp, Warning, TEXT("Breath: %d"), BreathCount);

    if (BreathCount >= MaxBreaths)
    {
        ResetCycle();
    }
}

void ACPRGameMode::ResetCycle()
{
    CompressionCount = 0;
    BreathCount = 0;
    CurrentPhase = ECPRPhase::Compression;

    UE_LOG(LogTemp, Warning, TEXT("New CPR Cycle Started"));
}