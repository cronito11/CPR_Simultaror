// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPR_Simulation_UE : ModuleRules
{
	public CPR_Simulation_UE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CPR_Simulation_UE",
			"CPR_Simulation_UE/Variant_Horror",
			"CPR_Simulation_UE/Variant_Horror/UI",
			"CPR_Simulation_UE/Variant_Shooter",
			"CPR_Simulation_UE/Variant_Shooter/AI",
			"CPR_Simulation_UE/Variant_Shooter/UI",
			"CPR_Simulation_UE/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
