// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>

#include "GLSTypes.h"

#include "GLSCustomCategoryModel.generated.h"

DECLARE_MULTICAST_DELEGATE_TwoParams(FGategoryVariableChanged, const UGLSCustomCategoryModel*, const FName&);

DECLARE_MULTICAST_DELEGATE_ThreeParams(FEnabledEditableMode, const UGLSCustomCategoryModel*, const EGLSCustomCetegoryEditableModeType, const bool);

#define GLS_TYPE_NAME(Name) #Name

#define GLS_DECLARE_VARIABLE(Type, VarName)                            \
private:                                                               \
    Type VarName;                                                      \
                                                                       \
public:                                                                \
    void Set##VarName(const Type& NewValue)                            \
    {                                                                  \
        if (VarName != NewValue)                                       \
        {                                                              \
            VarName = NewValue;                                        \
            OnVariableChanged.Broadcast(this, GLS_TYPE_NAME(VarName)); \
        }                                                              \
    }                                                                  \
    const Type& Get##VarName() const                                   \
    {                                                                  \
        return VarName;                                                \
    }

UCLASS()
class GLSDEMO_API UGLSCustomCategoryModel : public UObject
{
    GENERATED_BODY()

    friend class UGLSCustomCategoriesWidgetBase;

public:
    UGLSCustomCategoryModel();

    FGategoryVariableChanged OnVariableChanged;

    FEnabledEditableMode OnEnabledEditableMode;

    // for sorting
    int32 Number = 0;

    GLS_DECLARE_VARIABLE(FName, CategoryName);

    GLS_DECLARE_VARIABLE(bool, CategoryEnable);

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetActiveEditableMode(const EGLSCustomCetegoryEditableModeType ModeType, const bool bEnabled);

    void SetActiveEditableModes(const TMap<EGLSCustomCetegoryEditableModeType, bool>& Modes);

    UFUNCTION(BlueprintPure, Category = GLS)
    bool GetActiveEditableMode(const EGLSCustomCetegoryEditableModeType ModeType) const;

    UFUNCTION(BlueprintCallable, Category = GLS)
    void SetEnableEditableMode(const EGLSCustomCetegoryEditableModeType ModeType, const bool bEnabled);

    UFUNCTION(BlueprintPure, Category = GLS)
    bool GetEnableEditableMode(const EGLSCustomCetegoryEditableModeType ModeType) const;

    UFUNCTION(BlueprintPure, Category = GLS)
    bool BP_GetCategoryEnable() const { return GetCategoryEnable(); }

    UFUNCTION(BlueprintCallable, Category = GLS)
    void ChangeCategoryEnable();

private:
    /** Is edit mode active? */
    TMap<EGLSCustomCetegoryEditableModeType, bool> ActiveEditableMode = {{EGLSCustomCetegoryEditableModeType::Favorite, false}, {EGLSCustomCetegoryEditableModeType::Hidden, false}};

    /** Is enabled favorite or visibility */
    TMap<EGLSCustomCetegoryEditableModeType, bool> EnabledEditableMode = {{EGLSCustomCetegoryEditableModeType::Favorite, false}, {EGLSCustomCetegoryEditableModeType::Hidden, false}};
};