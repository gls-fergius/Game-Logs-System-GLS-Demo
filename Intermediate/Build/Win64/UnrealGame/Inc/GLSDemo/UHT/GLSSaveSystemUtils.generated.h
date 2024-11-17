// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/GLSSaveSystemUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UWidget;
#ifdef GLSDEMO_GLSSaveSystemUtils_generated_h
#error "GLSSaveSystemUtils.generated.h already included, missing '#pragma once' in GLSSaveSystemUtils.h"
#endif
#define GLSDEMO_GLSSaveSystemUtils_generated_h

#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSelectedTabByName); \
	DECLARE_FUNCTION(execGetSelectedTabName); \
	DECLARE_FUNCTION(execGetTabNamesFromSave); \
	DECLARE_FUNCTION(execGetEnableSaveDataByTabName); \
	DECLARE_FUNCTION(execEnableSaveDataByTabName); \
	DECLARE_FUNCTION(execCleanSaveDataByTabName); \
	DECLARE_FUNCTION(execRemoveSaveDataByTabName); \
	DECLARE_FUNCTION(execRequestSaveDataRecursive); \
	DECLARE_FUNCTION(execSetParentTabNameRecursive); \
	DECLARE_FUNCTION(execGetSaveValueAsBoolean); \
	DECLARE_FUNCTION(execGetSaveValueAsInteger); \
	DECLARE_FUNCTION(execGetSaveValueAsString); \
	DECLARE_FUNCTION(execMakeSaveParamName);


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLSSaveSystemUtils(); \
	friend struct Z_Construct_UClass_UGLSSaveSystemUtils_Statics; \
public: \
	DECLARE_CLASS(UGLSSaveSystemUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GLSDemo"), NO_API) \
	DECLARE_SERIALIZER(UGLSSaveSystemUtils)


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLSSaveSystemUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLSSaveSystemUtils(UGLSSaveSystemUtils&&); \
	UGLSSaveSystemUtils(const UGLSSaveSystemUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLSSaveSystemUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLSSaveSystemUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLSSaveSystemUtils) \
	NO_API virtual ~UGLSSaveSystemUtils();


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_11_PROLOG
#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_14_INCLASS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLSDEMO_API UClass* StaticClass<class UGLSSaveSystemUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
