// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/Subsystems/GLSSaveSubsystem.h"
#include "GLSDemo/Public/Types/GLSSaveSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSSaveSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSubsystem();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSubsystem_NoRegister();
GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveData();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Class UGLSSaveSubsystem
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/GLSSaveSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/GLSSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSSaveSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLSSaveSubsystem_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSSaveSubsystem, SaveData), Z_Construct_UScriptStruct_FGLSSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveData_MetaData), NewProp_SaveData_MetaData) }; // 2395799983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSSaveSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSaveSubsystem_Statics::NewProp_SaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLSSaveSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSubsystem_Statics::DependentSingletons) < 16);
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
// End Class UGLSSaveSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSaveSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSSaveSubsystem, UGLSSaveSubsystem::StaticClass, TEXT("UGLSSaveSubsystem"), &Z_Registration_Info_UClass_UGLSSaveSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSSaveSubsystem), 3611093921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSaveSubsystem_h_3594116279(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSaveSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSaveSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
