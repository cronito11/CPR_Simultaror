// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Simulation/CPRGameMode.h"
#include "CPRPatient.generated.h"

UCLASS()
class CPR_SIMULATION_UE_API ACPRPatient : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPRPatient();
protected:
    virtual void BeginPlay() override;

private:
    ACPRGameMode* GM;

public:
    virtual void Tick(float DeltaTime) override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USkeletalMeshComponent* BodyMesh;

    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* ChestCollision;

    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* MouthCollision;

    // Interaction hooks
    void OnChestInteracted();
    void OnMouthInteracted();
};