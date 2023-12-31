// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Entities/BaseEntity.h"
#include "Systems/BaseSystem.h"
#include "ECSWorld.generated.h"

#define GETECSWORLD() GetWorld()->GetGameInstance()->GetSubsystem<UECSWorld>()

UCLASS()
class AUTOTARGETSHOOTER_API UECSWorld : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()
	
public:
	TWeakObjectPtr<ABaseEntity> GetEntity(const FString& id) const;
	void AddEntity(const TObjectPtr<ABaseEntity>& entity);
	void RemoveEntity(const FString& id);

	void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual void FinishDestroy() override;

	virtual void Tick(float DeltaTime) override;

	virtual TStatId GetStatId() const override { return TStatId(); }
	virtual UWorld* GetTickableGameObjectWorld() const override { return GetWorld(); }
	virtual bool IsTickable() const override { return initialized; }
	virtual bool IsAllowedToTick() const override { return initialized; }

protected:
	TArray<TUniquePtr<BaseSystem>> ECSSystems;

	UPROPERTY()
	TMap<FString, TObjectPtr<ABaseEntity>> ECSEntities;

	void AddPendingToWorld();

	void RemovePendingFromWorld();

private:
	bool initialized = false;

	TQueue<ABaseEntity*, EQueueMode::Mpsc> additions;

	TQueue<const FString*, EQueueMode::Mpsc> removals;

	bool SystemShouldContainEntity(const TUniquePtr<BaseSystem>& system, const TObjectPtr<ABaseEntity>& entity) const;
};
