// Fill out your copyright notice in the Description page of Project Settings.

#include "TriggerHidden.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATriggerHidden::ATriggerHidden()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATriggerHidden::BeginPlay()
{
	Super::BeginPlay();
	
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);

	//Make sure its in the world
	PlayerController->ClientMessage("Hey, Console HERE!");

	//Tell it to make overlap events
	TriggeVolume->bGenerateOverlapEvents = true;

	//When something overlaps the Trigger Box tell it to run the FUNCTION of TriggerEnter
	TriggeVolume->OnComponentBeginOverlap.AddDynamic(this, &ATriggerHidden::TriggerEnter);
	//When something exits the Trigger Box tell it to run the FUNCTION of TriggerExit
	TriggeVolume->OnComponentEndOverlap.AddDynamic(this, &ATriggerHidden::TriggerExit);

}

// Called every frame
void ATriggerHidden::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATriggerHidden::TriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	PlayerController->ClientMessage("Hey Buddy");
	Hidden->SetActorHiddenInGame(false);
}

void ATriggerHidden::TriggerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	PlayerController->ClientMessage("Bai Buddy");
	Hidden->SetActorHiddenInGame(true);
}