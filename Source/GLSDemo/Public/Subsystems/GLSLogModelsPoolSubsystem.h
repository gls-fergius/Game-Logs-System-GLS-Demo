// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>
#include <Subsystems/EngineSubsystem.h>

#include "Types/GLSTypes.h"

#include "GLSLogModelsPoolSubsystem.generated.h"

UCLASS(Blueprintable)
class GLSDEMO_API UGLSLogModelsPoolSubsystem : public UEngineSubsystem
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, DisplayName = "Get LogModelsPool Subsystem", meta = (HidePin = "WorldContext", DefaultToSelf = "WorldContext"), Category = GLS)
    static UGLSLogModelsPoolSubsystem* Get(const UObject* WorldContext);

    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModelsCleared);
    FOnModelsCleared OnModelsCleared;

    UGLSLogInfoObject* CreateModel(const TSharedPtr<struct FGLSLogInfo>& Info,  bool& bPoolCleared);

    UFUNCTION(BlueprintPure, Category = GLS)
    int32 GetModelsCount() const { return LogsModelPool.Num(); }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ResetModels();

protected:
    UPROPERTY(Transient)
    TMap<FGuid, TObjectPtr<class UGLSLogInfoObject>> LogsModelPool;

    UPROPERTY(BlueprintReadOnly, Category = GLS)
    int32 MaxObjectsInGame;

protected:
    bool ShouldCreateSubsystem(UObject* Outer) const override;

    void Initialize(FSubsystemCollectionBase& Collection) override;
};