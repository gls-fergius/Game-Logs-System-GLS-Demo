// Copyright (c) 2024 Fergius Engineering.

using UnrealBuildTool;
using System;
using System.IO;
using System.Collections.Generic;
using EpicGames.Core;

public class GLSDemo : ModuleRules
{
    //TODO: link to docs "how to disable game logs for distribution build"
    [CommandLine("-gls_disable")]
    public bool GameLogsDisabled = false;

    public GLSDemo(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        IWYUSupport = IWYUSupport.Full;

        PublicIncludePaths.AddRange(GetRecursiveIncludePaths(ModuleDirectory + "\\Public"));
        PrivateIncludePaths.AddRange(GetRecursiveIncludePaths(ModuleDirectory + "\\Private"));

        if (Target.Type == TargetType.Server || GameLogsDisabled)
        {
            PublicDefinitions.Add("GLS_ENABLED=0");
            //System.Console.WriteLine("Game Logs System (GLS) disabled: log collection and overlay will be disabled.");
        }
        else
        {
			// Check if the build target is Shipping or not Win64
			if (Target.Configuration == UnrealTargetConfiguration.Shipping || Target.Platform != UnrealTargetPlatform.Win64)
			{
				// Output warning message
				Console.WriteLine("WARNING: Game Logs System (GLS) Demo plugin is for demo purposes only and will not function in Shipping configurations or on platforms other than Win64.");
				Console.WriteLine("If you would like to use the plugin in Shipping configurations or on other platforms, please purchase the full version at https://fab.com/s/43bbed079742.");
				
				PublicDefinitions.Add("GLS_ENABLED=0");
			}
			else
			{
				PublicDefinitions.Add("GLS_ENABLED=1");
				//System.Console.WriteLine("Game Logs System (GLS) enabled but the behavior can be override based on the settings in UGLSSettings: Log collection and overlay will be available to enable.");
			}
        }

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "UMG",
                "Slate",
                "SlateCore",
                "Json",
                "JsonUtilities",
                "Engine",
                "InputCore"
            }
            );

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "ApplicationCore"
                }
            );
        }

        if (Target.Type == TargetType.Editor)
        {
            PublicDependencyModuleNames.AddRange(new string[]
            {
                "UnrealEd",
                "DesktopPlatform"
            });
        }
    }

    public List<string> GetRecursiveIncludePaths(string Root)
    {
        List<string> Paths = new List<string>();

        string[] Folders = Directory.GetDirectories(Root);
        foreach (string Folder in Folders)
        {
            Paths.Add(Folder);
            Paths.AddRange(GetRecursiveIncludePaths(Folder));
        }

        return Paths;
    }
}
