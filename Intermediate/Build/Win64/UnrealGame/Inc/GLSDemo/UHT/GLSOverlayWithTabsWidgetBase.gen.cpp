// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../UI/GLSOverlayWithTabsWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSOverlayWithTabsWidgetBase() {}
// Cross Module References
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	DEFINE_FUNCTION(UGLSOverlayWithTabsWidgetBase::execResetInputMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInputMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSOverlayWithTabsWidgetBase::execResetNavigationRule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetNavigationRule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSOverlayWithTabsWidgetBase::execInitInputMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitInputMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSOverlayWithTabsWidgetBase::execInitNavigationRule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitNavigationRule();
		P_NATIVE_END;
	}
	void UGLSOverlayWithTabsWidgetBase::StaticRegisterNativesUGLSOverlayWithTabsWidgetBase()
	{
		UClass* Class = UGLSOverlayWithTabsWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitInputMode", &UGLSOverlayWithTabsWidgetBase::execInitInputMode },
			{ "InitNavigationRule", &UGLSOverlayWithTabsWidgetBase::execInitNavigationRule },
			{ "ResetInputMode", &UGLSOverlayWithTabsWidgetBase::execResetInputMode },
			{ "ResetNavigationRule", &UGLSOverlayWithTabsWidgetBase::execResetNavigationRule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitInputMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitInputMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSOverlayWithTabsWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase, nullptr, "InitInputMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitInputMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitNavigationRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitNavigationRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSOverlayWithTabsWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitNavigationRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase, nullptr, "InitNavigationRule", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitNavigationRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitNavigationRule_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitNavigationRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitNavigationRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetInputMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetInputMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSOverlayWithTabsWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase, nullptr, "ResetInputMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetInputMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetNavigationRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetNavigationRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSOverlayWithTabsWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetNavigationRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase, nullptr, "ResetNavigationRule", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetNavigationRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetNavigationRule_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetNavigationRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetNavigationRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSOverlayWithTabsWidgetBase);
	UClass* Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_NoRegister()
	{
		return UGLSOverlayWithTabsWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitInputMode, "InitInputMode" }, // 3575900242
		{ &Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_InitNavigationRule, "InitNavigationRule" }, // 3527217544
		{ &Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetInputMode, "ResetInputMode" }, // 2718855022
		{ &Z_Construct_UFunction_UGLSOverlayWithTabsWidgetBase_ResetNavigationRule, "ResetNavigationRule" }, // 4528383
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSOverlayWithTabsWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSOverlayWithTabsWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSOverlayWithTabsWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics::ClassParams = {
		&UGLSOverlayWithTabsWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UGLSOverlayWithTabsWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSOverlayWithTabsWidgetBase.OuterSingleton, Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSOverlayWithTabsWidgetBase.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSOverlayWithTabsWidgetBase>()
	{
		return UGLSOverlayWithTabsWidgetBase::StaticClass();
	}
	UGLSOverlayWithTabsWidgetBase::UGLSOverlayWithTabsWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSOverlayWithTabsWidgetBase);
	UGLSOverlayWithTabsWidgetBase::~UGLSOverlayWithTabsWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSOverlayWithTabsWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSOverlayWithTabsWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase, UGLSOverlayWithTabsWidgetBase::StaticClass, TEXT("UGLSOverlayWithTabsWidgetBase"), &Z_Registration_Info_UClass_UGLSOverlayWithTabsWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSOverlayWithTabsWidgetBase), 2765611136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSOverlayWithTabsWidgetBase_h_1428853551(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSOverlayWithTabsWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSOverlayWithTabsWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
