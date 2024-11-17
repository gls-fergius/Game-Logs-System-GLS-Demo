// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>
#include <GameFramework/SaveGame.h>
#include <UObject/Interface.h>

#include "GLSSaveSystemTypes.generated.h"

USTRUCT()
struct GLSDEMO_API FGLSSaveTabParamsInfo
{
    GENERATED_BODY()

public:
    FGLSSaveTabParamsInfo() = default;

    FGLSSaveTabParamsInfo(const FString& InTabName)
    {
        TabName = InTabName;
    }

    UPROPERTY()
    FString TabName;

    // TODO: set default value from config
    UPROPERTY()
    bool bEnableAutoSaveParams = true;

    UPROPERTY()
    bool bSelected = false;

    // key save param, value save param
    UPROPERTY()
    TMap<FString, FString> Params;
};

USTRUCT()
struct GLSDEMO_API FGLSSaveTabContext
{
    GENERATED_BODY()

public:
    FGLSSaveTabContext() = default;

    FGLSSaveTabContext(const uint8 Type, const int32 Instance)
    {
        WorldType = Type;
        PIEInstance = Instance;
    }

    UPROPERTY()
    uint8 WorldType = 0;

    UPROPERTY()
    int32 PIEInstance = -1;

    UPROPERTY()
    TArray<FGLSSaveTabParamsInfo> TabParamsInfo;

    bool operator==(const FGLSSaveTabContext& Other)
    {
        return WorldType == Other.WorldType && PIEInstance == Other.PIEInstance;
    }
};

USTRUCT()
struct GLSDEMO_API FGLSSaveData
{
    GENERATED_BODY()

public:
    UPROPERTY()
    TArray<FGLSSaveTabContext> TabContexts;
};

UINTERFACE(MinimalAPI, Blueprintable)
class UGLSSaveSystemInterface : public UInterface
{
    GENERATED_BODY()
};

class GLSDEMO_API IGLSSaveSystemInterface
{
    GENERATED_BODY()

public:
    void SetParentTabName(const FString& InTabName) { CurrentTabName = InTabName; }

    const FString& GetParentTabName() const { return CurrentTabName; }

    UFUNCTION(BlueprintNativeEvent)
    void RequestApplySave();

    UFUNCTION(BlueprintNativeEvent)
    TMap<FString, FString> PrepareDataToSave();

protected:
    FString CurrentTabName = TEXT("Tab 1"); //NOTE: default name, name from WBP_GLS_TabsPanel.uasset
};