// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>
#include <Kismet/BlueprintFunctionLibrary.h>

#include "GLSTypes.h"

#include "GLSUtils.generated.h"

class GLSDEMO_API FGLSUtils
{
public:
    static int32 GetPIEInstance(UObject* InContext);

    static int32 GetPIECount();

    static FString GetTagsStrByLogInfo(const TSharedPtr<FGLSLogInfo>& LogInfoPtr);

    static FString GetFormattedStringByLogDataAndSettings(const TSharedRef<FGLSLogInfo>& LogInfoRef, const TSharedPtr<FGLSLogSettings>& LogSettingsPtr, const int32 DuplicatedCount);

    static FString GetRoleByContext(UObject* Context);

    static void CopyLogsToClipboard(const FString& Logs);

    static TSharedPtr<FGLSLogInfo> ParseLogEnty(const FString& LogStr);

    static bool IsGLSEnabled();
};

UCLASS()
class GLSDEMO_API UGLSUtils : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category = GLS)
    static bool IsDesktopPlatform();

    UFUNCTION(BlueprintPure, Category = GLS)
    static bool IsConsolePlatform();

    UFUNCTION(BlueprintPure, Category = GLS)
    static bool IsMobilePlatform();

    UFUNCTION(BlueprintPure, Category = GLS)
    static bool IsEditor();

    UFUNCTION(BlueprintPure, meta = (HidePin = "Context", DefaultToSelf = "Context"), Category = GLS)
    static bool IsEditorContext(UObject* Context);

    UFUNCTION(BlueprintCallable, Category = GLS)
    static void OpenGLSEditorSettings();

    UFUNCTION(BlueprintPure, Category = GLS)
    static int32 GetMaxObjectsInGame();

    UFUNCTION(BlueprintPure, Category = GLS)
    static bool IsLogsEmpty(UObject* Context);

    UFUNCTION(BlueprintPure, Category = GLS)
    static const int32 GetLogsNum(UObject* Context);

    static const TArray<TSharedPtr<FGLSLogInfo>>& GetLogs(UObject* Context);

    UFUNCTION(BlueprintPure, Category = GLS)
    static const TSet<FName>& GetReceivedCategories(UObject* Context);

    UFUNCTION(BlueprintPure, Category = GLS)
    static const TSet<FName>& GetReceivedClassNames(UObject* Context);

    UFUNCTION(BlueprintPure, Category = GLS)
    static const TSet<FName>& GetReceivedObjectNames(UObject* Context);

    UFUNCTION(BlueprintPure, Category = GLS)
    static const TSet<FName>& GetReceivedTags(UObject* Context);

    static const FLogsFullData& GetLogsFullData(UObject* Context);

    static FOnLogCategoryReceivedDelegate& GetCategoryRecievedEvent(UObject* Context);

    static FOnLogClassNameReceivedDelegate& GetClassNameRecievedEvent(UObject* Context);

    static FOnLogObjectNameReceivedDelegate& GetObjectNameRecievedEvent(UObject* Context);

    static FOnLogTagsReceivedDelegate& GetTagsRecievedEvent(UObject* Context);

    static FOnLogVerboseReceivedDelegate& GetVerboseRecievedEvent(UObject* Context);
};