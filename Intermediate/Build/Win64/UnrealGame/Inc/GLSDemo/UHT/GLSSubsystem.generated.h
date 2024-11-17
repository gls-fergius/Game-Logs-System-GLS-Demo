// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/GLSSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGLSSubsystem;
class UObject;
enum class EGLSLogType : uint8;
struct FLinearColor;
#ifdef GLSDEMO_GLSSubsystem_generated_h
#error "GLSSubsystem.generated.h already included, missing '#pragma once' in GLSSubsystem.h"
#endif
#define GLSDEMO_GLSSubsystem_generated_h

#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_62_DELEGATE \
static void FOnPIEBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPIEBeginDelegate);


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearAllLogsData); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execPrintStringToGLSWithTags); \
	DECLARE_FUNCTION(execPrintStringToGLS);


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLSSubsystem(); \
	friend struct Z_Construct_UClass_UGLSSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGLSSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GLSDemo"), NO_API) \
	DECLARE_SERIALIZER(UGLSSubsystem)


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLSSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLSSubsystem(UGLSSubsystem&&); \
	UGLSSubsystem(const UGLSSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLSSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLSSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGLSSubsystem) \
	NO_API virtual ~UGLSSubsystem();


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_17_PROLOG
#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLSDEMO_API UClass* StaticClass<class UGLSSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
