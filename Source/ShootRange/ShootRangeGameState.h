// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "ShootRangeGameState.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTRANGE_API AShootRangeGameState : public AGameState
{
	GENERATED_BODY()

public:
	AShootRangeGameState();

	UPROPERTY(BlueprintReadWrite)
	TArray<int> PlayerScore;
	
};
