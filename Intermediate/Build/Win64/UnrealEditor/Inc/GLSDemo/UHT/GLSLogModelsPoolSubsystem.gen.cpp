// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Subsystems/GLSLogModelsPoolSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSLogModelsPoolSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogInfoObject_NoRegister();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogModelsPoolSubsystem();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogModelsPoolSubsystem_NoRegister();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_UGLSLogModelsPoolSubsystem_OnModelsCleared__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGLSLogModelsPoolSubsystem_OnModelsCleared__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGLSLogModelsPoolSubsystem_OnModelsCleared__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/GLSLogModelsPoolSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGLSLogModelsPoolSubsystem_OnModelsCleared__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogModelsPoolSubsystem, nullptr, "OnModelsCleared__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGLSLogModelsPoolSubsystem_OnModelsCleared__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGLSLogModelsPoolSubsystem_OnModelsCleared__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UGLSLogModelsPoolSubsystem_OnModelsCleared__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGLSLogModelsPoolSubsystem_OnModelsCleared__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGLSLogModelsPoolSubsystem::FOnModelsCleared_DelegateWrapper(const FMulticastScriptDelegate& OnModelsCleared)
{
	OnModelsCleared.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UGLSLogModelsPoolSubsystem::execResetModels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetModels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSLogModelsPoolSubsystem::execGetModelsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetModelsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSLogModelsPoolSubsystem::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGLSLogModelsPoolSubsystem**)Z_Param__Result=UGLSLogModelsPoolSubsystem::Get(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	void UGLSLogModelsPoolSubsystem::StaticRegisterNativesUGLSLogModelsPoolSubsystem()
	{
		UClass* Class = UGLSLogModelsPoolSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UGLSLogModelsPoolSubsystem::execGet },
			{ "GetModelsCount", &UGLSLogModelsPoolSubsystem::execGetModelsCount },
			{ "ResetModels", &UGLSLogModelsPoolSubsystem::execResetModels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics
	{
		struct GLSLogModelsPoolSubsystem_eventGet_Parms
		{
			const UObject* WorldContext;
			UGLSLogModelsPoolSubsystem* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSLogModelsPoolSubsystem_eventGet_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::NewProp_WorldContext_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSLogModelsPoolSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_UGLSLogModelsPoolSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "WorldContext" },
		{ "DisplayName", "Get LogModelsPool Subsystem" },
		{ "HidePin", "WorldContext" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSLogModelsPoolSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogModelsPoolSubsystem, nullptr, "Get", nullptr, nullptr, Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::GLSLogModelsPoolSubsystem_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::GLSLogModelsPoolSubsystem_eventGet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics
	{
		struct GLSLogModelsPoolSubsystem_eventGetModelsCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSLogModelsPoolSubsystem_eventGetModelsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSLogModelsPoolSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogModelsPoolSubsystem, nullptr, "GetModelsCount", nullptr, nullptr, Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::GLSLogModelsPoolSubsystem_eventGetModelsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::GLSLogModelsPoolSubsystem_eventGetModelsCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_ResetModels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_ResetModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSLogModelsPoolSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_ResetModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogModelsPoolSubsystem, nullptr, "ResetModels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_ResetModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_ResetModels_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_ResetModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_ResetModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSLogModelsPoolSubsystem);
	UClass* Z_Construct_UClass_UGLSLogModelsPoolSubsystem_NoRegister()
	{
		return UGLSLogModelsPoolSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LogsModelPool_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LogsModelPool_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogsModelPool_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LogsModelPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsInGame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectsInGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_Get, "Get" }, // 2586839501
		{ &Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_GetModelsCount, "GetModelsCount" }, // 4167459694
		{ &Z_Construct_UDelegateFunction_UGLSLogModelsPoolSubsystem_OnModelsCleared__DelegateSignature, "OnModelsCleared__DelegateSignature" }, // 3357718760
		{ &Z_Construct_UFunction_UGLSLogModelsPoolSubsystem_ResetModels, "ResetModels" }, // 3200831386
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Subsystems/GLSLogModelsPoolSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSLogModelsPoolSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_LogsModelPool_ValueProp = { "LogsModelPool", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGLSLogInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_LogsModelPool_Key_KeyProp = { "LogsModelPool_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_LogsModelPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/GLSLogModelsPoolSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_LogsModelPool = { "LogsModelPool", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSLogModelsPoolSubsystem, LogsModelPool), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_LogsModelPool_MetaData), Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_LogsModelPool_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_MaxObjectsInGame_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSLogModelsPoolSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_MaxObjectsInGame = { "MaxObjectsInGame", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSLogModelsPoolSubsystem, MaxObjectsInGame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_MaxObjectsInGame_MetaData), Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_MaxObjectsInGame_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_LogsModelPool_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_LogsModelPool_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_LogsModelPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::NewProp_MaxObjectsInGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSLogModelsPoolSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::ClassParams = {
		&UGLSLogModelsPoolSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGLSLogModelsPoolSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGLSLogModelsPoolSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSLogModelsPoolSubsystem.OuterSingleton, Z_Construct_UClass_UGLSLogModelsPoolSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSLogModelsPoolSubsystem.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSLogModelsPoolSubsystem>()
	{
		return UGLSLogModelsPoolSubsystem::StaticClass();
	}
	UGLSLogModelsPoolSubsystem::UGLSLogModelsPoolSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSLogModelsPoolSubsystem);
	UGLSLogModelsPoolSubsystem::~UGLSLogModelsPoolSubsystem() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSLogModelsPoolSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSLogModelsPoolSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSLogModelsPoolSubsystem, UGLSLogModelsPoolSubsystem::StaticClass, TEXT("UGLSLogModelsPoolSubsystem"), &Z_Registration_Info_UClass_UGLSLogModelsPoolSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSLogModelsPoolSubsystem), 1029582595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSLogModelsPoolSubsystem_h_2511533788(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSLogModelsPoolSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSLogModelsPoolSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
