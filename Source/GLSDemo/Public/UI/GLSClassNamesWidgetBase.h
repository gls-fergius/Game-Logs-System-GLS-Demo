// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include "GLSCustomCategoriesWidgetBase.h"

#include "GLSClassNamesWidgetBase.generated.h"

UCLASS(Abstract)
class GLSDEMO_API UGLSClassNamesWidgetBase : public UGLSCustomCategoriesWidgetBase
{
    GENERATED_BODY()

public:
    UGLSClassNamesWidgetBase();

protected:
    virtual void ApplyFiltersByModel(const UGLSCustomCategoryModel* Model) override;

    void EnableCategoryTextOnLogs(const bool bEnable) override;
};