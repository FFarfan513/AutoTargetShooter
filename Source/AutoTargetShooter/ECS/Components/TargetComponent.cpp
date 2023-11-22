// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetComponent.h"
#include <AutoTargetShooter/ECS/Systems/FireProjectileAtTargetsSystem.h>

void UTargetComponent::BeginPlay()
{
	Super::BeginPlay();
	OnTargetHit.AddDynamic(this, &UTargetComponent::DestroyWhenHit);
}

void UTargetComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	OnTargetHit.RemoveDynamic(this, &UTargetComponent::DestroyWhenHit);
}

void UTargetComponent::DestroyWhenHit()
{
	FireProjectileAtTargetsSystem::AlreadyTargeted.Remove(ABaseEntity::GetOwnerEntity(this));
	GetOwner()->Destroy();
}
