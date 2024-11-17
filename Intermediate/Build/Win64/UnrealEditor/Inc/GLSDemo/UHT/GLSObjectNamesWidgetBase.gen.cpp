// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/UI/GLSObjectNamesWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSObjectNamesWidgetBase() {}

// Begin Cross Module References
GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoriesWidgetBase();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSObjectNamesWidgetBase();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSObjectNamesWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Class UGLSObjectNamesWidgetBase
void UGLSObjectNamesWidgetBase::StaticRegisterNativesUGLSObjectNamesWidgetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSObjectNamesWidgetBase);
UClass* Z_Construct_UClass_UGLSObjectNamesWidgetBase_NoRegister()
{
	return UGLSObjectNamesWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UGLSObjectNamesWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSObjectNamesWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSObjectNamesWidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSObjectNamesWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLSObjectNamesWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSObjectNamesWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSObjectNamesWidgetBase_Statics::ClassParams = {
	&UGLSObjectNamesWidgetBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSObjectNamesWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSObjectNamesWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSObjectNamesWidgetBase()
{
	if (!Z_Registration_Info_UClass_UGLSObjectNamesWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSObjectNamesWidgetBase.OuterSingleton, Z_Construct_UClass_UGLSObjectNamesWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSObjectNamesWidgetBase.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSObjectNamesWidgetBase>()
{
	return UGLSObjectNamesWidgetBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSObjectNamesWidgetBase);
UGLSObjectNamesWidgetBase::~UGLSObjectNamesWidgetBase() {}
// End Class UGLSObjectNamesWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSObjectNamesWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSObjectNamesWidgetBase, UGLSObjectNamesWidgetBase::StaticClass, TEXT("UGLSObjectNamesWidgetBase"), &Z_Registration_Info_UClass_UGLSObjectNamesWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSObjectNamesWidgetBase), 2037383617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSObjectNamesWidgetBase_h_4005076254(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSObjectNamesWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSObjectNamesWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
