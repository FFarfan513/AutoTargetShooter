// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerSystem.h"
#include <AutoTargetShooter/ECS/Components/TimerComponent.h>

TimerSystem::TimerSystem() : BaseSystem(UTimerComponent::StaticClass()) { }

void TimerSystem::UpdateEntity(float DeltaTime, ABaseEntity* entity)
{
	UTimerComponent* timerComp = entity->GetECSComponent<UTimerComponent>();

	if (timerComp->TimerActive != timerComp->TimerActivePrevious)
	{
		if (timerComp->TimerActive)
		{
			timerComp->TimerProgressTracker = timerComp->TimerDuration;
		}
		timerComp->TimerActivePrevious = timerComp->TimerActive;
	}
	else if (timerComp->TimerActive && timerComp->TimerProgressTracker > 0.f)
	{
		timerComp->TimerProgressTracker = FMathf::Max(0.f, timerComp->TimerProgressTracker - DeltaTime);
		if (timerComp->TimerProgressTracker == 0.f)
		{
			timerComp->TimerActive = false;
			timerComp->TimerActivePrevious = false;
		}
	}
}
