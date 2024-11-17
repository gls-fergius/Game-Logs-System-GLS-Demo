// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/UI/GLSTagsWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSTagsWidgetBase() {}

// Begin Cross Module References
GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoriesWidgetBase();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSTagsWidgetBase();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSTagsWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Class UGLSTagsWidgetBase
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSTagsWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSTagsWidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSTagsWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLSTagsWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSTagsWidgetBase_Statics::DependentSingletons) < 16);
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
// End Class UGLSTagsWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSTagsWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSTagsWidgetBase, UGLSTagsWidgetBase::StaticClass, TEXT("UGLSTagsWidgetBase"), &Z_Registration_Info_UClass_UGLSTagsWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSTagsWidgetBase), 1612670151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSTagsWidgetBase_h_1350314084(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSTagsWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSTagsWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
