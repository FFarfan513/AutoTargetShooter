// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseSystem.h"

class AUTOTARGETSHOOTER_API MoveSystem : public BaseSystem
{
public:
	MoveSystem();

protected:
	void UpdateEntity(float DeltaTime, ABaseEntity* entity) override;
};
