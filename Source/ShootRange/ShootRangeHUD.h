// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShootRangeHUD.generated.h"

UCLASS()
class AShootRangeHUD : public AHUD
{
	GENERATED_BODY()

public:
	AShootRangeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

