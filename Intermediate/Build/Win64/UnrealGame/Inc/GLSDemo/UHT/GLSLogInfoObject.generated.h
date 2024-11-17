// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Models/GLSLogInfoObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGLSLogInfoObject;
struct FGLSLogInfo;
#ifdef GLSDEMO_GLSLogInfoObject_generated_h
#error "GLSLogInfoObject.generated.h already included, missing '#pragma once' in GLSLogInfoObject.h"
#endif
#define GLSDEMO_GLSLogInfoObject_generated_h

#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_21_DELEGATE \
static void FOnLogSelected_DelegateWrapper(const FMulticastScriptDelegate& OnLogSelected, UGLSLogInfoObject* Model, bool bSelected);


#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLogInfo); \
	DECLARE_FUNCTION(execLogSelected);


#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLSLogInfoObject(); \
	friend struct Z_Construct_UClass_UGLSLogInfoObject_Statics; \
public: \
	DECLARE_CLASS(UGLSLogInfoObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GLSDemo"), NO_API) \
	DECLARE_SERIALIZER(UGLSLogInfoObject)


#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLSLogInfoObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLSLogInfoObject(UGLSLogInfoObject&&); \
	UGLSLogInfoObject(const UGLSLogInfoObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLSLogInfoObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLSLogInfoObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLSLogInfoObject) \
	NO_API virtual ~UGLSLogInfoObject();


#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_15_PROLOG
#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_18_INCLASS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLSDEMO_API UClass* StaticClass<class UGLSLogInfoObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
