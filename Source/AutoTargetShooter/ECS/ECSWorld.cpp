// Fill out your copyright notice in the Description page of Project Settings.

#include "ECSWorld.h"
#include "ECSSystemLoader.h"

TWeakObjectPtr<ABaseEntity> UECSWorld::GetEntity(const FString& id) const
{
	return ECSEntities.FindRef(id);
}

void UECSWorld::AddEntity(const TObjectPtr<ABaseEntity>& entity)
{
	additions.Enqueue(entity);
}

void UECSWorld::RemoveEntity(const FString& id)
{
	removals.Enqueue(&id);
}

void UECSWorld::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	ECSSystemLoader::LoadECSSystems(ECSSystems);
	initialized = true;
}

void UECSWorld::Deinitialize()
{
	Super::Deinitialize();
	initialized = false;
}

void UECSWorld::FinishDestroy()
{
	ECSEntities.Empty();
	ECSSystems.Empty();
	Super::FinishDestroy();
}

void UECSWorld::Tick(float DeltaTime)
{
	for (const auto& system : ECSSystems)
	{
		system->UpdateSystem(DeltaTime);
	}

	RemovePendingFromWorld();
	AddPendingToWorld();
}

void UECSWorld::AddPendingToWorld()
{
	if (additions.IsEmpty())
	{
		return;
	}

	ABaseEntity* adding = nullptr;
	while (additions.Dequeue(adding))
	{
		const FString& entityID = adding->GetEntityID();
		if (ECSEntities.Contains(entityID))
		{
			continue;
		}

		ECSEntities.Add(entityID, adding);

		for (const auto& system : ECSSystems)
		{
			if (SystemShouldContainEntity(system, adding))
			{
				system->AddEntity(adding);
			}
		}
	}
}

void UECSWorld::RemovePendingFromWorld()
{
	if (removals.IsEmpty())
	{
		return;
	}

	const FString* removing = nullptr;
	while (removals.Dequeue(removing))
	{
		const FString& id = *removing;
		if (ECSEntities.Contains(id))
		{
			for (const auto& system : ECSSystems)
			{
				system->RemoveEntity(id);
			}
			ECSEntities.Remove(id);
		}
	}
}

bool UECSWorld::SystemShouldContainEntity(const TUniquePtr<BaseSystem>& system, const TObjectPtr<ABaseEntity>& entity) const
{
	for (const auto& componentType : system->GetFilter())
	{
		if (!entity->ContainsECSComponentType(componentType))
		{
			return false;
		}
	}

	return true;
}
