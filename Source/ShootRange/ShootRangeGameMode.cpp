// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootRangeGameMode.h"
#include "ShootRangeHUD.h"
#include "ShootRangeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootRangeGameMode::AShootRangeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShootRangeHUD::StaticClass();
}
