// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerComponent.h"

void UTimerComponent::ReadWriteBinary(FArchive& archive)
{
	archive << this->TimerDuration;
	archive << this->TimerProgressTracker;
	archive << this->TimerActive;
	archive << this->TimerActivePrevious;
}
