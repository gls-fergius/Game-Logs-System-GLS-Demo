// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Modules/ModuleManager.h>
#include <Templates/SharedPointer.h>
#include <UObject/ObjectPtr.h>
#include <UnrealEdMisc.h>

class FGLSEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

protected:
    TSharedPtr<class FUICommandList> PluginCommands;

    TWeakPtr<class SDockTab> CreatedTab;

    TObjectPtr<class UUserWidget> CreatedUMGWidget = nullptr;

    bool bSubscribedToRecompile = false;

    TSharedPtr<class FSlateStyleSet> Style;

protected:
    void OpenTabClicked();

    void AddMenuExtension(class FMenuBuilder& Builder);

    TSharedRef<class SDockTab> CreateGLSPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

    void OnChangedTabWorld(class UWorld* World, EMapChangeType MapChangeType);

    void RegenerateCreatedTab();

    TSharedRef<SWidget> CreateUtilityWidget();

    void OnTabClosed(TSharedRef<SDockTab> TabBeingClosed);

    void AddToolbarExtension(class FToolBarBuilder& Builder);
};