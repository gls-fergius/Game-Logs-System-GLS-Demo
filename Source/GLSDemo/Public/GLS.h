// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>
#include <Modules/ModuleManager.h>
#include <Stats/Stats.h>

DECLARE_STATS_GROUP(TEXT("Game Logs System"), STATGROUP_GLS, STATCAT_Advanced);

class FGLSModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
