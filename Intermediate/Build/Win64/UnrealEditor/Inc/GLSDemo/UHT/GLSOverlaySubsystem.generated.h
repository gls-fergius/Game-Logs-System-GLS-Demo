// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/GLSOverlaySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGLSOverlaySubsystem;
class UObject;
#ifdef GLSDEMO_GLSOverlaySubsystem_generated_h
#error "GLSOverlaySubsystem.generated.h already included, missing '#pragma once' in GLSOverlaySubsystem.h"
#endif
#define GLSDEMO_GLSOverlaySubsystem_generated_h

#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHideOverlay); \
	DECLARE_FUNCTION(execDisplayOverlay); \
	DECLARE_FUNCTION(execGet);


#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLSOverlaySubsystem(); \
	friend struct Z_Construct_UClass_UGLSOverlaySubsystem_Statics; \
public: \
	DECLARE_CLASS(UGLSOverlaySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GLSDemo"), NO_API) \
	DECLARE_SERIALIZER(UGLSOverlaySubsystem)


#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLSOverlaySubsystem(UGLSOverlaySubsystem&&); \
	UGLSOverlaySubsystem(const UGLSOverlaySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLSOverlaySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLSOverlaySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGLSOverlaySubsystem) \
	NO_API virtual ~UGLSOverlaySubsystem();


#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_13_PROLOG
#define FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLSDEMO_API UClass* StaticClass<class UGLSOverlaySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
