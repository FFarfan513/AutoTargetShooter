// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseComponent.h"
#include "TimerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AUTOTARGETSHOOTER_API UTimerComponent : public UBaseComponent
{
	GENERATED_BODY()

public:
	friend class TimerSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimerDuration;

	UPROPERTY(VisibleAnywhere)
	float TimerProgressTracker;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool TimerActive;

	void ReadWriteBinary(FArchive& archive) override;

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	bool TimerActivePrevious = false;
};
