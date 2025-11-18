// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GAS_Pattern : ModuleRules
{
    public GAS_Pattern(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", 
            "CoreUObject", 
            "Engine", 
            "InputCore", 
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTasks",
            "GameplayTags",
            "AnalyticsBlueprintLibrary" ,
            
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
        });

    }
}
