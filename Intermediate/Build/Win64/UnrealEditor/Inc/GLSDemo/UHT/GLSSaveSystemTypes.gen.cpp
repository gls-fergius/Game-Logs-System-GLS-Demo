// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Types/GLSSaveSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSSaveSystemTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemInterface();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveData();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveTabContext();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo;
class UScriptStruct* FGLSSaveTabParamsInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("GLSSaveTabParamsInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo.OuterSingleton;
}
template<> GLSDEMO_API UScriptStruct* StaticStruct<FGLSSaveTabParamsInfo>()
{
	return FGLSSaveTabParamsInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoSaveParams_MetaData[];
#endif
		static void NewProp_bEnableAutoSaveParams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoSaveParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Params_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Params_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLSSaveTabParamsInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_TabName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSSaveTabParamsInfo, TabName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_TabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_TabName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams_MetaData[] = {
		{ "Comment", "// TODO: set default value from config\n" },
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
		{ "ToolTip", "TODO: set default value from config" },
	};
#endif
	void Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams_SetBit(void* Obj)
	{
		((FGLSSaveTabParamsInfo*)Obj)->bEnableAutoSaveParams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams = { "bEnableAutoSaveParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGLSSaveTabParamsInfo), &Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((FGLSSaveTabParamsInfo*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGLSSaveTabParamsInfo), &Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_MetaData[] = {
		{ "Comment", "// key save param, value save param\n" },
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
		{ "ToolTip", "key save param, value save param" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSSaveTabParamsInfo, Params), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_TabName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		&NewStructOps,
		"GLSSaveTabParamsInfo",
		sizeof(FGLSSaveTabParamsInfo),
		alignof(FGLSSaveTabParamsInfo),
		Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo.InnerSingleton, Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLSSaveTabContext;
class UScriptStruct* FGLSSaveTabContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLSSaveTabContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLSSaveTabContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLSSaveTabContext, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("GLSSaveTabContext"));
	}
	return Z_Registration_Info_UScriptStruct_GLSSaveTabContext.OuterSingleton;
}
template<> GLSDEMO_API UScriptStruct* StaticStruct<FGLSSaveTabContext>()
{
	return FGLSSaveTabContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WorldType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PIEInstance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PIEInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabParamsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabParamsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TabParamsInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLSSaveTabContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_WorldType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_WorldType = { "WorldType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSSaveTabContext, WorldType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_WorldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_WorldType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_PIEInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_PIEInstance = { "PIEInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSSaveTabContext, PIEInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_PIEInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_PIEInstance_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo_Inner = { "TabParamsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo, METADATA_PARAMS(nullptr, 0) }; // 1606260962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo = { "TabParamsInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSSaveTabContext, TabParamsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo_MetaData)) }; // 1606260962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_WorldType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_PIEInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		&NewStructOps,
		"GLSSaveTabContext",
		sizeof(FGLSSaveTabContext),
		alignof(FGLSSaveTabContext),
		Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveTabContext()
	{
		if (!Z_Registration_Info_UScriptStruct_GLSSaveTabContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLSSaveTabContext.InnerSingleton, Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GLSSaveTabContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLSSaveData;
class UScriptStruct* FGLSSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLSSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLSSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLSSaveData, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("GLSSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_GLSSaveData.OuterSingleton;
}
template<> GLSDEMO_API UScriptStruct* StaticStruct<FGLSSaveData>()
{
	return FGLSSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGLSSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TabContexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLSSaveData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts_Inner = { "TabContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGLSSaveTabContext, METADATA_PARAMS(nullptr, 0) }; // 3013782271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts = { "TabContexts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSSaveData, TabContexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts_MetaData)) }; // 3013782271
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLSSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLSSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		&NewStructOps,
		"GLSSaveData",
		sizeof(FGLSSaveData),
		alignof(FGLSSaveData),
		Z_Construct_UScriptStruct_FGLSSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_GLSSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLSSaveData.InnerSingleton, Z_Construct_UScriptStruct_FGLSSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GLSSaveData.InnerSingleton;
	}
	DEFINE_FUNCTION(IGLSSaveSystemInterface::execPrepareDataToSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->PrepareDataToSave_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGLSSaveSystemInterface::execRequestApplySave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestApplySave_Implementation();
		P_NATIVE_END;
	}
	struct GLSSaveSystemInterface_eventPrepareDataToSave_Parms
	{
		TMap<FString,FString> ReturnValue;
	};
	TMap<FString,FString> IGLSSaveSystemInterface::PrepareDataToSave()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PrepareDataToSave instead.");
		GLSSaveSystemInterface_eventPrepareDataToSave_Parms Parms;
		return Parms.ReturnValue;
	}
	void IGLSSaveSystemInterface::RequestApplySave()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestApplySave instead.");
	}
	void UGLSSaveSystemInterface::StaticRegisterNativesUGLSSaveSystemInterface()
	{
		UClass* Class = UGLSSaveSystemInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrepareDataToSave", &IGLSSaveSystemInterface::execPrepareDataToSave },
			{ "RequestApplySave", &IGLSSaveSystemInterface::execRequestApplySave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemInterface_eventPrepareDataToSave_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemInterface, nullptr, "PrepareDataToSave", nullptr, nullptr, sizeof(GLSSaveSystemInterface_eventPrepareDataToSave_Parms), Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemInterface, nullptr, "RequestApplySave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSSaveSystemInterface);
	UClass* Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister()
	{
		return UGLSSaveSystemInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGLSSaveSystemInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSSaveSystemInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSSaveSystemInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave, "PrepareDataToSave" }, // 285510749
		{ &Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave, "RequestApplySave" }, // 139147986
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSaveSystemInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSSaveSystemInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGLSSaveSystemInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSSaveSystemInterface_Statics::ClassParams = {
		&UGLSSaveSystemInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGLSSaveSystemInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSystemInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLSSaveSystemInterface()
	{
		if (!Z_Registration_Info_UClass_UGLSSaveSystemInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSSaveSystemInterface.OuterSingleton, Z_Construct_UClass_UGLSSaveSystemInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSSaveSystemInterface.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSSaveSystemInterface>()
	{
		return UGLSSaveSystemInterface::StaticClass();
	}
	UGLSSaveSystemInterface::UGLSSaveSystemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSSaveSystemInterface);
	UGLSSaveSystemInterface::~UGLSSaveSystemInterface() {}
	static FName NAME_UGLSSaveSystemInterface_PrepareDataToSave = FName(TEXT("PrepareDataToSave"));
	TMap<FString,FString> IGLSSaveSystemInterface::Execute_PrepareDataToSave(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGLSSaveSystemInterface::StaticClass()));
		GLSSaveSystemInterface_eventPrepareDataToSave_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGLSSaveSystemInterface_PrepareDataToSave);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGLSSaveSystemInterface*)(O->GetNativeInterfaceAddress(UGLSSaveSystemInterface::StaticClass())))
		{
			Parms.ReturnValue = I->PrepareDataToSave_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGLSSaveSystemInterface_RequestApplySave = FName(TEXT("RequestApplySave"));
	void IGLSSaveSystemInterface::Execute_RequestApplySave(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGLSSaveSystemInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGLSSaveSystemInterface_RequestApplySave);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGLSSaveSystemInterface*)(O->GetNativeInterfaceAddress(UGLSSaveSystemInterface::StaticClass())))
		{
			I->RequestApplySave_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics::ScriptStructInfo[] = {
		{ FGLSSaveTabParamsInfo::StaticStruct, Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewStructOps, TEXT("GLSSaveTabParamsInfo"), &Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLSSaveTabParamsInfo), 1606260962U) },
		{ FGLSSaveTabContext::StaticStruct, Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewStructOps, TEXT("GLSSaveTabContext"), &Z_Registration_Info_UScriptStruct_GLSSaveTabContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLSSaveTabContext), 3013782271U) },
		{ FGLSSaveData::StaticStruct, Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewStructOps, TEXT("GLSSaveData"), &Z_Registration_Info_UScriptStruct_GLSSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLSSaveData), 2639141417U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSSaveSystemInterface, UGLSSaveSystemInterface::StaticClass, TEXT("UGLSSaveSystemInterface"), &Z_Registration_Info_UClass_UGLSSaveSystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSSaveSystemInterface), 2226746826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_3183344427(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
