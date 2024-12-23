// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/Types/GLSSaveSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSSaveSystemTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemInterface();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister();
GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveData();
GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveTabContext();
GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin ScriptStruct FGLSSaveTabParamsInfo
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoSaveParams_MetaData[] = {
		{ "Comment", "// TODO: set default value from config\n" },
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
		{ "ToolTip", "TODO: set default value from config" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Comment", "// key save param, value save param\n" },
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
		{ "ToolTip", "key save param, value save param" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
	static void NewProp_bEnableAutoSaveParams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoSaveParams;
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Params_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Params_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLSSaveTabParamsInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLSSaveTabParamsInfo, TabName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabName_MetaData), NewProp_TabName_MetaData) };
void Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams_SetBit(void* Obj)
{
	((FGLSSaveTabParamsInfo*)Obj)->bEnableAutoSaveParams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams = { "bEnableAutoSaveParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGLSSaveTabParamsInfo), &Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutoSaveParams_MetaData), NewProp_bEnableAutoSaveParams_MetaData) };
void Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((FGLSSaveTabParamsInfo*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGLSSaveTabParamsInfo), &Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelected_MetaData), NewProp_bSelected_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLSSaveTabParamsInfo, Params), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_TabName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bEnableAutoSaveParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_bSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	nullptr,
	&NewStructOps,
	"GLSSaveTabParamsInfo",
	Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::PropPointers),
	sizeof(FGLSSaveTabParamsInfo),
	alignof(FGLSSaveTabParamsInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo.InnerSingleton, Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo.InnerSingleton;
}
// End ScriptStruct FGLSSaveTabParamsInfo

// Begin ScriptStruct FGLSSaveTabContext
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PIEInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabParamsInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PIEInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TabParamsInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TabParamsInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLSSaveTabContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_WorldType = { "WorldType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLSSaveTabContext, WorldType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldType_MetaData), NewProp_WorldType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_PIEInstance = { "PIEInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLSSaveTabContext, PIEInstance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PIEInstance_MetaData), NewProp_PIEInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo_Inner = { "TabParamsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo, METADATA_PARAMS(0, nullptr) }; // 1473998135
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo = { "TabParamsInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLSSaveTabContext, TabParamsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabParamsInfo_MetaData), NewProp_TabParamsInfo_MetaData) }; // 1473998135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_WorldType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_PIEInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewProp_TabParamsInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	nullptr,
	&NewStructOps,
	"GLSSaveTabContext",
	Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::PropPointers),
	sizeof(FGLSSaveTabContext),
	alignof(FGLSSaveTabContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveTabContext()
{
	if (!Z_Registration_Info_UScriptStruct_GLSSaveTabContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLSSaveTabContext.InnerSingleton, Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GLSSaveTabContext.InnerSingleton;
}
// End ScriptStruct FGLSSaveTabContext

// Begin ScriptStruct FGLSSaveData
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabContexts_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TabContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TabContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLSSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts_Inner = { "TabContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGLSSaveTabContext, METADATA_PARAMS(0, nullptr) }; // 1469972696
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts = { "TabContexts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLSSaveData, TabContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabContexts_MetaData), NewProp_TabContexts_MetaData) }; // 1469972696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLSSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewProp_TabContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLSSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	nullptr,
	&NewStructOps,
	"GLSSaveData",
	Z_Construct_UScriptStruct_FGLSSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveData_Statics::PropPointers),
	sizeof(FGLSSaveData),
	alignof(FGLSSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGLSSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGLSSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_GLSSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLSSaveData.InnerSingleton, Z_Construct_UScriptStruct_FGLSSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GLSSaveData.InnerSingleton;
}
// End ScriptStruct FGLSSaveData

// Begin Interface UGLSSaveSystemInterface Function PrepareDataToSave
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
struct Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemInterface_eventPrepareDataToSave_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemInterface, nullptr, "PrepareDataToSave", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::PropPointers), sizeof(GLSSaveSystemInterface_eventPrepareDataToSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::Function_MetaDataParams) };
static_assert(sizeof(GLSSaveSystemInterface_eventPrepareDataToSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGLSSaveSystemInterface::execPrepareDataToSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,FString>*)Z_Param__Result=P_THIS->PrepareDataToSave_Implementation();
	P_NATIVE_END;
}
// End Interface UGLSSaveSystemInterface Function PrepareDataToSave

// Begin Interface UGLSSaveSystemInterface Function RequestApplySave
void IGLSSaveSystemInterface::RequestApplySave()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestApplySave instead.");
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
struct Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemInterface, nullptr, "RequestApplySave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGLSSaveSystemInterface::execRequestApplySave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestApplySave_Implementation();
	P_NATIVE_END;
}
// End Interface UGLSSaveSystemInterface Function RequestApplySave

// Begin Interface UGLSSaveSystemInterface
void UGLSSaveSystemInterface::StaticRegisterNativesUGLSSaveSystemInterface()
{
	UClass* Class = UGLSSaveSystemInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PrepareDataToSave", &IGLSSaveSystemInterface::execPrepareDataToSave },
		{ "RequestApplySave", &IGLSSaveSystemInterface::execRequestApplySave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSSaveSystemInterface);
UClass* Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister()
{
	return UGLSSaveSystemInterface::StaticClass();
}
struct Z_Construct_UClass_UGLSSaveSystemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Types/GLSSaveSystemTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSSaveSystemInterface_PrepareDataToSave, "PrepareDataToSave" }, // 683222405
		{ &Z_Construct_UFunction_UGLSSaveSystemInterface_RequestApplySave, "RequestApplySave" }, // 1676484976
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGLSSaveSystemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLSSaveSystemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSystemInterface_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSystemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSSaveSystemInterface_Statics::Class_MetaDataParams)
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
// End Interface UGLSSaveSystemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGLSSaveTabParamsInfo::StaticStruct, Z_Construct_UScriptStruct_FGLSSaveTabParamsInfo_Statics::NewStructOps, TEXT("GLSSaveTabParamsInfo"), &Z_Registration_Info_UScriptStruct_GLSSaveTabParamsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLSSaveTabParamsInfo), 1473998135U) },
		{ FGLSSaveTabContext::StaticStruct, Z_Construct_UScriptStruct_FGLSSaveTabContext_Statics::NewStructOps, TEXT("GLSSaveTabContext"), &Z_Registration_Info_UScriptStruct_GLSSaveTabContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLSSaveTabContext), 1469972696U) },
		{ FGLSSaveData::StaticStruct, Z_Construct_UScriptStruct_FGLSSaveData_Statics::NewStructOps, TEXT("GLSSaveData"), &Z_Registration_Info_UScriptStruct_GLSSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLSSaveData), 2395799983U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSSaveSystemInterface, UGLSSaveSystemInterface::StaticClass, TEXT("UGLSSaveSystemInterface"), &Z_Registration_Info_UClass_UGLSSaveSystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSSaveSystemInterface), 3394433589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_3464001472(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSSaveSystemTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
