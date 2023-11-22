// Fill out your copyright notice in the Description page of Project Settings.

#include "MoveComponent.h"

void UMoveComponent::BeginPlay()
{
	CurrentLocation = GetOwner()->GetActorLocation();
	Super::BeginPlay();
}

void UMoveComponent::ReadWriteBinary(FArchive& archive)
{
	archive << this->Speed;
	archive << this->Direction;
	archive << this->Velocity;
	archive << this->CurrentLocation;
	archive << this->RotateInDirection;
}

void UMoveComponent::SetFromVelocityVector(const FVector& velocity)
{
	Velocity = velocity;
	Speed = velocity.Length();
	Direction = velocity / Speed;
}

void UMoveComponent::SetFromSpeedAndDirection(float speed, const FVector& direction)
{
	Speed = speed;
	Direction = direction;
	Velocity = Direction * Speed;
}
