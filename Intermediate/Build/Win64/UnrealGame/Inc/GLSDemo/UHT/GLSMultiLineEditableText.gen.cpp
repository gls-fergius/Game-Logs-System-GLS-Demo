// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../UI/GLSMultiLineEditableText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSMultiLineEditableText() {}
// Cross Module References
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSMultiLineEditableText();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSMultiLineEditableText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSMultiLineEditableText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiLineEditableText,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSMultiLineEditableText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSMultiLineEditableText.h" },
		{ "ModuleRelativePath", "Public/UI/GLSMultiLineEditableText.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSMultiLineEditableText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSMultiLineEditableText>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UGLSMultiLineEditableText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSMultiLineEditableText_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSMultiLineEditableText_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSMultiLineEditableText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSMultiLineEditableText, UGLSMultiLineEditableText::StaticClass, TEXT("UGLSMultiLineEditableText"), &Z_Registration_Info_UClass_UGLSMultiLineEditableText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSMultiLineEditableText), 539412750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSMultiLineEditableText_h_3133682965(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSMultiLineEditableText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSMultiLineEditableText_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
