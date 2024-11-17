// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Blueprint/UserWidget.h>
#include <GameFramework/SaveGame.h>
#include <UObject/ObjectPtr.h>

#include "GLSGategoryTextItemWidget.h"
#include "GLSSaveSystemTypes.h"
#include "GLSTypes.h"

#include "GLSCustomCategoriesWidgetBase.generated.h"

UCLASS(Abstract)
class GLSDEMO_API UGLSCustomCategoriesWidgetBase : public UUserWidget, public IGLSSaveSystemInterface
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = GLS)
    TObjectPtr<class UGLSWidgetBase> MainLogsWidget = nullptr;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = GLS)
    TObjectPtr<class UGLSListView> ListView = nullptr;

public:
    UFUNCTION(BlueprintCallable, Category = GLS)
    const TArray<class UGLSCustomCategoryModel*>& CetGategoryModels() const { return CategoryModels; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void AddCategoryItem(const FName& Category);

    UFUNCTION(BlueprintCallable, Category = GLS)
    bool ContainsCategory(const FName& Category);

    UFUNCTION(BlueprintCallable, Category = GLS)
    virtual void EnableCategoryTextOnLogs(const bool bEnable);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetActiveEditableMode(const EGLSCustomCetegoryEditableModeType ModeType, const bool bEnabled);

    UFUNCTION(BlueprintCallable, Category = GLS)
    bool GetActiveEditableMode(const EGLSCustomCetegoryEditableModeType ModeType) const;

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetCetegoriesSortType(const EGLSCustomCetegorySortType SortType);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SelectOrDeselectAllCategories();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetSearchText(const FText& SearchText);

    UFUNCTION(BlueprintPure, Category = GLS)
    EGLSCustomCetegorySortType GetCategorySortType() const { return CetegoriesSortType; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void InitializeCategories(const TArray<FName>& Categories);

    UFUNCTION(BlueprintPure, Category = GLS)
    int32 GetNumEnabledCategories() const;

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ClearCategories();

    UFUNCTION(BlueprintCallable, Category = GLS)
    void DisableCategories();

protected:
    UPROPERTY(transient)
    TArray<TObjectPtr<class UGLSCustomCategoryModel>> CategoryModels;

    /** Is edit mode active? */
    TMap<EGLSCustomCetegoryEditableModeType, bool> ActiveEditableMode = {{EGLSCustomCetegoryEditableModeType::Favorite, false}, {EGLSCustomCetegoryEditableModeType::Hidden, false}};

    EGLSCustomCetegorySortType CetegoriesSortType = EGLSCustomCetegorySortType::Newest;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GLS)
    bool bToolsPanelVisible = false;

    FText SearchText;

    FTimerHandle SortTimerHandle;

    bool bEnableSaveForCategories = false;

    EGLSCustomCategoriesTypes CategoryTpe = EGLSCustomCategoriesTypes::None;

protected:
    void NativeConstruct() override;

    virtual void OnModelVariableChanged(const UGLSCustomCategoryModel* Model, const FName& VariableName);

    virtual void ApplyFiltersByModel(const UGLSCustomCategoryModel* Model) { unimplemented(); };

    void OnCategoryItemClicked(UObject* Model);

    void OnCategoryItemDoubleClicked(UObject* Model);

    void OnEnabledEditableModeChanged(const UGLSCustomCategoryModel* Model, const EGLSCustomCetegoryEditableModeType Mode, const bool bEnabled);

    UFUNCTION()
    void OnOnFiltersCleared();

    void SortModelsAndRecreateView();

    TMap<FString, FString> PrepareDataToSave_Implementation();

    void RequestApplySave_Implementation() override;

    void SubscribeToMainLogWidget();

    void InitCategoriesFromSave();

    void OnLogRecieved(const TSharedPtr<FGLSLogInfo>& LogPtr);
};