// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Engine/TimerHandle.h>
#include <Engine/World.h>
#include <Subsystems/GameInstanceSubsystem.h>
#include <Tickable.h>
#include <TimerManager.h>

#include "GLSOverlaySubsystem.generated.h"

UCLASS()
class GLSDEMO_API UGLSOverlaySubsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
    GENERATED_BODY()

public:
    UGLSOverlaySubsystem();

    UFUNCTION(BlueprintPure, DisplayName = "Get Game Logs Overlay", meta = (HidePin = "Context", DefaultToSelf = "Context"), Category = GLS)
    static UGLSOverlaySubsystem* Get(const UObject* Context);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void DisplayOverlay();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void HideOverlay();

private:
    TUniquePtr<FTimerManager> TimerManager;

    FTimerHandle InitializeInputDebugWidget_TimerHandle;

    FTimerHandle DisplayOverlay_TimerHandle;

    UPROPERTY(transient)
    TObjectPtr<class UGLSOverlayWithTabsWidgetBase> OverlayWidget;

    TSharedPtr<class SWidget> LastFocusedWidget = nullptr;

private:
    bool IsTickableWhenPaused() const override;

    TStatId GetStatId() const override;

    void Tick(float DeltaTime) override;

    bool ShouldCreateSubsystem(UObject* Outer) const override;

    void Initialize(FSubsystemCollectionBase& Collection) override;

    void InitializeInput();

    void AddKeyBindingToDisplayOverlay(class APlayerController* PC);

    void OnDisplayOverlayPressed();

    void OnDisplayOverlayReleased();

    static bool CanDisplayOverlay();

    void OnWorldInitializationEvent(class UWorld* World, const UWorld::InitializationValues IVS);

    void SaveLastFocusedWidget();

    void SetWidgetToLastFocused();
};