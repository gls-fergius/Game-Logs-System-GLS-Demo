// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include "GLSCustomCategoriesWidgetBase.h"

#include "GLSTagsWidgetBase.generated.h"

UCLASS(Abstract)
class GLSDEMO_API UGLSTagsWidgetBase : public UGLSCustomCategoriesWidgetBase
{
    GENERATED_BODY()

public:
    UGLSTagsWidgetBase();

protected:
    virtual void ApplyFiltersByModel(const UGLSCustomCategoryModel* Model) override;

    void EnableCategoryTextOnLogs(const bool bEnable) override;
};