// Fill out your copyright notice in the Description page of Project Settings.


#include "PLASTICBARREL.h"
#include "PhysicsEngine/RadialForceComponent.h"


// Sets default values
APLASTICBARREL::APLASTICBARREL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RadialForce = CreateDefaultSubobject<URadialForceComponent>("RadialForce");


}

// Called when the game starts or when spawned
void APLASTICBARREL::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APLASTICBARREL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

