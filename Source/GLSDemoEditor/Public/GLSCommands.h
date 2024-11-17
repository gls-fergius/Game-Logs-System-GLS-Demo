// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include "Framework/Commands/Commands.h"

#include "CoreMinimal.h"

class FGLSCommands : public TCommands<FGLSCommands>
{
public:
    FGLSCommands()
        : TCommands<FGLSCommands>(TEXT("GameLogsSystem"), NSLOCTEXT("Game logs system", "GLSPluginName", "Game logs system plugin"), NAME_None, FName(TEXT("GameLogsSystemStyle")))
    {
    }

    virtual void RegisterCommands() override;

public:
    TSharedPtr<FUICommandInfo> OpenPluginWindow;
};