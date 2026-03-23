// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "CPRCharacter.generated.h"

class UInputAction;

UCLASS()
class CPR_SIMULATION_UE_API ACPRCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPRCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputMappingContext* DefaultMappingContext;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* LookAction;

	/** Interact Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* InteractAction;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
    AActor* CurrentTarget;
    UPrimitiveComponent* CurrentHitComponent;

    // Camera
    UPROPERTY(VisibleAnywhere)
    class UCameraComponent* CameraComp;

    // Line trace distance
    float TraceDistance = 300.f;

    // Input functions
    void Look(const FInputActionValue& Value);
    void Interact();

    // Trace
    void PerformLineTrace();

};
