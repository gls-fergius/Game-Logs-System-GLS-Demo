// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Components/ListView.h>

#include "GLSListView.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGeneratedEntryWidgetDelegate, UObject*, Model, UUserWidget*, Widget);

UCLASS()
class GLSDEMO_API UGLSListView : public UListView
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable, Category = GLS)
    FGeneratedEntryWidgetDelegate OnGeneratedEntryWidget;

    void AddLogItem(const class UGLSLogInfoObject* Model);

protected:
    UUserWidget& OnGenerateEntryWidgetInternal(UObject* Item, TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable) override;
};