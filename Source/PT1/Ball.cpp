// Fill out your copyright notice in the Description page of Project Settings.

#include "Ball.h"

// Sets default values
ABall::ABall()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();
	
	CollisionBox = this->FindComponentByClass<UShapeComponent>();

	if (CollisionBox)
	{
		CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ABall::OnOverlap);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Ball no collision box"));
	}
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABall::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABall::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor *OtherActor,
	UPrimitiveComponent *OtherComponent, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult &SweepResult)
{
	/*if (OtherActor->IsA(ABoot::StaticClass()))
	{
		FindComponentByClass<UStaticMeshComponent>()->SetSimulatePhysics(true);
		//OtherActor->FindComponentByClass<UStaticMeshComponent>()->SetSimulatePhysics(true);

		FindComponentByClass<UStaticMeshComponent>()->SetPhysicsLinearVelocity((OtherActor->GetActorLocation() - GetActorLocation()) * 10);
	}*/
}