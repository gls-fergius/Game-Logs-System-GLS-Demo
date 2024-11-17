// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/UI/GLSWidgetCetegoryToolsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSWidgetCetegoryToolsBase() {}

// Begin Cross Module References
GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSWidgetCetegoryToolsBase();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSWidgetCetegoryToolsBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Class UGLSWidgetCetegoryToolsBase
void UGLSWidgetCetegoryToolsBase::StaticRegisterNativesUGLSWidgetCetegoryToolsBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSWidgetCetegoryToolsBase);
UClass* Z_Construct_UClass_UGLSWidgetCetegoryToolsBase_NoRegister()
{
	return UGLSWidgetCetegoryToolsBase::StaticClass();
}
struct Z_Construct_UClass_UGLSWidgetCetegoryToolsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSWidgetCetegoryToolsBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetCetegoryToolsBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSWidgetCetegoryToolsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLSWidgetCetegoryToolsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetCetegoryToolsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGLSWidgetCetegoryToolsBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UGLSWidgetCetegoryToolsBase, IGLSSaveSystemInterface), false },  // 3394433589
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSWidgetCetegoryToolsBase_Statics::ClassParams = {
	&UGLSWidgetCetegoryToolsBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetCetegoryToolsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSWidgetCetegoryToolsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSWidgetCetegoryToolsBase()
{
	if (!Z_Registration_Info_UClass_UGLSWidgetCetegoryToolsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSWidgetCetegoryToolsBase.OuterSingleton, Z_Construct_UClass_UGLSWidgetCetegoryToolsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSWidgetCetegoryToolsBase.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSWidgetCetegoryToolsBase>()
{
	return UGLSWidgetCetegoryToolsBase::StaticClass();
}
UGLSWidgetCetegoryToolsBase::UGLSWidgetCetegoryToolsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSWidgetCetegoryToolsBase);
UGLSWidgetCetegoryToolsBase::~UGLSWidgetCetegoryToolsBase() {}
// End Class UGLSWidgetCetegoryToolsBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetCetegoryToolsBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSWidgetCetegoryToolsBase, UGLSWidgetCetegoryToolsBase::StaticClass, TEXT("UGLSWidgetCetegoryToolsBase"), &Z_Registration_Info_UClass_UGLSWidgetCetegoryToolsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSWidgetCetegoryToolsBase), 4006640590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetCetegoryToolsBase_h_2077253606(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetCetegoryToolsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetCetegoryToolsBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
