// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../UI/GLSTagsWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSTagsWidgetBase() {}
// Cross Module References
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoriesWidgetBase();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSTagsWidgetBase();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSTagsWidgetBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	void UGLSTagsWidgetBase::StaticRegisterNativesUGLSTagsWidgetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSTagsWidgetBase);
	UClass* Z_Construct_UClass_UGLSTagsWidgetBase_NoRegister()
	{
		return UGLSTagsWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UGLSTagsWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSTagsWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSTagsWidgetBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSTagsWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSTagsWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSTagsWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSTagsWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSTagsWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSTagsWidgetBase_Statics::ClassParams = {
		&UGLSTagsWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSTagsWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSTagsWidgetBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGLSTagsWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UGLSTagsWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSTagsWidgetBase.OuterSingleton, Z_Construct_UClass_UGLSTagsWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSTagsWidgetBase.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSTagsWidgetBase>()
	{
		return UGLSTagsWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSTagsWidgetBase);
	UGLSTagsWidgetBase::~UGLSTagsWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSTagsWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSTagsWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSTagsWidgetBase, UGLSTagsWidgetBase::StaticClass, TEXT("UGLSTagsWidgetBase"), &Z_Registration_Info_UClass_UGLSTagsWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSTagsWidgetBase), 2377839120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSTagsWidgetBase_h_1795493882(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSTagsWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSTagsWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
