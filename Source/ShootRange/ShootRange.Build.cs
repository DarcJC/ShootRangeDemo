// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShootRange : ModuleRules
{
	public ShootRange(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
