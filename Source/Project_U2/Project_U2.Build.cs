// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_U2 : ModuleRules
{
	public Project_U2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
