// Fill out your copyright notice in the Description page of Project Settings.


#include "FireProjectileAtTargetsSystem.h"
#include <AutoTargetShooter/ECS/Components/FireProjectileComponent.h>
#include <AutoTargetShooter/ECS/Components/TimerComponent.h>
#include <AutoTargetShooter/ECS/Components/MoveComponent.h>
#include <AutoTargetShooter/ECS/Components/TargetComponent.h>

TSet<ABaseEntity*> FireProjectileAtTargetsSystem::AlreadyTargeted;

FireProjectileAtTargetsSystem::FireProjectileAtTargetsSystem()
	: BaseSystem(UFireProjectileComponent::StaticClass(), UTimerComponent::StaticClass()) { }

void FireProjectileAtTargetsSystem::UpdateEntity(float DeltaTime, ABaseEntity* entity)
{
	UFireProjectileComponent* fireComp = entity->GetECSComponent<UFireProjectileComponent>();
	UTimerComponent* shotCooldownTimerComp = entity->GetECSComponent<UTimerComponent>();

	if (!shotCooldownTimerComp->TimerActive)
	{
		const FVector& directionToFire = FindDirectionToFire(entity);
		if (!directionToFire.IsZero())
		{
			shotCooldownTimerComp->TimerActive = true;
			SpawnProjectile(fireComp, directionToFire);
			fireComp->OnFireProjectile.Broadcast();
		}
	}
}

FVector FireProjectileAtTargetsSystem::FindDirectionToFire(const TObjectPtr<ABaseEntity>& source)
{
	// Get range
	UFireProjectileComponent* fireComp = source->GetECSComponent<UFireProjectileComponent>();
	float sourceSpeed = 0;
	if (UMoveComponent* sourceMovementComp = source->GetECSComponent<UMoveComponent>())
	{
		sourceSpeed = sourceMovementComp->Speed;
	}
	float range = (fireComp->ProjectileSpeed * fireComp->ProjectileLifetime) + (sourceSpeed * fireComp->ProjectileLifetime);


	// Get nearby objects
	TArray<FOverlapResult> overlapResults;
	TArray<ABaseEntity*> nearbyTargets;
	
	source->GetWorld()->OverlapMultiByObjectType(overlapResults, source->GetActorLocation(), source->GetActorQuat(),
		FCollisionObjectQueryParams(FCollisionObjectQueryParams::InitType::AllObjects),
		FCollisionShape::MakeSphere(range));

	nearbyTargets.Reserve(overlapResults.Num());
	for (auto& overlap : overlapResults)
	{
		if (ABaseEntity* nearbyEntity = ABaseEntity::GetActorAsEntity(overlap.GetActor()))
		{
			if (nearbyEntity->ContainsECSComponentType<UTargetComponent>())
			{
				nearbyTargets.Add(nearbyEntity);
			}
		}
	}
	
	// Sort nearby objects by closest
	Algo::Sort(nearbyTargets, [&source](const ABaseEntity* target1, const ABaseEntity* target2) {
		return FVector::DistSquared(source->GetActorLocation(), target1->GetActorLocation()) <
			FVector::DistSquared(source->GetActorLocation(), target2->GetActorLocation());
	});

	// Check if a shot to the objects will reach
	for (auto& currentTarget : nearbyTargets)
	{
		if (AlreadyTargeted.Contains(currentTarget))
		{
			continue;
		}

		const FVector& direction = GetDirectionThatWillReachTarget(source, currentTarget);
		if (!direction.IsZero())
		{
			AlreadyTargeted.Add(currentTarget);
			return direction.GetUnsafeNormal();
		}
	}

	return FVector::ZeroVector;
}

FVector FireProjectileAtTargetsSystem::GetDirectionThatWillReachTarget(const TObjectPtr<ABaseEntity>& source, const TObjectPtr<ABaseEntity>& target)
{
	FVector sourceToTarget = target->GetActorLocation() - source->GetActorLocation();
	FVector velocityofTargetRelativeToStationarySource = GetEntityVelocity(target) - GetEntityVelocity(source);

	UFireProjectileComponent* fireComp = source->GetECSComponent<UFireProjectileComponent>();
	float radiiSum = fireComp->ProjectileRadius + GetEntitySphereRadius(target);
	float projectileSpeed = fireComp->ProjectileSpeed;

	double a = velocityofTargetRelativeToStationarySource.SquaredLength() - (projectileSpeed * projectileSpeed);
	double b = 2 * FVector::DotProduct(sourceToTarget, velocityofTargetRelativeToStationarySource);
	double c = sourceToTarget.SquaredLength() - (radiiSum * radiiSum);

	double timeToHit = QuadraticFormula(a, b, c);
	if (timeToHit < 0 || timeToHit > fireComp->ProjectileLifetime)
	{
		return FVector::ZeroVector;
	}

	FVector result = sourceToTarget + velocityofTargetRelativeToStationarySource * timeToHit;
	return result;
}

void FireProjectileAtTargetsSystem::SpawnProjectile(const UFireProjectileComponent* source, const FVector& directionToFire)
{
	if (!source->ProjectileType)
	{
		UE_LOG(LogTemp, Error, TEXT("No projectile type defined for %s"), *source->GetComponentID());
		return;
	}

	ABaseEntity* projectile = source->GetWorld()->SpawnActor<ABaseEntity>(source->ProjectileType, source->GetOwner()->GetActorTransform());
	if (auto sphere = projectile->GetComponentByClass<USphereComponent>())
	{
		sphere->SetSphereRadius(source->ProjectileRadius);
	}
	if (auto despawnTimerComponent = projectile->GetECSComponent<UTimerComponent>())
	{
		despawnTimerComponent->TimerDuration = source->ProjectileLifetime;
		despawnTimerComponent->TimerActive = true;
	}
	if (auto movementComponent = projectile->GetECSComponent<UMoveComponent>())
	{
		FVector combinedVelocity = GetEntityVelocity(ABaseEntity::GetOwnerEntity(source)) + (directionToFire * source->ProjectileSpeed);
		movementComponent->SetFromVelocityVector(combinedVelocity);
	}
}

const FVector FireProjectileAtTargetsSystem::GetEntityVelocity(const TObjectPtr<ABaseEntity>& entity)
{
	if (UMoveComponent* movement = entity->GetECSComponent<UMoveComponent>())
	{
		return movement->GetVelocity();
	}
	return FVector::ZeroVector;
}

const float FireProjectileAtTargetsSystem::GetEntitySphereRadius(const TObjectPtr<ABaseEntity>& entity)
{
	if (USphereComponent* sphere = entity->GetComponentByClass<USphereComponent>())
	{
		return sphere->GetScaledSphereRadius();
	}
	return 0.0f;
}

double FireProjectileAtTargetsSystem::QuadraticFormula(double a, double b, double c)
{
	double discriminant = (b * b) - (4 * a * c);
	if (discriminant >= 0)
	{
		double squaredTerm = FMath::Sqrt(discriminant);
		double root = (-b - squaredTerm) / (2 * a);
		if (root >= 0)
		{
			return root;
		}
	}

	return INFINITY;
}