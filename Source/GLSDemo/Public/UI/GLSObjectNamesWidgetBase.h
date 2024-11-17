// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include "GLSCustomCategoriesWidgetBase.h"

#include "GLSObjectNamesWidgetBase.generated.h"

UCLASS(Abstract)
class GLSDEMO_API UGLSObjectNamesWidgetBase : public UGLSCustomCategoriesWidgetBase
{
    GENERATED_BODY()

public:
    UGLSObjectNamesWidgetBase();

protected:
    virtual void ApplyFiltersByModel(const UGLSCustomCategoryModel* Model) override;

    void EnableCategoryTextOnLogs(const bool bEnable) override;
};