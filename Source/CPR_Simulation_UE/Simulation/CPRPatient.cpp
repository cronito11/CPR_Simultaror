// Fill out your copyright notice in the Description page of Project Settings.


#include "Simulation/CPRPatient.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ACPRPatient::ACPRPatient()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
    RootComponent = BodyMesh;

    ChestCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ChestCollision"));
    ChestCollision->SetupAttachment(RootComponent);

    MouthCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("MouthCollision"));
    MouthCollision->SetupAttachment(RootComponent);

    // Add tags
    ChestCollision->ComponentTags.Add("Chest");
    MouthCollision->ComponentTags.Add("Mouth");
}

// Called when the game starts or when spawned
void ACPRPatient::BeginPlay()
{
	Super::BeginPlay();
    GM = Cast<ACPRGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	
}

// Called every frame
void ACPRPatient::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPRPatient::OnChestInteracted()
{
   
    if (GM)
    {
        GM->HandleCompression();
    }
    UE_LOG(LogTemp, Warning, TEXT("Chest animation triggered"));
}

void ACPRPatient::OnMouthInteracted()
{
    if (GM)
    {
        GM->HandleBreath();
    }
    UE_LOG(LogTemp, Warning, TEXT("Mouth animation triggered"));
}

