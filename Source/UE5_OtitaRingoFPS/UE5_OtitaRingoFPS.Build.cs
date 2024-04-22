// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_OtitaRingoFPS : ModuleRules
{
	public UE5_OtitaRingoFPS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
