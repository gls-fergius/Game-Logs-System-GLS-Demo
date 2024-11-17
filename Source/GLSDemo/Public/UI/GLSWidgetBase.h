// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Blueprint/UserWidget.h>
#include <CoreMinimal.h>
#include <TimerManager.h>
#include <UObject/ObjectPtr.h>

#include "GLSLogFilter.h"
#include "GLSSaveSystemTypes.h"
#include "GLSSubsystem.h"

#include "GLSWidgetBase.generated.h"

DECLARE_DELEGATE_TwoParams(FSetLogVisibilityDelegate, const int32 Idx, const ESlateVisibility NewVisibility);

UCLASS(Abstract)
class GLSDEMO_API UGLSWidgetBase : public UUserWidget, public IGLSSaveSystemInterface
{
    GENERATED_BODY()

    friend class UGLSSaveSystemUtils;
    friend class UGLSSaveSubsystem;

public:
    UGLSWidgetBase(const FObjectInitializer& ObjectInitializer);

    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFiltersRemovedDelegate);
    UPROPERTY(BlueprintAssignable, Category = GLS)
    FFiltersRemovedDelegate OnFiltersCleared;

public:
    UFUNCTION(BlueprintCallable, Category = GLS)
    void ClearLogs();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ClearFilters();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void CopyFiltered();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void CopyFull();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SaveFullLogs();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SaveFilteredLogs();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SaveGLSLogs();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void OpenLogs();

    //TODO : disabled because not optimized
    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetLogsDuplicates(const bool bEnable)
    {
        LogSettingsPtr->bLogsDuplicates = bEnable;
        MarkNeedRecreateLogFilters();
    }

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsLogsDuplicates() const { return LogSettingsPtr ? LogSettingsPtr->bLogsDuplicates : false; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetLogsWithTime(const bool bEnable)
    {
        if (LogSettingsPtr)
            LogSettingsPtr->bLogsWithTime = bEnable;
    }

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsLogsWithTime() const { return LogSettingsPtr ? LogSettingsPtr->bLogsWithTime : false; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetLogsWithFrame(const bool bEnable)
    {
        if (LogSettingsPtr)
            LogSettingsPtr->bLogsWithFrame = bEnable;
    }

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsLogsWithFrame() const { return LogSettingsPtr ? LogSettingsPtr->bLogsWithFrame : false; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetLogsWithCategory(const bool bEnable)
    {
        if (LogSettingsPtr)
            LogSettingsPtr->bLogsWithCategory = bEnable;
    }

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsLogsWithCategory() const { return LogSettingsPtr ? LogSettingsPtr->bLogsWithCategory : false; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetLogsWithVerbosity(const bool bEnable)
    {
        if (LogSettingsPtr)
            LogSettingsPtr->bLogsWithVerbosity = bEnable;
    }

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsLogsWithVerbosity() const { return LogSettingsPtr ? LogSettingsPtr->bLogsWithVerbosity : false; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetLogsWithTags(const bool bEnable)
    {
        if (LogSettingsPtr)
            LogSettingsPtr->bLogsWithTags = bEnable;
    }

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsLogsWithTags() const { return LogSettingsPtr ? LogSettingsPtr->bLogsWithTags : false; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetLogsWithObjectNames(const bool bEnable)
    {
        if (LogSettingsPtr)
            LogSettingsPtr->bLogsWithObjectName = bEnable;
    }

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsLogsWithObjectNames() const { return LogSettingsPtr ? LogSettingsPtr->bLogsWithObjectName : false; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetLogsWithClassNames(const bool bEnable)
    {
        if (LogSettingsPtr)
            LogSettingsPtr->bLogsWithClassName = bEnable;
    }

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsLogsWithClassNames() const { return LogSettingsPtr ? LogSettingsPtr->bLogsWithClassName : false; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetFollowLogs(const bool bEnable);

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsFollowingLogs() const { return bFollowingLogs; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetReceivingLogs(const bool bEnable);

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsReceivingLogs() const { return bReceivingLogs; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetHighlightText(const FText& Text);

    UFUNCTION(BlueprintPure, Category = GLS)
    bool IsAutoSaveLayoutEnabled() const;

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetAutoSaveLayoutEnabled(const bool bEnable);

    UFUNCTION(BlueprintPure, Category = GLS)
    FString GetActiveFiltersStr() const;

    UFUNCTION(BlueprintPure, Category = GLS)
    int32 GetLogsCount() const;

    UFUNCTION(BlueprintCallable, Category = GLS)
    void MarkNeedRecreateLogFilters();

public:
    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFilterByClassName(const FName& ClassName, const bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFilterByClassNames(const TArray<FName>& ClassNames, const bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFilterByLogType(const EGLSLogType Verbosity, const bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFilterByLogTypes(const TArray<EGLSLogType>& Types, const bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFilterByCategory(const FName& Category, const bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFilterByCategories(const TArray<FName>& Categories, const bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFilterByTag(const FName& Tag, const bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFilterByTags(const TArray<FName>& Tags, const bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFilterByText(const FText& TextFilter);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFilterByObjectName(const FName& ObjectName, const bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ApplyFiltersByObjectNames(const TArray<FName>& ObjectNames, const bool bEnabled);

protected:
    UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = GLS)
    TObjectPtr<class UGLSListView> ListView_Logs = nullptr;

    UPROPERTY(EditAnywhere, Category = GLS)
    TSubclassOf<class UGLSLogItemBase> LogWidgetClass;

    UPROPERTY(Transient)
    TMap<uint64, FFilteredLog> LogDataModels;

    TSharedPtr<FGLSLogSettings> LogSettingsPtr;

    /** Following and receiving logs */
protected:
    bool bFollowingLogs = true;

    bool bReceivingLogs = true;

    float LastScrollOffset = 0.f;

    //TODO: move to own utils from here
protected:
    FString LastSaveDir;

protected:
    TArray<FGLSFilterLog> Filters;

    TArray<TSharedPtr<FGLSLogInfo>> PendingLogsFiltered;

    TArray<TSharedPtr<FGLSLogInfo>> PendingToCreate;

    TSharedPtr<FText> HighlightTextPtr;

    bool bNeedRecreateLogFilters = false;

    /** Used to indicate the last log from which logs should be displayed in this tab. */
    uint64 LastSavedLogNum = 0;

    uint64 LastCreatedLogNum = 0;

protected:
    void NativeConstruct() override;

    void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ProcessFilters();

    UFUNCTION()
    void OnLogModelsCleared();

    UFUNCTION()
    void OnGeneratedEntryWidget(UObject* Model, UUserWidget* Widget);

    void ProcessCreateLogs();

    void ScrollToBottom();

    bool SetVisibilityToLogWidgetByIndex(const int32 Idx, const bool bVisible);

    UGLSLogInfoObject* AddFilteredItemToList(TSharedPtr<FGLSLogInfo>& LogDataToAdd, const FContainerFilters& Filters);

    bool CanApplyFilterToLog(const TSharedRef<FGLSLogInfo>& LogRef, const FContainerFilters& Filters);

    bool SetVisibilityToLogWidget(UWidget* Widget, const bool bVisible);

    void OnLogReceived(const TSharedPtr<FGLSLogInfo>& LogInfo);

    class UGLSLogItemBase* GetLastLogItem() const;

    FReply NativeOnAnalogValueChanged(const FGeometry& MyGeometry, const FAnalogInputEvent& InAnalogInputEvent) override;

    TMap<FString, FString> PrepareDataToSave_Implementation();
};