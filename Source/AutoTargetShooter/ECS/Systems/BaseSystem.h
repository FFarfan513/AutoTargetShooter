// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <AutoTargetShooter/ECS/Components/BaseComponent.h>
#include <AutoTargetShooter/ECS/Entities/BaseEntity.h>

class AUTOTARGETSHOOTER_API BaseSystem
{
public:
	template<typename... ComponentTypes> BaseSystem(ComponentTypes... components)
		: Filter({ components... })
	{
		static_assert(std::conjunction<std::is_convertible<ComponentTypes, TSubclassOf<UBaseComponent>>...>::value,
			"BaseSystem constructor arguments must be derived from UBaseComponent");
	}

	virtual ~BaseSystem();

	void AddEntity(const TObjectPtr<ABaseEntity>& entity);

	int32 RemoveEntity(const FString& id);

	FORCEINLINE const TSet<TSubclassOf<UBaseComponent>>& GetFilter() const { return Filter; }

	void UpdateSystem(float DeltaTime);

protected:
	UPROPERTY()
	TMap<FString, TWeakObjectPtr<ABaseEntity>> Entities;

	UPROPERTY()
	TSet<TSubclassOf<UBaseComponent>> Filter;

	virtual void UpdateEntity(float DeltaTime, ABaseEntity* entity) = 0;
};
