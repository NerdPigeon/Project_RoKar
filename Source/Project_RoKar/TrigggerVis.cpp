// Fill out your copyright notice in the Description page of Project Settings.

#include "TrigggerVis.h"


// Sets default values
ATrigggerVis::ATrigggerVis(const FObjectInitializer& objectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATrigggerVis::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("HELL YA IM SPAWNED"));
}

// Called every frame
void ATrigggerVis::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("HELL YA IM SPAWNED %f"), DeltaTime);
}