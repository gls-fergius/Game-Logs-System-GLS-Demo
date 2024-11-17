// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GLSCustomCategoriesWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGLSCustomCategoryModel;
enum class EGLSCustomCetegoryEditableModeType : uint8;
enum class EGLSCustomCetegorySortType : uint8;
#ifdef GLSDEMO_GLSCustomCategoriesWidgetBase_generated_h
#error "GLSCustomCategoriesWidgetBase.generated.h already included, missing '#pragma once' in GLSCustomCategoriesWidgetBase.h"
#endif
#define GLSDEMO_GLSCustomCategoriesWidgetBase_generated_h

#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOnFiltersCleared); \
	DECLARE_FUNCTION(execDisableCategories); \
	DECLARE_FUNCTION(execClearCategories); \
	DECLARE_FUNCTION(execGetNumEnabledCategories); \
	DECLARE_FUNCTION(execInitializeCategories); \
	DECLARE_FUNCTION(execGetCategorySortType); \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execSelectOrDeselectAllCategories); \
	DECLARE_FUNCTION(execSetCetegoriesSortType); \
	DECLARE_FUNCTION(execGetActiveEditableMode); \
	DECLARE_FUNCTION(execSetActiveEditableMode); \
	DECLARE_FUNCTION(execEnableCategoryTextOnLogs); \
	DECLARE_FUNCTION(execContainsCategory); \
	DECLARE_FUNCTION(execAddCategoryItem); \
	DECLARE_FUNCTION(execCetGategoryModels);


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLSCustomCategoriesWidgetBase(); \
	friend struct Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UGLSCustomCategoriesWidgetBase, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GLSDemo"), NO_API) \
	DECLARE_SERIALIZER(UGLSCustomCategoriesWidgetBase) \
	virtual UObject* _getUObject() const override { return const_cast<UGLSCustomCategoriesWidgetBase*>(this); }


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLSCustomCategoriesWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLSCustomCategoriesWidgetBase(UGLSCustomCategoriesWidgetBase&&); \
	UGLSCustomCategoriesWidgetBase(const UGLSCustomCategoriesWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLSCustomCategoriesWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLSCustomCategoriesWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLSCustomCategoriesWidgetBase) \
	NO_API virtual ~UGLSCustomCategoriesWidgetBase();


#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_15_PROLOG
#define FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLSDEMO_API UClass* StaticClass<class UGLSCustomCategoriesWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
