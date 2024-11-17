// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/GLSSaveSystemTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef GLSDEMO_GLSSaveSystemTypes_generated_h
#error "GLSSaveSystemTypes.generated.h already included, missing '#pragma once' in GLSSaveSystemTypes.h"
#endif
#define GLSDEMO_GLSSaveSystemTypes_generated_h

#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GLSDEMO_API UScriptStruct* StaticStruct<struct FGLSSaveTabParamsInfo>();

#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GLSDEMO_API UScriptStruct* StaticStruct<struct FGLSSaveTabContext>();

#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGLSSaveData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GLSDEMO_API UScriptStruct* StaticStruct<struct FGLSSaveData>();

#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_SPARSE_DATA
#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_RPC_WRAPPERS \
	virtual TMap<FString,FString> PrepareDataToSave_Implementation() { return TMap<FString,FString>(); }; \
	virtual void RequestApplySave_Implementation() {}; \
 \
	DECLARE_FUNCTION(execPrepareDataToSave); \
	DECLARE_FUNCTION(execRequestApplySave);


#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TMap<FString,FString> PrepareDataToSave_Implementation() { return TMap<FString,FString>(); }; \
	virtual void RequestApplySave_Implementation() {}; \
 \
	DECLARE_FUNCTION(execPrepareDataToSave); \
	DECLARE_FUNCTION(execRequestApplySave);


#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_ACCESSORS
#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_CALLBACK_WRAPPERS
#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GLSDEMO_API UGLSSaveSystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLSSaveSystemInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GLSDEMO_API, UGLSSaveSystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLSSaveSystemInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GLSDEMO_API UGLSSaveSystemInterface(UGLSSaveSystemInterface&&); \
	GLSDEMO_API UGLSSaveSystemInterface(const UGLSSaveSystemInterface&); \
public: \
	GLSDEMO_API virtual ~UGLSSaveSystemInterface();


#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GLSDEMO_API UGLSSaveSystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GLSDEMO_API UGLSSaveSystemInterface(UGLSSaveSystemInterface&&); \
	GLSDEMO_API UGLSSaveSystemInterface(const UGLSSaveSystemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GLSDEMO_API, UGLSSaveSystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLSSaveSystemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLSSaveSystemInterface) \
	GLSDEMO_API virtual ~UGLSSaveSystemInterface();


#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGLSSaveSystemInterface(); \
	friend struct Z_Construct_UClass_UGLSSaveSystemInterface_Statics; \
public: \
	DECLARE_CLASS(UGLSSaveSystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GLSDemo"), GLSDEMO_API) \
	DECLARE_SERIALIZER(UGLSSaveSystemInterface)


#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_GENERATED_UINTERFACE_BODY() \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_GENERATED_UINTERFACE_BODY() \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGLSSaveSystemInterface() {} \
public: \
	typedef UGLSSaveSystemInterface UClassType; \
	typedef IGLSSaveSystemInterface ThisClass; \
	static TMap<FString,FString> Execute_PrepareDataToSave(UObject* O); \
	static void Execute_RequestApplySave(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_INCLASS_IINTERFACE \
protected: \
	virtual ~IGLSSaveSystemInterface() {} \
public: \
	typedef UGLSSaveSystemInterface UClassType; \
	typedef IGLSSaveSystemInterface ThisClass; \
	static TMap<FString,FString> Execute_PrepareDataToSave(UObject* O); \
	static void Execute_RequestApplySave(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_78_PROLOG
#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_SPARSE_DATA \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_RPC_WRAPPERS \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_ACCESSORS \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_CALLBACK_WRAPPERS \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_SPARSE_DATA \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_ACCESSORS \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_CALLBACK_WRAPPERS \
	FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_81_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLSDEMO_API UClass* StaticClass<class UGLSSaveSystemInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
