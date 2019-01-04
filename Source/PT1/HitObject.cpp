// Fill out your copyright notice in the Description page of Project Settings.

#include "HitObject.h"

// Sets default values
AHitObject::AHitObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHitObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHitObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

