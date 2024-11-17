// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Components/MultiLineEditableText.h>
#include <CoreMinimal.h>

#include "GLSMultiLineEditableText.generated.h"

UCLASS()
class GLSDEMO_API UGLSMultiLineEditableText : public UMultiLineEditableText
{
    GENERATED_BODY()

public:
    void SetHighlightText(const FText& InSearchText);

    FString GetSearchText() const;
};