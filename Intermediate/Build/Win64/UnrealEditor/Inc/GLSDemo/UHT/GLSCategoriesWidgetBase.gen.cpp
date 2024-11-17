// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../UI/GLSCategoriesWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSCategoriesWidgetBase() {}
// Cross Module References
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSCategoriesWidgetBase();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSCategoriesWidgetBase_NoRegister();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoriesWidgetBase();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	void UGLSCategoriesWidgetBase::StaticRegisterNativesUGLSCategoriesWidgetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSCategoriesWidgetBase);
	UClass* Z_Construct_UClass_UGLSCategoriesWidgetBase_NoRegister()
	{
		return UGLSCategoriesWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UGLSCategoriesWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSCategoriesWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSCategoriesWidgetBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSCategoriesWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSCategoriesWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSCategoriesWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSCategoriesWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSCategoriesWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSCategoriesWidgetBase_Statics::ClassParams = {
		&UGLSCategoriesWidgetBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSCategoriesWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSCategoriesWidgetBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGLSCategoriesWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UGLSCategoriesWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSCategoriesWidgetBase.OuterSingleton, Z_Construct_UClass_UGLSCategoriesWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSCategoriesWidgetBase.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSCategoriesWidgetBase>()
	{
		return UGLSCategoriesWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSCategoriesWidgetBase);
	UGLSCategoriesWidgetBase::~UGLSCategoriesWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCategoriesWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCategoriesWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSCategoriesWidgetBase, UGLSCategoriesWidgetBase::StaticClass, TEXT("UGLSCategoriesWidgetBase"), &Z_Registration_Info_UClass_UGLSCategoriesWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSCategoriesWidgetBase), 597529503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCategoriesWidgetBase_h_1836181868(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCategoriesWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCategoriesWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
