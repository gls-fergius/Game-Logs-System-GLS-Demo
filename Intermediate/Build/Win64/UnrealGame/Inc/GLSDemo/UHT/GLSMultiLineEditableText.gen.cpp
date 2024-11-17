// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/UI/GLSMultiLineEditableText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSMultiLineEditableText() {}

// Begin Cross Module References
GLSDEMO_API UClass* Z_Construct_UClass_UGLSMultiLineEditableText();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSMultiLineEditableText_NoRegister();
UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Class UGLSMultiLineEditableText
void UGLSMultiLineEditableText::StaticRegisterNativesUGLSMultiLineEditableText()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSMultiLineEditableText);
UClass* Z_Construct_UClass_UGLSMultiLineEditableText_NoRegister()
{
	return UGLSMultiLineEditableText::StaticClass();
}
struct Z_Construct_UClass_UGLSMultiLineEditableText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSMultiLineEditableText.h" },
		{ "ModuleRelativePath", "Public/UI/GLSMultiLineEditableText.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSMultiLineEditableText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLSMultiLineEditableText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiLineEditableText,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSMultiLineEditableText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSMultiLineEditableText_Statics::ClassParams = {
	&UGLSMultiLineEditableText::StaticClass,
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
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSMultiLineEditableText_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSMultiLineEditableText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSMultiLineEditableText()
{
	if (!Z_Registration_Info_UClass_UGLSMultiLineEditableText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSMultiLineEditableText.OuterSingleton, Z_Construct_UClass_UGLSMultiLineEditableText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSMultiLineEditableText.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSMultiLineEditableText>()
{
	return UGLSMultiLineEditableText::StaticClass();
}
UGLSMultiLineEditableText::UGLSMultiLineEditableText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSMultiLineEditableText);
UGLSMultiLineEditableText::~UGLSMultiLineEditableText() {}
// End Class UGLSMultiLineEditableText

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSMultiLineEditableText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSMultiLineEditableText, UGLSMultiLineEditableText::StaticClass, TEXT("UGLSMultiLineEditableText"), &Z_Registration_Info_UClass_UGLSMultiLineEditableText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSMultiLineEditableText), 3213380879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSMultiLineEditableText_h_103361322(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSMultiLineEditableText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSMultiLineEditableText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
