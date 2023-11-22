// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileComponent.h"
#include <AutoTargetShooter/ECS/Entities/BaseEntity.h>
#include "TargetComponent.h"

void UProjectileComponent::BeginPlay()
{
	Super::BeginPlay();
	GetOwner()->OnActorBeginOverlap.AddDynamic(this, &UProjectileComponent::HitOtherActor);
}

void UProjectileComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetOwner()->OnActorBeginOverlap.RemoveDynamic(this, &UProjectileComponent::HitOtherActor);
}

void UProjectileComponent::HitOtherActor(AActor* projectile, AActor* other)
{
	ABaseEntity* otherEntity = ABaseEntity::GetActorAsEntity(other);
	if (otherEntity)
	{
		if (auto targetComponent = otherEntity->GetECSComponent<UTargetComponent>())
		{
			targetComponent->OnTargetHit.Broadcast();
			projectile->Destroy();
		}
	}
}