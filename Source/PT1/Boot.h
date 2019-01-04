// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Ball.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Boot.generated.h"

UCLASS()
class PT1_API ABoot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoot();

	UPROPERTY(EditAnywhere)
		UShapeComponent* CollisionBox = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float launchPower = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector spherePosition = FVector(0, 0, 0);


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
