// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseComponent.h"
#include "MoveComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AUTOTARGETSHOOTER_API UMoveComponent : public UBaseComponent
{
	GENERATED_BODY()

public:
	friend class MoveSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Direction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector CurrentLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RotateInDirection = false;

	virtual void BeginPlay() override;

	void ReadWriteBinary(FArchive& archive) override;

	FVector GetVelocity() const { return Velocity; }

	void SetFromVelocityVector(const FVector& velocity);

	void SetFromSpeedAndDirection(float speed, const FVector& direction);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Velocity;
};