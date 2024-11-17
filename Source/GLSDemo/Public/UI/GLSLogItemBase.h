// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Blueprint/UserWidget.h>
#include <CoreMinimal.h>
#include <UObject/ObjectPtr.h>

#include "Blueprint/IUserObjectListEntry.h"

#include "GLSLogInfoObject.h"
#include "GLSSubsystem.h"

#include "GLSLogItemBase.generated.h"

UCLASS(Abstract)
class GLSDEMO_API UGLSLogItemBase : public UUserWidget, public IUserObjectListEntry
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = GLS)
    const FGLSLogInfo& GetLogInfo() const
    {
        static const FGLSLogInfo Default{};
        return IsValid(LogModelPtr) ? LogModelPtr->GetLogInfo() : Default;
    }

    void SetLogSettings(const TSharedPtr<struct FGLSLogSettings>& LogSettingsPtr);

    void SetHighlightText(const TSharedPtr<FText>& InHighlightText);

protected:
    UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = GLS)
    TObjectPtr<class UGLSMultiLineEditableText> EditableTextLog = nullptr;

    UPROPERTY(BlueprintReadOnly, Category = GLS, Transient)
    TObjectPtr<UGLSLogInfoObject> LogModelPtr;

    TSharedPtr<struct FGLSLogSettings> LogSettingsPtr;

    TSharedPtr<FText> HighlightTextPtr;

    UFUNCTION(BlueprintImplementableEvent, Category = GLS)
    void InitializeLogItem();

    void SetupHighlightText();

    void SetupText();

    // IUserObjectListEntry
    virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;
    // IUserObjectListEntry

    void NativePreConstruct() override;

    void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
};
