// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>

#include "GLSUtils.h"

#include "GLSSaveSystemUtils.generated.h"

UCLASS()
class GLSDEMO_API UGLSSaveSystemUtils : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static FString MakeSaveParamName(UObject* Context, const FString& VariableName, const FString& ParamName);

    static void SaveParamsByTabName(UObject* Context, const FString& TabName, const TMap<FString, FString>& Params);

    UFUNCTION(BlueprintPure, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static bool GetSaveValueAsString(UObject* Context, const FString& ParamName, FString& OutValue);

    UFUNCTION(BlueprintPure, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static bool GetSaveValueAsInteger(UObject* Context, const FString& ParamName, int32& OutValue);

    UFUNCTION(BlueprintPure, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static bool GetSaveValueAsBoolean(UObject* Context, const FString& ParamName, bool& OutValue);

    static TMap<FString, FString> GetSaveValuesBySaveTag(UObject* Context, const TArray<FString>& SaveTags);

    UFUNCTION(BlueprintCallable, Category = GLS)
    static void SetParentTabNameRecursive(class UWidget* Widget, const FString& TabName);

    UFUNCTION(BlueprintCallable, Category = GLS)
    static void RequestSaveDataRecursive(class UWidget* Widget);

    static void GetSaveSystemInrerfacesRecursive(class UWidget* Widget, TArray<TWeakObjectPtr<UObject>>& OutInterfaceArray);

    UFUNCTION(BlueprintCallable, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static void RemoveSaveDataByTabName(UObject* Context, const FString& TabName);

    UFUNCTION(BlueprintCallable, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static void CleanSaveDataByTabName(UObject* Context, const FString& TabName);

    UFUNCTION(BlueprintCallable, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static void EnableSaveDataByTabName(UObject* Context, const FString& TabName, const bool bEnable, const bool bForceCleanParams);

    UFUNCTION(BlueprintCallable, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static bool GetEnableSaveDataByTabName(const UObject* Context, const FString& TabName);

    UFUNCTION(BlueprintPure, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static TArray<FString> GetTabNamesFromSave(UObject* Context);

    UFUNCTION(BlueprintPure, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static FString GetSelectedTabName(UObject* Context);

    UFUNCTION(BlueprintCallable, Category = GLS, meta = (HidePin = "Context", DefaultToSelf = "Context"))
    static void SetSelectedTabByName(UObject* Context, const FString& TabName, const bool bSelected);

public:
    static void SerializeStructToBinary(const UScriptStruct* StructType, void* StructPtr, TArray<uint8>& OutBytes);

    static void DeserializeStructFromBinary(const UScriptStruct* StructType, void* StructPtr, const TArray<uint8>& InBytes);
};