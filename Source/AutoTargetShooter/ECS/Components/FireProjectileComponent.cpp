// Fill out your copyright notice in the Description page of Project Settings.


#include "FireProjectileComponent.h"

void UFireProjectileComponent::ReadWriteBinary(FArchive& archive)
{
	archive << this->ProjectileSpeed;
	archive << this->ProjectileLifetime;
	archive << this->ProjectileRadius;
}