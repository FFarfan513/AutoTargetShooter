// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseSystem.h"
#include <AutoTargetShooter/ECS/Components/FireProjectileComponent.h>

class AUTOTARGETSHOOTER_API FireProjectileAtTargetsSystem : public BaseSystem
{
public:
	UPROPERTY()
	static TSet<ABaseEntity*> AlreadyTargeted;

	FireProjectileAtTargetsSystem();

protected:
	void UpdateEntity(float DeltaTime, ABaseEntity* entity) override;

private:
	FVector FindDirectionToFire(const TObjectPtr<ABaseEntity>& source);

	FVector GetDirectionThatWillReachTarget(const TObjectPtr<ABaseEntity>& source, const TObjectPtr<ABaseEntity>& target);
	
	void SpawnProjectile(const UFireProjectileComponent* source, const FVector& directionToFire);

	const FVector GetEntityVelocity(const TObjectPtr<ABaseEntity>& entity);

	const float GetEntitySphereRadius(const TObjectPtr<ABaseEntity>& entity);

	//should maybe go in some math util?
	static double QuadraticFormula(double a, double b, double c);
};
