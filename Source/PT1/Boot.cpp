// Fill out your copyright notice in the Description page of Project Settings.

#include "Boot.h"

// Sets default values
ABoot::ABoot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABoot::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

