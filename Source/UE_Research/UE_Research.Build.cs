// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_Research : ModuleRules
{
	public UE_Research(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
