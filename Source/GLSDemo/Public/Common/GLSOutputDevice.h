// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include "Misc/OutputDeviceRedirector.h"

#include "CoreMinimal.h"
#include "GLS.h"
#include "GLSTypes.h"

class GLSDEMO_API FGLSOutputDevice : public FOutputDevice
{
public:
    FGLSOutputDevice();

    virtual ~FGLSOutputDevice();

    static FGLSOutputDevice* Get();

    [[nodiscard]] TArray<TUniquePtr<FGLSLogInfo>> ExtractReceivedLogs(const int32 MaxEntries);

    static void SerializeForGLS(UObject* Context, const TArray<FString>& Tags, const FString& Message, ELogVerbosity::Type Verbosity, const FString& Category, bool bPrintToLog = true);

    static void SerializeForGLS(const UObject* Context, const TArray<FString>& Tags, const FString& Message, ELogVerbosity::Type Verbosity, const FString& Category, bool bPrintToLog = true);

private:
    FCriticalSection Sync;

    TArray<TUniquePtr<FGLSLogInfo>> ReceivedLogs;

    static TUniquePtr<FGLSOutputDevice> OutputDevice;

    static bool bDestructed;

    uint64 LogsNum = 0;

private:
    virtual void Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category) override;

    virtual bool CanBeUsedOnAnyThread() const { return true; }

    void SerializeForGLS_Internal(UObject* Context, const TArray<FName>& Tags, const FString& Message, ELogVerbosity::Type Verbosity, const FString& Category, bool bPrintToLog = true);

    void AddSharedLogInfo(UObject* Context, const TCHAR* Text, ELogVerbosity::Type Verbosity, const FName& Category, const TArray<FName>& Tags);
};
