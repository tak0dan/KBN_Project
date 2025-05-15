// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class K_B_N : ModuleRules
{
	public K_B_N(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
