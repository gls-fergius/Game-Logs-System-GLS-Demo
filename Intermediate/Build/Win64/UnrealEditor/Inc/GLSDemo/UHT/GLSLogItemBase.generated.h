// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GLSLogItemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGLSLogInfo;
#ifdef GLSDEMO_GLSLogItemBase_generated_h
#error "GLSLogItemBase.generated.h already included, missing '#pragma once' in GLSLogItemBase.h"
#endif
#define GLSDEMO_GLSLogItemBase_generated_h

#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLogInfo);


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_19_CALLBACK_WRAPPERS
#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLSLogItemBase(); \
	friend struct Z_Construct_UClass_UGLSLogItemBase_Statics; \
public: \
	DECLARE_CLASS(UGLSLogItemBase, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GLSDemo"), NO_API) \
	DECLARE_SERIALIZER(UGLSLogItemBase) \
	virtual UObject* _getUObject() const override { return const_cast<UGLSLogItemBase*>(this); }


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLSLogItemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLSLogItemBase(UGLSLogItemBase&&); \
	UGLSLogItemBase(const UGLSLogItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLSLogItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLSLogItemBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLSLogItemBase) \
	NO_API virtual ~UGLSLogItemBase();


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_16_PROLOG
#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_19_CALLBACK_WRAPPERS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLSDEMO_API UClass* StaticClass<class UGLSLogItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
