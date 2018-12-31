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

	CollisionBox = this->FindComponentByClass<UShapeComponent>();

	if (CollisionBox)
	{
		CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ABoot::OnOverlap);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Ball no collision box"));
	}
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

void ABoot::OnOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor->IsA(ABall::StaticClass()))
	{
		OtherActor->FindComponentByClass<UStaticMeshComponent>()->SetSimulatePhysics(true);
		OtherActor->FindComponentByClass<UStaticMeshComponent>()->SetPhysicsLinearVelocity((OtherActor->GetActorLocation() - GetActorLocation()) * 10);
	}
}

