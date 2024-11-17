// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Subsystems/GLSSaveSubsystem.h"
#include "../Types/GLSSaveSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSSaveSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSubsystem();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSubsystem_NoRegister();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveData();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	void UGLSSaveSubsystem::StaticRegisterNativesUGLSSaveSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSSaveSubsystem);
	UClass* Z_Construct_UClass_UGLSSaveSubsystem_NoRegister()
	{
		return UGLSSaveSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGLSSaveSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSSaveSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSaveSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/GLSSaveSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSaveSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSaveSubsystem_Statics::NewProp_SaveData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/GLSSaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLSSaveSubsystem_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSSaveSubsystem, SaveData), Z_Construct_UScriptStruct_FGLSSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSubsystem_Statics::NewProp_SaveData_MetaData), Z_Construct_UClass_UGLSSaveSubsystem_Statics::NewProp_SaveData_MetaData) }; // 3662667873
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSSaveSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSaveSubsystem_Statics::NewProp_SaveData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSSaveSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSSaveSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSSaveSubsystem_Statics::ClassParams = {
		&UGLSSaveSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGLSSaveSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSSaveSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGLSSaveSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGLSSaveSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSSaveSubsystem.OuterSingleton, Z_Construct_UClass_UGLSSaveSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSSaveSubsystem.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSSaveSubsystem>()
	{
		return UGLSSaveSubsystem::StaticClass();
	}
	UGLSSaveSubsystem::UGLSSaveSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSSaveSubsystem);
	UGLSSaveSubsystem::~UGLSSaveSubsystem() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSaveSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSaveSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSSaveSubsystem, UGLSSaveSubsystem::StaticClass, TEXT("UGLSSaveSubsystem"), &Z_Registration_Info_UClass_UGLSSaveSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSSaveSubsystem), 496857864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSaveSubsystem_h_1804862853(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSaveSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSaveSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
