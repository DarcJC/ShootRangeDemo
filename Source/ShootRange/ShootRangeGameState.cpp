// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootRangeGameState.h"

AShootRangeGameState::AShootRangeGameState()
{
	Score = 0;
}

auto AShootRangeGameState::GetScore() const -> int
{
	return Score;
}

void AShootRangeGameState::BeginPlay()
{
}
