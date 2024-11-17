// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <Engine/Engine.h>

#include "GLSOutputDevice.h"
#include "GLSSettings.h"
#include "GLSTypes.h"
#include "GLSUtils.h"

#if defined(GLS_ENABLED) && GLS_ENABLED

/*
 * Print log message and tags array of string to console output, GLS log
 * Example: GLS_LOG_STRING_WITH_TAGS(WorldContext, LogTemp, Display, TEXT("My text"), TArray<FString>({TEXT("my-tag-1"), TEXT("my-tag-2")}));
 */
#define GLS_LOG_STRING_WITH_TAGS(_Context, _Category, _Verbosity, _String, _LogTags)                                                \
    {                                                                                                                               \
        const FString _gls_String = _String;                                                                                        \
        const auto* _gls_Settings = UGLSSettings::Get();                                                                            \
        if (FGLSUtils::IsGLSEnabled() && _gls_Settings)                                                                             \
        {                                                                                                                           \
            static const FString _gls_Category(#_Category);                                                                         \
            static const FString _gls_FunctionName(__FUNCTION__);                                                                   \
            TArray<FString> _gls_LogTags = _LogTags;                                                                                \
            if (_gls_Settings->DefaultLoggingTagTypes & (uint8)EGLSTagsDefaultTypes::Function && !_gls_FunctionName.IsEmpty())             \
                _gls_LogTags.Add(FString::Format(TEXT("{0}"), {_gls_FunctionName}));                                                \
            FGLSOutputDevice::SerializeForGLS(_Context, _gls_LogTags, _gls_String, ELogVerbosity::Type::_Verbosity, _gls_Category); \
        }                                                                                                                           \
        UE_LOG(_Category, _Verbosity, TEXT("%s"), *_gls_String);                                                                    \
    }

/*
 * Print log message and tags array of string to console output and GLS
 * Example: GLS_LOG_WITH_TAGS(WorldContext, LogTemp, Display, TArray<FString>({TEXT("my-tag-1"), TEXT("my-tag-2")}), TEXT("My test log message with param %d"), 12345);
 */
#define GLS_LOG_WITH_TAGS(_Context, _Category, _Verbosity, _LogTags, _Format, ...)              \
    {                                                                                           \
        const FString _gls_FormatString = FString::Printf(_Format, ##__VA_ARGS__);              \
        GLS_LOG_STRING_WITH_TAGS(_Context, _Category, _Verbosity, _gls_FormatString, _LogTags); \
    }

/*
 * Print log message to console output and GLS
 */
#define GLS_LOG(_Context, _Category, _Verbosity, _Format, ...)                                         \
    {                                                                                                  \
        GLS_LOG_WITH_TAGS(_Context, _Category, _Verbosity, TArray<FString>{}, _Format, ##__VA_ARGS__); \
    }

/*
 * Print log message as string to console output, GLS log subsystem and overlay widget
 */
#define GLS_LOG_STRING(_Context, _Category, _Verbosity, _String)        \
    {                                                                   \
        GLS_LOG(_Context, _Category, _Verbosity, TEXT("%s"), *_String); \
    }

#else
#define GLS_LOG_STRING_WITH_TAGS(_Context, _Category, _Verbosity, _String, _LogTags) UE_LOG(_Category, _Verbosity, TEXT("%s"), *_String);
#define GLS_LOG_WITH_TAGS(_Context, _Category, _Verbosity, _LogTags, _Format, ...) UE_LOG(_Category, _Verbosity, _Format, ##__VA_ARGS__);
#define GLS_LOG(_Context, _Category, _Verbosity, _Format, ...) UE_LOG(_Category, _Verbosity, _Format, ##__VA_ARGS__);
#define GLS_LOG_STRING(_Context, _Category, _Verbosity, _String) UE_LOG(_Category, _Verbosity, TEXT("%s"), *_String);
#endif