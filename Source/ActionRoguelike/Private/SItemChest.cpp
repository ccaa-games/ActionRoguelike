// Fill out your copyright notice in the Description page of Project Settings.


#include "SItemChest.h"

// Sets default values
ASItemChest::ASItemChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	SetRootComponent(BaseMesh);

	LitMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LitMesh"));
	LitMesh->SetupAttachment(BaseMesh);

	TargetPitch = 110.f;
}

// Called when the game starts or when spawned
void ASItemChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASItemChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASItemChest::Interact_Implementation(APawn* InstigatorPawn)
{
	LitMesh->AddLocalRotation(FRotator(TargetPitch,0.f,0.f));
}

