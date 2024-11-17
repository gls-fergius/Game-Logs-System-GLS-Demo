// Copyright (c) 2024 Fergius Engineering.
#pragma once

#include "GLSCustomCategoriesWidgetBase.h"

#include "GLSCategoriesWidgetBase.generated.h"

UCLASS(Abstract)
class GLSDEMO_API UGLSCategoriesWidgetBase : public UGLSCustomCategoriesWidgetBase
{
    GENERATED_BODY()

public:
    UGLSCategoriesWidgetBase();

protected:
    virtual void ApplyFiltersByModel(const UGLSCustomCategoryModel* Model) override;

    virtual void EnableCategoryTextOnLogs(const bool bEnable) override;
};