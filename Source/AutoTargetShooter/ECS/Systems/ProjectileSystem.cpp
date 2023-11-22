// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileSystem.h"
#include <AutoTargetShooter/ECS/Components/ProjectileComponent.h>
#include <AutoTargetShooter/ECS/Components/TimerComponent.h>

ProjectileSystem::ProjectileSystem()
	: BaseSystem(UProjectileComponent::StaticClass(), UTimerComponent::StaticClass()) { }

void ProjectileSystem::UpdateEntity(float DeltaTime, ABaseEntity* entity)
{
	UTimerComponent* timerComp = entity->GetECSComponent<UTimerComponent>();

	if (!timerComp->TimerActive && timerComp->TimerProgressTracker == 0.f)
	{
		entity->Destroy();
	}
}