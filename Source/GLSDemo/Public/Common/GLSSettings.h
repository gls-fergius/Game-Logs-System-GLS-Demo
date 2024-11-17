// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>
#include <GameFramework/GameMode.h>
#include <GameFramework/PlayerInput.h>
#include <UObject/NoExportTypes.h>

#include "Types/GLSTypes.h"

#include "GLSSettings.generated.h"

/** Game Logs System (GLS) settings. The settings will be applied to applied to every tab. */
UCLASS(Config = Game)
class GLSDEMO_API UGLSSettings : public UObject
{
    GENERATED_BODY()

public:
    UGLSSettings();

    UFUNCTION(BlueprintPure, Category = GLS, DisplayName = "Get Game Logs System Settings")
    static UGLSSettings* Get();

    TSubclassOf<UUserWidget> GLSMainClass;

    // Enable logging system in the editor
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "General")
    bool bEnableLogsInEditor = true;

    // Enable logging in development builds
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "General")
    bool bEnableLogsInDevelopmentBuilds = true;

    // Enable logging in debug builds
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "General")
    bool bEnableLogsInDebugBuilds = true;

    // Enable logging in test builds, disabled for Demo version
    UPROPERTY(Config, VisibleAnywhere, BlueprintReadOnly, Category = "General")
    bool bEnableLogsInTestBuilds = false;
	
    // Enable logging in shipping builds, disabled for Demo version
    UPROPERTY(Config, VisibleAnywhere, BlueprintReadOnly, Category = "General")
    bool bEnableLogsInShippingBuilds = false;

    // Enable logging in shipping builds with extended logging, disabled for Demo version
    UPROPERTY(Config, VisibleAnywhere, BlueprintReadOnly, Category = "General")
    bool bEnableLoggingInShippingWithLogs = false;

    // Maximum logs processed per frame
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Logging")
    int32 MaxLogsPerFrame = 1000;

    // Clear previous logs on PIE (Play In Editor only)
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Logging")
    bool bClearLogsOnPIE = true;

    // Clear logs in GLS log window on PIE (editor window only)
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Logging")
    bool bClearEditorLogsOnPIE = false;

    // Default tag types for logging (e.g., PIE, Role, Function, PlayerName)
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Logging", meta = (Bitmask, BitmaskEnum = "/Script/GLS.EGLSTagsDefaultTypes"))
    uint8 DefaultLoggingTagTypes;

    // Exclude logs by categories and verbosity
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Logging")
    TArray<FGLSCategoryWithVerbosities> ExcludedLogsByCategory;

    // Exclude logs by verbosity
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Logging")
    TArray<EGLSLogType> ExcludedLogsByVerbosity;

    // Enable layout save system
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Save system")
    bool bEnableLayoutSave = true;

    // Enable saving for custom categories
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Save system", meta = (Bitmask, EditCondition = "bEnableLayoutSave"))
    bool bEnableCustomCategorySave = true;

    // Custom category types to load
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Save system", meta = (Bitmask, BitmaskEnum = "/Script/GLS.EGLSCustomCategoriesTypes", EditCondition = "bEnableCustomCategorySave && bEnableLayoutSave"))
    uint8 CustomCategoriesToLoad;

    // UI scale factor for the editor
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "UI Scaling")
    float UIScaleEditor = 1.0f;

    // UI scale factor for desktop applications
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "UI Scaling")
    float UIScaleDesktop = 1.0f;

    // UI scale factor for console applications
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "UI Scaling")
    float UIScaleConsole = 1.0f;

    // UI scale factor for mobile applications
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "UI Scaling")
    float UIScaleMobile = 1.9f;

    // Allow opening the overlay via input actions in gameplay
    UPROPERTY(Config, EditAnywhere, Category = "Overlay")
    bool bAllowOverlayByInput = true;

    // Delay before displaying overlay after input is pressed
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay", meta = (EditCondition = "bAllowOverlayByInput"))
    float OverlayDisplayDelay = 1.0f;

    // Input mapping to open the overlay (keyboard, gamepad, etc.) in gameplay
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay", meta = (EditCondition = "bAllowOverlayByInput"))
    TArray<FInputActionKeyMapping> OverlayInputMappings;

    // Game modes that ignore input to open the overlay
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay", meta = (EditCondition = "bAllowOverlayByInput"))
    TSet<TSubclassOf<AGameModeBase>> IgnoredGameModesForOverlay;

    // Levels that ignore input to open the overlay
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay", meta = (EditCondition = "bAllowOverlayByInput"))
    TSet<TSoftObjectPtr<UWorld>> IgnoredLevelsForOverlay;

    // Input mode before open the overlay
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay", meta = (EditCondition = "bAllowOverlayByInput"))
    EGLSInputModeOverlay InputModeOverlay = EGLSInputModeOverlay::UIOnly;

    // Input mode after hiding the overlay
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay", meta = (EditCondition = "bAllowOverlayByInput"))
    EGLSInputModeOverlay InputModeAfterOverlayHide = EGLSInputModeOverlay::GameOnly;

    // Display background in the overlay
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay Appearance")
    bool bShowOverlayBackground = true;

    // Background color for the overlay
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay Appearance", meta = (EditCondition = "bShowOverlayBackground", ClampMin = "0.0", ClampMax = "1.0"))
    FLinearColor OverlayBackgroundColor = FLinearColor::Black;

    // Background opacity for the overlay
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay Appearance", meta = (EditCondition = "bShowOverlayBackground", ClampMin = "0.0", ClampMax = "1.0"))
    float OverlayBackgroundOpacity = 0.9f;

    // Blur strength for overlay background
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay Appearance", meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float OverlayBackgroundBlur = 1.0f;

    // Size for font log entries
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Overlay Appearance", meta = (ClampMin = "1", ClampMax = "100"))
    int32 LogsFontSize = 9;
};
