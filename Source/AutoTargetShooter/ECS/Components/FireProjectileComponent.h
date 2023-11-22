// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseComponent.h"
#include "../Entities/BaseEntity.h"
#include "FireProjectileComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class AUTOTARGETSHOOTER_API UFireProjectileComponent : public UBaseComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFireProjectileDelegate);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProjectileSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProjectileLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProjectileRadius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ABaseEntity> ProjectileType;

	UPROPERTY(BlueprintAssignable)
	FOnFireProjectileDelegate OnFireProjectile;

	void ReadWriteBinary(FArchive& archive) override;
};