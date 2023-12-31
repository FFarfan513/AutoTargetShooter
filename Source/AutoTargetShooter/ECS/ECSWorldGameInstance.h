// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Components/BinaryDataHolder.h"
#include "ECSWorldGameInstance.generated.h"

#define GETECSGAMEINSTANCE() GetWorld()->GetGameInstance<UECSWorldGameInstance>()

UCLASS()
class AUTOTARGETSHOOTER_API UECSWorldGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;

	virtual void Shutdown() override;

	void SaveComponent(const FString& componentName, const TArray<uint8>& binaryData);

	const TArray<uint8>* LoadComponent(const FString& componentName) const;

	//// TODO: save savedComponentData contents to file
	//void SaveGame();

	//// TODO: populate savedComponentData from save file
	//void LoadGame();

protected:
	UPROPERTY(SaveGame)
	TMap<FString, FBinaryDataHolder> savedComponentData;
};
