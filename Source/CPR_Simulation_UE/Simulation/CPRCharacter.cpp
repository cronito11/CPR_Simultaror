// Fill out your copyright notice in the Description page of Project Settings.


#include "Simulation/CPRCharacter.h"
#include "Simulation/CPRPatient.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "CPRGameMode.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/Engine.h"

// Sets default values
ACPRCharacter::ACPRCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Let the character rotate around the Z axis (Yaw) but not pitch/roll
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	// Create camera
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(GetRootComponent());
	CameraComp->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void ACPRCharacter::BeginPlay()
{
	Super::BeginPlay();
	CurrentTarget = nullptr;
	
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			if (DefaultMappingContext)
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("DefaultMappingContext is null. Make sure it's assigned in the Blueprint."));
			}
		}
	}
}

// Called every frame
void ACPRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	PerformLineTrace();
}

// Called to bind functionality to input
void ACPRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Looking
		if (LookAction)
		{
			EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ACPRCharacter::Look);
		}

		// Interacting
		if (InteractAction)
		{
			EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ACPRCharacter::Interact);
		}
	}
}

void ACPRCharacter::PerformLineTrace()
{
    FVector Start = CameraComp->GetComponentLocation();
    FVector End = Start + (CameraComp->GetForwardVector() * TraceDistance);

    FHitResult Hit;

    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    bool bHit = GetWorld()->LineTraceSingleByChannel(
        Hit,
        Start,
        End,
        ECC_Visibility,
        Params
    );

    if (bHit && Hit.GetActor())
    {
        CurrentTarget = Hit.GetActor();
        CurrentHitComponent = Hit.GetComponent();

        // Debug line (optional)
        DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 0.1f);

        // Print to screen
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(1, 0.1f, FColor::Cyan, FString::Printf(TEXT("Looking at: %s"), *CurrentTarget->GetName()));
        }
    }
    else
    {
        CurrentTarget = nullptr;

        DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 0.1f);
    }
}

void ACPRCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	
	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}


void ACPRCharacter::Interact()
{
    if (!CurrentTarget) return;

    FName Tag;

    ACPRPatient* Patient = Cast<ACPRPatient>(CurrentTarget);

    if (!Patient || !CurrentHitComponent)
        return;

    if (CurrentHitComponent->ComponentHasTag("Chest"))
    {
        Patient->OnChestInteracted();
    }
    else if (CurrentHitComponent->ComponentHasTag("Mouth"))
    {
        Patient->OnMouthInteracted();
    }
}