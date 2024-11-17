// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Blueprint/UserWidget.h>
#include <CoreMinimal.h>

#include "GLSSaveSystemTypes.h"

#include "GLSOverlayWidgetBase.generated.h"

UCLASS(Abstract)
class GLSDEMO_API UGLSOverlayWidgetBase : public UUserWidget, public IGLSSaveSystemInterface
{
    GENERATED_BODY()

public:
    UGLSOverlayWidgetBase(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<UObject>> InterfaceArray;

protected:
    void NativeConstruct() override;

    void NativeDestruct() override;

    void OnEnterBackground();

    void SaveLayoutData();
};