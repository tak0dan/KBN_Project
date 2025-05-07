// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class KBN_Project1 : ModuleRules
{
	public KBN_Project1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
