// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Subsystems/GLSOverlaySubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSOverlaySubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSOverlaySubsystem();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSOverlaySubsystem_NoRegister();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	DEFINE_FUNCTION(UGLSOverlaySubsystem::execHideOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideOverlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSOverlaySubsystem::execDisplayOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayOverlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSOverlaySubsystem::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGLSOverlaySubsystem**)Z_Param__Result=UGLSOverlaySubsystem::Get(Z_Param_Context);
		P_NATIVE_END;
	}
	void UGLSOverlaySubsystem::StaticRegisterNativesUGLSOverlaySubsystem()
	{
		UClass* Class = UGLSOverlaySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayOverlay", &UGLSOverlaySubsystem::execDisplayOverlay },
			{ "Get", &UGLSOverlaySubsystem::execGet },
			{ "HideOverlay", &UGLSOverlaySubsystem::execHideOverlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLSOverlaySubsystem_DisplayOverlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSOverlaySubsystem_DisplayOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSOverlaySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSOverlaySubsystem_DisplayOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSOverlaySubsystem, nullptr, "DisplayOverlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSOverlaySubsystem_DisplayOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSOverlaySubsystem_DisplayOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSOverlaySubsystem_DisplayOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSOverlaySubsystem_DisplayOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics
	{
		struct GLSOverlaySubsystem_eventGet_Parms
		{
			const UObject* Context;
			UGLSOverlaySubsystem* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSOverlaySubsystem_eventGet_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::NewProp_Context_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSOverlaySubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_UGLSOverlaySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "DisplayName", "Get Game Logs Overlay" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSOverlaySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSOverlaySubsystem, nullptr, "Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::GLSOverlaySubsystem_eventGet_Parms), Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSOverlaySubsystem_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSOverlaySubsystem_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSOverlaySubsystem_HideOverlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSOverlaySubsystem_HideOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSOverlaySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSOverlaySubsystem_HideOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSOverlaySubsystem, nullptr, "HideOverlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSOverlaySubsystem_HideOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSOverlaySubsystem_HideOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSOverlaySubsystem_HideOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSOverlaySubsystem_HideOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSOverlaySubsystem);
	UClass* Z_Construct_UClass_UGLSOverlaySubsystem_NoRegister()
	{
		return UGLSOverlaySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGLSOverlaySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSOverlaySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSOverlaySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSOverlaySubsystem_DisplayOverlay, "DisplayOverlay" }, // 2302857608
		{ &Z_Construct_UFunction_UGLSOverlaySubsystem_Get, "Get" }, // 2923435131
		{ &Z_Construct_UFunction_UGLSOverlaySubsystem_HideOverlay, "HideOverlay" }, // 1858512777
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSOverlaySubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/GLSOverlaySubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSOverlaySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSOverlaySubsystem_Statics::NewProp_OverlayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSOverlaySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGLSOverlaySubsystem_Statics::NewProp_OverlayWidget = { "OverlayWidget", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSOverlaySubsystem, OverlayWidget), Z_Construct_UClass_UGLSOverlayWithTabsWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGLSOverlaySubsystem_Statics::NewProp_OverlayWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSOverlaySubsystem_Statics::NewProp_OverlayWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSOverlaySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSOverlaySubsystem_Statics::NewProp_OverlayWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSOverlaySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSOverlaySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSOverlaySubsystem_Statics::ClassParams = {
		&UGLSOverlaySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLSOverlaySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLSOverlaySubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLSOverlaySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSOverlaySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLSOverlaySubsystem()
	{
		if (!Z_Registration_Info_UClass_UGLSOverlaySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSOverlaySubsystem.OuterSingleton, Z_Construct_UClass_UGLSOverlaySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSOverlaySubsystem.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSOverlaySubsystem>()
	{
		return UGLSOverlaySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSOverlaySubsystem);
	UGLSOverlaySubsystem::~UGLSOverlaySubsystem() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSOverlaySubsystem, UGLSOverlaySubsystem::StaticClass, TEXT("UGLSOverlaySubsystem"), &Z_Registration_Info_UClass_UGLSOverlaySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSOverlaySubsystem), 2301373644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_1640212207(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSOverlaySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
