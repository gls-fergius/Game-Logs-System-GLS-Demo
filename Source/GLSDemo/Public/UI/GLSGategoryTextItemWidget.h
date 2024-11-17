// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Blueprint/IUserObjectListEntry.h>
#include <Blueprint/UserWidget.h>
#include <UObject/ObjectPtr.h>

#include "GLSTypes.h"

#include "GLSGategoryTextItemWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCategoryButtonClickDelegate, UGLSGategoryTextItemWidget*, Button);

UCLASS(Abstract)
class GLSDEMO_API UGLSGategoryTextItemWidget : public UUserWidget, public IUserObjectListEntry
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = GLS)
    TObjectPtr<class UTextBlock> CategoryNameText = nullptr;

    TObjectPtr<class UGLSCustomCategoryModel> GetModelObject() const { return ModelObject; }

    UFUNCTION(BlueprintCallable, Category = GLS)
    FName GetCategoryName() const;

    UFUNCTION(BlueprintCallable, Category = GLS)
    bool GetGategoryButtonEnabled() const;

protected:
    UPROPERTY(transient, BlueprintReadOnly, Category = GLS)
    TObjectPtr<class UGLSCustomCategoryModel> ModelObject = nullptr;

protected:
    // IUserObjectListEntry
    virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

    virtual void NativeOnEntryReleased() override;
    // IUserObjectListEntry
};