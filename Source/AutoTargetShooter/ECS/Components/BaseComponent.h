// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent),
	hideCategories = (Tags, ComponentTick, ComponentReplication, Activation, Cooking, AssetUserData, Replication, Collision))
class AUTOTARGETSHOOTER_API UBaseComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UBaseComponent();

	FORCEINLINE const FString& GetComponentID() const { return ComponentID; }

	virtual void ReadWriteBinary(FArchive& archive);
	
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
	UPROPERTY(BlueprintReadOnly)
	FString ComponentID;
};