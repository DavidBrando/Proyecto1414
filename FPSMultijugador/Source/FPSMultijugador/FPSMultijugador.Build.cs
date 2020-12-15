// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPSMultijugador : ModuleRules
{
	public FPSMultijugador(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
