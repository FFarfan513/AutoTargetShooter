// Fill out your copyright notice in the Description page of Project Settings.

#include "MoveSystem.h"
#include <AutoTargetShooter/ECS/Components/MoveComponent.h>

MoveSystem::MoveSystem() : BaseSystem(UMoveComponent::StaticClass()) { }

void MoveSystem::UpdateEntity(float DeltaTime, ABaseEntity* entity)
{
	UMoveComponent* moveComp = entity->GetECSComponent<UMoveComponent>();

	moveComp->Velocity = moveComp->Direction * moveComp->Speed;
	const FVector& newPosition = moveComp->CurrentLocation + (moveComp->Velocity * DeltaTime);

	if (moveComp->RotateInDirection)
	{
		entity->SetActorLocationAndRotation(newPosition, moveComp->Direction.ToOrientationQuat());
	}
	else
	{
		entity->SetActorLocation(newPosition);
	}

	moveComp->CurrentLocation = newPosition;
}