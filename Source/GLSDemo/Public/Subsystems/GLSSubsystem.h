// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>
#include <Misc/DateTime.h>
#include <Subsystems/EngineSubsystem.h>
#include <Tickable.h>
#include <UObject/Object.h>

#include "GLS.h"
#include "GLSOutputDevice.h"
#include "GLSTypes.h"

#include "GLSSubsystem.generated.h"

UCLASS()
class GLSDEMO_API UGLSSubsystem : public UEngineSubsystem, public FTickableGameObject
{
    GENERATED_BODY()

    /* Utils GLS functions */
public:
    /**
	 * Prints a string to the log and GLS overlay, and optionally, to the screen
	 * If Print To Log is true, it will be visible in the Output Log window.  Otherwise it will be logged only as 'Verbose', so it generally won't show up.
	 *
     * @param   Category        Category to log out
     * @param   Verbosity       Verbosity to log out
	 * @param	InString		The string to log out
	 * @param	bPrintToScreen	Whether or not to print the output to the screen
	 * @param	bPrintToLog		Whether or not to print the output to the log
	 * @param	bPrintToConsole	Whether or not to print the output to the console
	 * @param	TextColor		The color of the text to display
	 * @param	Duration		The display duration (if Print to Screen is True). Using negative number will result in loading the duration time from the config.
	 * @param	Key				If a non-empty key is provided, the message will replace any existing on-screen messages with the same key.
	 */
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext, Keywords = "log print", AdvancedDisplay = "2"), Category = GLS)
    static void PrintStringToGLS(UObject* WorldContextObject, const FString& InString = FString(TEXT("Hello")), const FString& Category = FString(TEXT("GLS")), const EGLSLogType Verbosity = EGLSLogType::Display, bool bPrintToScreen = true, bool bPrintToLog = true, FLinearColor TextColor = FLinearColor(0.0, 0.66, 1.0), float Duration = 2.f, const FName Key = NAME_None);

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext, Keywords = "log print", AdvancedDisplay = "2"), Category = GLS)
    static void PrintStringToGLSWithTags(UObject* WorldContextObject, const TArray<FString>& Tags, const FString& InString = FString(TEXT("Hello")), const FString& Category = FString(TEXT("GLS")), const EGLSLogType Verbosity = EGLSLogType::Display, bool bPrintToScreen = true, bool bPrintToLog = true, FLinearColor TextColor = FLinearColor(0.0, 0.66, 1.0), float Duration = 2.f, const FName Key = NAME_None);

public:
    FOnLogReceivedDelegate OnLogRecieved;

    UPROPERTY(BlueprintAssignable, Category = GLS)
    FOnLogCategoryReceivedDelegate OnCategoryRecieved;

    UPROPERTY(BlueprintAssignable, Category = GLS)
    FOnLogClassNameReceivedDelegate OnClassNameRecieved;

    UPROPERTY(BlueprintAssignable, Category = GLS)
    FOnLogObjectNameReceivedDelegate OnObjectNameRecieved;

    UPROPERTY(BlueprintAssignable, Category = GLS)
    FOnLogTagsReceivedDelegate OnTagsRecieved;

    UPROPERTY(BlueprintAssignable, Category = GLS)
    FOnLogVerboseReceivedDelegate OnVerboseRecieved;

    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPIEBeginDelegate);
    UPROPERTY(BlueprintAssignable, Category = GLS)
    FOnPIEBeginDelegate OnPIEStarted;

public:
    UFUNCTION(BlueprintPure, DisplayName = "Get Game Logs Subsystem", meta = (HidePin = "WorldContext", DefaultToSelf = "WorldContext"), Category = GLS)
    static UGLSSubsystem* Get(const UObject* WorldContext);

    const FLogsFullData& GetLogsFullData() const { return LogsFullData; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ClearAllLogsData();

    const FDateTime& GetLastBeginPIETime() const { return LastBeginPIETime; }

    virtual bool IsTickable() const override { return !HasAllFlags(RF_ClassDefaultObject); };

    /** This is an arrays with logs data that contains all the data from the game and UE systems. */
protected:
    FLogsFullData LogsFullData;

    FDateTime LastBeginPIETime;

protected:
    void Initialize(FSubsystemCollectionBase& Collection) override;

    bool ShouldCreateSubsystem(UObject* Outer) const override;

    void Deinitialize() override;

    void AddLog_Internal(TUniquePtr<FGLSLogInfo>&& LogInfo);

    void ProcessNewLogEntries(TArray<TUniquePtr<FGLSLogInfo>>&& NewEntries);

    bool IsTickableWhenPaused() const { return true; }

    TStatId GetStatId() const { return TStatId(); }

    void Tick(float DeltaTime) override;

    bool IsTickableInEditor() const override { return true; }

    void OnBeginPIE(bool bSimulate);
};