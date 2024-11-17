// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/UI/GLSClassNamesWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSClassNamesWidgetBase() {}

// Begin Cross Module References
GLSDEMO_API UClass* Z_Construct_UClass_UGLSClassNamesWidgetBase();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSClassNamesWidgetBase_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoriesWidgetBase();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Class UGLSClassNamesWidgetBase
void UGLSClassNamesWidgetBase::StaticRegisterNativesUGLSClassNamesWidgetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSClassNamesWidgetBase);
UClass* Z_Construct_UClass_UGLSClassNamesWidgetBase_NoRegister()
{
	return UGLSClassNamesWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UGLSClassNamesWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSClassNamesWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSClassNamesWidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSClassNamesWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLSClassNamesWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSClassNamesWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSClassNamesWidgetBase_Statics::ClassParams = {
	&UGLSClassNamesWidgetBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSClassNamesWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSClassNamesWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSClassNamesWidgetBase()
{
	if (!Z_Registration_Info_UClass_UGLSClassNamesWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSClassNamesWidgetBase.OuterSingleton, Z_Construct_UClass_UGLSClassNamesWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSClassNamesWidgetBase.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSClassNamesWidgetBase>()
{
	return UGLSClassNamesWidgetBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSClassNamesWidgetBase);
UGLSClassNamesWidgetBase::~UGLSClassNamesWidgetBase() {}
// End Class UGLSClassNamesWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSClassNamesWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSClassNamesWidgetBase, UGLSClassNamesWidgetBase::StaticClass, TEXT("UGLSClassNamesWidgetBase"), &Z_Registration_Info_UClass_UGLSClassNamesWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSClassNamesWidgetBase), 3198323939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSClassNamesWidgetBase_h_750410322(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSClassNamesWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSClassNamesWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
