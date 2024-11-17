// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Blueprint/UserWidget.h>
#include <Engine/UserInterfaceSettings.h>

#include "GLSTypes.h"

#include "GLSOverlayWithTabsWidgetBase.generated.h"

UCLASS(Abstract)
class GLSDEMO_API UGLSOverlayWithTabsWidgetBase : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = GLS)
    void InitNavigationRule();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void InitInputMode();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ResetNavigationRule();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ResetInputMode();

protected:
    TOptional<ERenderFocusRule> SavedFocusRule;

    TOptional<EGLSInputModeOverlay> EnabledInputMode;

protected:
    void NativeConstruct() override;

    void NativeDestruct() override;
};