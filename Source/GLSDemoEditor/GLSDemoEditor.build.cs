// Copyright (c) 2024 Fergius Engineering.

using System.IO;
using UnrealBuildTool;

public class GLSDemoEditor : ModuleRules
{
    public GLSDemoEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        IWYUSupport = IWYUSupport.Full;

        PrivateDependencyModuleNames.AddRange(new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "UnrealEd",
                "GLSDemo",
                "Slate",
                "SlateCore",
                "Blutility",
                "UMGEditor",
                "InputCore",
                "EditorStyle",
                "UMG",
                "Projects"
            });
    }
}