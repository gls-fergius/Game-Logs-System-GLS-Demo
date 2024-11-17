// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>
#include <Engine/EngineTypes.h>
#include <Subsystems/EngineSubsystem.h>

#include "GLSSaveSystemTypes.h"

#include "GLSSaveSubsystem.generated.h"

UCLASS()
class GLSDEMO_API UGLSSaveSubsystem : public UEngineSubsystem
{
    GENERATED_BODY()

public:
    static UGLSSaveSubsystem* Get(const UObject* Context);

    void SaveParams(const EWorldType::Type Type, const int32 Instance, const FString& TabName, const TMap<FString, FString>& Params);

    bool GetParamValue(const EWorldType::Type Type, const int32 Instance, const FString& TabName, const FString& ParamName, FString& OutValue);

    TMap<FString, FString> GetSaveValuesBySaveTag(const EWorldType::Type Type, const int32 Instance, const FString& TabName, const TArray<FString>& SaveTags);

    void RemoveSave(const EWorldType::Type Type, const int32 Instance, const FString& TabName);

    void CleanSave(const EWorldType::Type Type, const int32 Instance, const FString& TabName);

    void EnableSaveData(const EWorldType::Type Type, const int32 Instance, const FString& TabName, const bool bEnable, const bool bForceCleanParams);

    bool GetEnableSaveData(const EWorldType::Type Type, const int32 Instance, const FString& TabName);

    TArray<FString> GetTabNames(const EWorldType::Type Type, const int32 Instance);

    FString GetSelectedTabName(const EWorldType::Type Type, const int32 Instance);

    void SetSelectedTabByName(const EWorldType::Type Type, const int32 Instance, const FString& TabName, const bool bSelected);

    void SaveDataBinary();

protected:
    UPROPERTY()
    FGLSSaveData SaveData;

protected:
    void Initialize(FSubsystemCollectionBase& Collection) override;

    bool ShouldCreateSubsystem(UObject* Outer) const override;

    FGLSSaveTabParamsInfo& GetTabParamsInfoRef(const EWorldType::Type Type, const int32 Instance, const FString& TabName);

    FGLSSaveTabParamsInfo& GetTabParamsInfoRef(const FString& TabName, FGLSSaveTabContext& TabContext);

    FGLSSaveTabContext& GetTabContextRef(const EWorldType::Type Type, const int32 Instance);

private:
    void LoadSaveDataBinary();
};