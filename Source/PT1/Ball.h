// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Boot.h"
#include "Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"


#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Ball.generated.h"

UCLASS()
class PT1_API ABall : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABall();

	UPROPERTY(EditAnywhere)
		UShapeComponent* CollisionBox = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
		void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor *OtherActor,
			UPrimitiveComponent *OtherComponent, int32 OtherBodyIndex,
			bool bFromSweep, const FHitResult &SweepResult);
};
