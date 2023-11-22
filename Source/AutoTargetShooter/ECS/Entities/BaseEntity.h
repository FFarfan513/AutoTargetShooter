// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <AutoTargetShooter/ECS/Components/BaseComponent.h>
#include "BaseEntity.generated.h"

UCLASS()
class AUTOTARGETSHOOTER_API ABaseEntity : public AActor
{
	GENERATED_BODY()
	
public:
	ABaseEntity();

	FORCEINLINE const FString& GetEntityID() const { return ID; }

	FORCEINLINE bool ContainsECSComponentType(TSubclassOf<UBaseComponent> type) const { return Components.Contains(type); }

	template<class T> bool ContainsECSComponentType() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, const UBaseComponent>::Value, "'T' template parameter to ContainsECSComponentType must be derived from UBaseComponent");
		return Components.Contains(T::StaticClass());
	}

	FORCEINLINE TObjectPtr<UBaseComponent> GetECSComponent(TSubclassOf<UBaseComponent> type) const { return Components.FindRef(type); }

	template<class T> TObjectPtr<T> GetECSComponent() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, const UBaseComponent>::Value, "'T' template parameter to GetECSComponent must be derived from UBaseComponent");
		return (T*)Components.FindRef(T::StaticClass());
	}

	static ABaseEntity* GetOwnerEntity(const UBaseComponent* ecsComponent) { return Cast<ABaseEntity>(ecsComponent->GetOwner()); }

	static ABaseEntity* GetActorAsEntity(AActor* actor) { return Cast<ABaseEntity>(actor); }

protected:
	UPROPERTY(EditAnywhere)
	FString ID;

	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	UPROPERTY()
	TMap<TSubclassOf<UBaseComponent>, TObjectPtr<UBaseComponent>> Components;

	void SetFilterTypes();
};
