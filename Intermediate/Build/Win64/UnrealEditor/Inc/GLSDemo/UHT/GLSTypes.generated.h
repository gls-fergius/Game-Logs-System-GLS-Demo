// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/GLSTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGLSLogType : uint8;
#ifdef GLSDEMO_GLSTypes_generated_h
#error "GLSTypes.generated.h already included, missing '#pragma once' in GLSTypes.h"
#endif
#define GLSDEMO_GLSTypes_generated_h

#define FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GLSDEMO_API UScriptStruct* StaticStruct<struct FGLSCategoryWithVerbosities>();

#define FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGLSLogInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GLSDEMO_API UScriptStruct* StaticStruct<struct FGLSLogInfo>();

#define FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GLSDEMO_API UScriptStruct* StaticStruct<struct FGLSJsonLogInfo>();

#define FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFilteredLog_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GLSDEMO_API UScriptStruct* StaticStruct<struct FFilteredLog>();

#define FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGLSFilterLog_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GLSDEMO_API UScriptStruct* StaticStruct<struct FGLSFilterLog>();

#define FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_282_DELEGATE \
GLSDEMO_API void FOnLogCategoryReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLogCategoryReceivedDelegate, FName const& Category);


#define FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_284_DELEGATE \
GLSDEMO_API void FOnLogClassNameReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLogClassNameReceivedDelegate, FName const& ClassName);


#define FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_286_DELEGATE \
GLSDEMO_API void FOnLogObjectNameReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLogObjectNameReceivedDelegate, FName const& ObjectName);


#define FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_288_DELEGATE \
GLSDEMO_API void FOnLogTagsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLogTagsReceivedDelegate, TArray<FName> const& Tags);


#define FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_290_DELEGATE \
GLSDEMO_API void FOnLogVerboseReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLogVerboseReceivedDelegate, const EGLSLogType Verbose);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h


#define FOREACH_ENUM_EGLSINPUTMODEOVERLAY(op) \
	op(EGLSInputModeOverlay::None) \
	op(EGLSInputModeOverlay::GameOnly) \
	op(EGLSInputModeOverlay::UIOnly) \
	op(EGLSInputModeOverlay::GameAndUI) 

enum class EGLSInputModeOverlay : uint8;
template<> struct TIsUEnumClass<EGLSInputModeOverlay> { enum { Value = true }; };
template<> GLSDEMO_API UEnum* StaticEnum<EGLSInputModeOverlay>();

#define FOREACH_ENUM_EGLSTAGSDEFAULTTYPES(op) \
	op(EGLSTagsDefaultTypes::None) \
	op(EGLSTagsDefaultTypes::Pie) \
	op(EGLSTagsDefaultTypes::Role) \
	op(EGLSTagsDefaultTypes::Function) \
	op(EGLSTagsDefaultTypes::PlayerName) 

enum class EGLSTagsDefaultTypes : uint8;
template<> struct TIsUEnumClass<EGLSTagsDefaultTypes> { enum { Value = true }; };
template<> GLSDEMO_API UEnum* StaticEnum<EGLSTagsDefaultTypes>();

#define FOREACH_ENUM_EGLSCUSTOMCATEGORIESTYPES(op) \
	op(EGLSCustomCategoriesTypes::None) \
	op(EGLSCustomCategoriesTypes::Categories) \
	op(EGLSCustomCategoriesTypes::Classes) \
	op(EGLSCustomCategoriesTypes::Objects) \
	op(EGLSCustomCategoriesTypes::Tags) 

enum class EGLSCustomCategoriesTypes : uint8;
template<> struct TIsUEnumClass<EGLSCustomCategoriesTypes> { enum { Value = true }; };
template<> GLSDEMO_API UEnum* StaticEnum<EGLSCustomCategoriesTypes>();

#define FOREACH_ENUM_EGLSLOGTYPE(op) \
	op(EGLSLogType::Display) \
	op(EGLSLogType::Log) \
	op(EGLSLogType::Warning) \
	op(EGLSLogType::Error) \
	op(EGLSLogType::Verbose) \
	op(EGLSLogType::VeryVerbose) \
	op(EGLSLogType::Fatal) \
	op(EGLSLogType::NoLogging) 

enum class EGLSLogType : uint8;
template<> struct TIsUEnumClass<EGLSLogType> { enum { Value = true }; };
template<> GLSDEMO_API UEnum* StaticEnum<EGLSLogType>();

#define FOREACH_ENUM_EGLSCUSTOMCETEGORYSORTTYPE(op) \
	op(EGLSCustomCetegorySortType::Newest) \
	op(EGLSCustomCetegorySortType::Oldest) \
	op(EGLSCustomCetegorySortType::AZ) 

enum class EGLSCustomCetegorySortType : uint8;
template<> struct TIsUEnumClass<EGLSCustomCetegorySortType> { enum { Value = true }; };
template<> GLSDEMO_API UEnum* StaticEnum<EGLSCustomCetegorySortType>();

#define FOREACH_ENUM_EGLSCUSTOMCETEGORYEDITABLEMODETYPE(op) \
	op(EGLSCustomCetegoryEditableModeType::None) \
	op(EGLSCustomCetegoryEditableModeType::Favorite) \
	op(EGLSCustomCetegoryEditableModeType::Hidden) 

enum class EGLSCustomCetegoryEditableModeType : uint8;
template<> struct TIsUEnumClass<EGLSCustomCetegoryEditableModeType> { enum { Value = true }; };
template<> GLSDEMO_API UEnum* StaticEnum<EGLSCustomCetegoryEditableModeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
