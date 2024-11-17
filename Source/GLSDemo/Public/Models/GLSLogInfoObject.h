// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include "UObject/Object.h"

#include "CoreMinimal.h"
#include "GLSTypes.h"

#include "GLSLogInfoObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class GLSDEMO_API UGLSLogInfoObject : public UObject
{
    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLogSelected, UGLSLogInfoObject*, Model, const bool, bSelected);
    UPROPERTY(BlueprintAssignable, Category = GLS)
    FOnLogSelected OnLogSelected;

    UFUNCTION(BlueprintCallable, Category = GLS)
    void LogSelected(bool bSelected)
    {
        OnLogSelected.Broadcast(this, bSelected);
    }

    void InitializeLogObject(const TSharedPtr<FGLSLogInfo>& InLogInfo)
    {
        LogInfoPtr = InLogInfo;
    }

    //TODO: refoctor or remove
    int32 DiplicateCount = 1;

    UFUNCTION(BlueprintPure, Category = GLS)
    const FGLSLogInfo& GetLogInfo() const { return *LogInfoPtr; }

    const TSharedRef<FGLSLogInfo> GetLogInfoRef() const { return LogInfoPtr.ToSharedRef(); }

    FString GetFormattedString(const TSharedPtr<FGLSLogSettings>& SettingsPtr) const;

private:
    TSharedPtr<FGLSLogInfo> LogInfoPtr;
};
