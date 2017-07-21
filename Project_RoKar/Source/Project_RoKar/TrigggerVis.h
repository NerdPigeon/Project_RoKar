// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sphere.h"
#include "TrigggerVis.generated.h"


UCLASS()
class PROJECT_ROKAR_API ATrigggerVis : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ATrigggerVis(const FObjectInitializer& objectInitializer);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	
};
