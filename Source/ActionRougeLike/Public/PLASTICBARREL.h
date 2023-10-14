// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PLASTICBARREL.generated.h"

class URadialForceComponent;

UCLASS()
class ACTIONROUGELIKE_API APLASTICBARREL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APLASTICBARREL();

protected:
	// Called when the game starts or when spawned

	UPROPERTY(VisibleAnywhere)
	URadialForceComponent* RadialForce;


	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
