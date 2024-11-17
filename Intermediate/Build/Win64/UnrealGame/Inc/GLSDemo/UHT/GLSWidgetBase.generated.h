// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GLSWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UUserWidget;
enum class EGLSLogType : uint8;
#ifdef GLSDEMO_GLSWidgetBase_generated_h
#error "GLSWidgetBase.generated.h already included, missing '#pragma once' in GLSWidgetBase.h"
#endif
#define GLSDEMO_GLSWidgetBase_generated_h

#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_29_DELEGATE \
static void FFiltersRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& FiltersRemovedDelegate);


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGeneratedEntryWidget); \
	DECLARE_FUNCTION(execOnLogModelsCleared); \
	DECLARE_FUNCTION(execProcessFilters); \
	DECLARE_FUNCTION(execApplyFiltersByObjectNames); \
	DECLARE_FUNCTION(execApplyFilterByObjectName); \
	DECLARE_FUNCTION(execApplyFilterByText); \
	DECLARE_FUNCTION(execApplyFilterByTags); \
	DECLARE_FUNCTION(execApplyFilterByTag); \
	DECLARE_FUNCTION(execApplyFilterByCategories); \
	DECLARE_FUNCTION(execApplyFilterByCategory); \
	DECLARE_FUNCTION(execApplyFilterByLogTypes); \
	DECLARE_FUNCTION(execApplyFilterByLogType); \
	DECLARE_FUNCTION(execApplyFilterByClassNames); \
	DECLARE_FUNCTION(execApplyFilterByClassName); \
	DECLARE_FUNCTION(execMarkNeedRecreateLogFilters); \
	DECLARE_FUNCTION(execGetLogsCount); \
	DECLARE_FUNCTION(execGetActiveFiltersStr); \
	DECLARE_FUNCTION(execSetAutoSaveLayoutEnabled); \
	DECLARE_FUNCTION(execIsAutoSaveLayoutEnabled); \
	DECLARE_FUNCTION(execSetHighlightText); \
	DECLARE_FUNCTION(execIsReceivingLogs); \
	DECLARE_FUNCTION(execSetReceivingLogs); \
	DECLARE_FUNCTION(execIsFollowingLogs); \
	DECLARE_FUNCTION(execSetFollowLogs); \
	DECLARE_FUNCTION(execIsLogsWithClassNames); \
	DECLARE_FUNCTION(execSetLogsWithClassNames); \
	DECLARE_FUNCTION(execIsLogsWithObjectNames); \
	DECLARE_FUNCTION(execSetLogsWithObjectNames); \
	DECLARE_FUNCTION(execIsLogsWithTags); \
	DECLARE_FUNCTION(execSetLogsWithTags); \
	DECLARE_FUNCTION(execIsLogsWithVerbosity); \
	DECLARE_FUNCTION(execSetLogsWithVerbosity); \
	DECLARE_FUNCTION(execIsLogsWithCategory); \
	DECLARE_FUNCTION(execSetLogsWithCategory); \
	DECLARE_FUNCTION(execIsLogsWithFrame); \
	DECLARE_FUNCTION(execSetLogsWithFrame); \
	DECLARE_FUNCTION(execIsLogsWithTime); \
	DECLARE_FUNCTION(execSetLogsWithTime); \
	DECLARE_FUNCTION(execIsLogsDuplicates); \
	DECLARE_FUNCTION(execSetLogsDuplicates); \
	DECLARE_FUNCTION(execOpenLogs); \
	DECLARE_FUNCTION(execSaveGLSLogs); \
	DECLARE_FUNCTION(execSaveFilteredLogs); \
	DECLARE_FUNCTION(execSaveFullLogs); \
	DECLARE_FUNCTION(execCopyFull); \
	DECLARE_FUNCTION(execCopyFiltered); \
	DECLARE_FUNCTION(execClearFilters); \
	DECLARE_FUNCTION(execClearLogs);


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLSWidgetBase(); \
	friend struct Z_Construct_UClass_UGLSWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UGLSWidgetBase, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GLSDemo"), NO_API) \
	DECLARE_SERIALIZER(UGLSWidgetBase) \
	virtual UObject* _getUObject() const override { return const_cast<UGLSWidgetBase*>(this); }


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLSWidgetBase(UGLSWidgetBase&&); \
	UGLSWidgetBase(const UGLSWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLSWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLSWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLSWidgetBase) \
	NO_API virtual ~UGLSWidgetBase();


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_18_PROLOG
#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLSDEMO_API UClass* StaticClass<class UGLSWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
