// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>

#include "GLSLogInfoObject.h"
#include "GLSTypes.h"
#include "GLSUtils.h"

//#include "GLSLogFilter.generated.h"

class FGLSLogFilter_ExpressionContext : public ITextFilterExpressionContext
{
public:
    explicit FGLSLogFilter_ExpressionContext(const UGLSLogInfoObject* InLogObject, const TSharedRef<FGLSLogSettings>& InLogSettingsRef)
        : LogObject(InLogObject)
        , LogSettingsRef(InLogSettingsRef)
    {
    }

    virtual bool TestBasicStringExpression(const FTextFilterString& InValue, const ETextFilterTextComparisonMode InTextComparisonMode) const override { return TextFilterUtils::TestBasicStringExpression(FGLSUtils::GetFormattedStringByLogDataAndSettings(LogObject->GetLogInfoRef(), LogSettingsRef, LogObject->DiplicateCount), InValue, InTextComparisonMode); }

    virtual bool TestComplexExpression(const FName& InKey, const FTextFilterString& InValue, const ETextFilterComparisonOperation InComparisonOperation, const ETextFilterTextComparisonMode InTextComparisonMode) const override { return false; }

private:
    const UGLSLogInfoObject* LogObject;
    const TSharedRef<FGLSLogSettings> LogSettingsRef;
};