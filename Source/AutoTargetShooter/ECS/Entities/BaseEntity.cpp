// Fill out your copyright notice in the Description page of Project

#include "BaseEntity.h"
#include <AutoTargetShooter/ECS/ECSWorld.h>

ABaseEntity::ABaseEntity()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ABaseEntity::BeginPlay()
{
	// quick hack to allow spawning unique ids. todo: set up some actual way to spawn unique ids
	static uint64 TestCount = 0;
	ID.AppendInt(TestCount++);
	Super::BeginPlay();

	SetFilterTypes();
	GETECSWORLD()->AddEntity(this);
}

void ABaseEntity::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	GETECSWORLD()->RemoveEntity(ID);
	Components.Empty();
}

void ABaseEntity::SetFilterTypes()
{
	TInlineComponentArray<TObjectPtr<UBaseComponent>> ecsComponents;
	GetComponents(ecsComponents);

	Components.Reserve(ecsComponents.Num());
	for (const auto& component : ecsComponents)
	{
		Components.Emplace(component->GetClass(), component);
	}
}
