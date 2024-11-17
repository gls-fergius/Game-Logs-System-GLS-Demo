// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/Utils/GLSSaveSystemUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSSaveSystemUtils() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemUtils();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemUtils_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Class UGLSSaveSystemUtils Function CleanSaveDataByTabName
struct Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics
{
	struct GLSSaveSystemUtils_eventCleanSaveDataByTabName_Parms
	{
		UObject* Context;
		FString TabName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventCleanSaveDataByTabName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventCleanSaveDataByTabName_Parms, TabName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabName_MetaData), NewProp_TabName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_TabName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "CleanSaveDataByTabName", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::GLSSaveSystemUtils_eventCleanSaveDataByTabName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::GLSSaveSystemUtils_eventCleanSaveDataByTabName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execCleanSaveDataByTabName)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_TabName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGLSSaveSystemUtils::CleanSaveDataByTabName(Z_Param_Context,Z_Param_TabName);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function CleanSaveDataByTabName

// Begin Class UGLSSaveSystemUtils Function EnableSaveDataByTabName
struct Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics
{
	struct GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms
	{
		UObject* Context;
		FString TabName;
		bool bEnable;
		bool bForceCleanParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceCleanParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_bForceCleanParams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCleanParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms, TabName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabName_MetaData), NewProp_TabName_MetaData) };
void Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
void Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams_SetBit(void* Obj)
{
	((GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms*)Obj)->bForceCleanParams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams = { "bForceCleanParams", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceCleanParams_MetaData), NewProp_bForceCleanParams_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_TabName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "EnableSaveDataByTabName", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execEnableSaveDataByTabName)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_TabName);
	P_GET_UBOOL(Z_Param_bEnable);
	P_GET_UBOOL(Z_Param_bForceCleanParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGLSSaveSystemUtils::EnableSaveDataByTabName(Z_Param_Context,Z_Param_TabName,Z_Param_bEnable,Z_Param_bForceCleanParams);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function EnableSaveDataByTabName

// Begin Class UGLSSaveSystemUtils Function GetEnableSaveDataByTabName
struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics
{
	struct GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms
	{
		const UObject* Context;
		FString TabName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms, TabName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabName_MetaData), NewProp_TabName_MetaData) };
void Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_TabName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetEnableSaveDataByTabName", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execGetEnableSaveDataByTabName)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_TabName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGLSSaveSystemUtils::GetEnableSaveDataByTabName(Z_Param_Context,Z_Param_TabName);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function GetEnableSaveDataByTabName

// Begin Class UGLSSaveSystemUtils Function GetSaveValueAsBoolean
struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics
{
	struct GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms
	{
		UObject* Context;
		FString ParamName;
		bool OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
	static void NewProp_OutValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
void Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_OutValue_SetBit(void* Obj)
{
	((GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms*)Obj)->OutValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_OutValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetSaveValueAsBoolean", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execGetSaveValueAsBoolean)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
	P_GET_UBOOL_REF(Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGLSSaveSystemUtils::GetSaveValueAsBoolean(Z_Param_Context,Z_Param_ParamName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function GetSaveValueAsBoolean

// Begin Class UGLSSaveSystemUtils Function GetSaveValueAsInteger
struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics
{
	struct GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms
	{
		UObject* Context;
		FString ParamName;
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetSaveValueAsInteger", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execGetSaveValueAsInteger)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGLSSaveSystemUtils::GetSaveValueAsInteger(Z_Param_Context,Z_Param_ParamName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function GetSaveValueAsInteger

// Begin Class UGLSSaveSystemUtils Function GetSaveValueAsString
struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics
{
	struct GLSSaveSystemUtils_eventGetSaveValueAsString_Parms
	{
		UObject* Context;
		FString ParamName;
		FString OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsString_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsString_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsString_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSSaveSystemUtils_eventGetSaveValueAsString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSaveSystemUtils_eventGetSaveValueAsString_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetSaveValueAsString", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::GLSSaveSystemUtils_eventGetSaveValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::GLSSaveSystemUtils_eventGetSaveValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execGetSaveValueAsString)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGLSSaveSystemUtils::GetSaveValueAsString(Z_Param_Context,Z_Param_ParamName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function GetSaveValueAsString

// Begin Class UGLSSaveSystemUtils Function GetSelectedTabName
struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics
{
	struct GLSSaveSystemUtils_eventGetSelectedTabName_Parms
	{
		UObject* Context;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSelectedTabName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSelectedTabName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetSelectedTabName", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::GLSSaveSystemUtils_eventGetSelectedTabName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::GLSSaveSystemUtils_eventGetSelectedTabName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execGetSelectedTabName)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UGLSSaveSystemUtils::GetSelectedTabName(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function GetSelectedTabName

// Begin Class UGLSSaveSystemUtils Function GetTabNamesFromSave
struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics
{
	struct GLSSaveSystemUtils_eventGetTabNamesFromSave_Parms
	{
		UObject* Context;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetTabNamesFromSave_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetTabNamesFromSave_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetTabNamesFromSave", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::GLSSaveSystemUtils_eventGetTabNamesFromSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::GLSSaveSystemUtils_eventGetTabNamesFromSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execGetTabNamesFromSave)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UGLSSaveSystemUtils::GetTabNamesFromSave(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function GetTabNamesFromSave

// Begin Class UGLSSaveSystemUtils Function MakeSaveParamName
struct Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics
{
	struct GLSSaveSystemUtils_eventMakeSaveParamName_Parms
	{
		UObject* Context;
		FString VariableName;
		FString ParamName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventMakeSaveParamName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventMakeSaveParamName_Parms, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventMakeSaveParamName_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventMakeSaveParamName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "MakeSaveParamName", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::GLSSaveSystemUtils_eventMakeSaveParamName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::GLSSaveSystemUtils_eventMakeSaveParamName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execMakeSaveParamName)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UGLSSaveSystemUtils::MakeSaveParamName(Z_Param_Context,Z_Param_VariableName,Z_Param_ParamName);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function MakeSaveParamName

// Begin Class UGLSSaveSystemUtils Function RemoveSaveDataByTabName
struct Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics
{
	struct GLSSaveSystemUtils_eventRemoveSaveDataByTabName_Parms
	{
		UObject* Context;
		FString TabName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventRemoveSaveDataByTabName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventRemoveSaveDataByTabName_Parms, TabName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabName_MetaData), NewProp_TabName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_TabName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "RemoveSaveDataByTabName", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::GLSSaveSystemUtils_eventRemoveSaveDataByTabName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::GLSSaveSystemUtils_eventRemoveSaveDataByTabName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execRemoveSaveDataByTabName)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_TabName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGLSSaveSystemUtils::RemoveSaveDataByTabName(Z_Param_Context,Z_Param_TabName);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function RemoveSaveDataByTabName

// Begin Class UGLSSaveSystemUtils Function RequestSaveDataRecursive
struct Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics
{
	struct GLSSaveSystemUtils_eventRequestSaveDataRecursive_Parms
	{
		UWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventRequestSaveDataRecursive_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "RequestSaveDataRecursive", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::GLSSaveSystemUtils_eventRequestSaveDataRecursive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::GLSSaveSystemUtils_eventRequestSaveDataRecursive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execRequestSaveDataRecursive)
{
	P_GET_OBJECT(UWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGLSSaveSystemUtils::RequestSaveDataRecursive(Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function RequestSaveDataRecursive

// Begin Class UGLSSaveSystemUtils Function SetParentTabNameRecursive
struct Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics
{
	struct GLSSaveSystemUtils_eventSetParentTabNameRecursive_Parms
	{
		UWidget* Widget;
		FString TabName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventSetParentTabNameRecursive_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventSetParentTabNameRecursive_Parms, TabName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabName_MetaData), NewProp_TabName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_TabName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "SetParentTabNameRecursive", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::GLSSaveSystemUtils_eventSetParentTabNameRecursive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::GLSSaveSystemUtils_eventSetParentTabNameRecursive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execSetParentTabNameRecursive)
{
	P_GET_OBJECT(UWidget,Z_Param_Widget);
	P_GET_PROPERTY(FStrProperty,Z_Param_TabName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGLSSaveSystemUtils::SetParentTabNameRecursive(Z_Param_Widget,Z_Param_TabName);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function SetParentTabNameRecursive

// Begin Class UGLSSaveSystemUtils Function SetSelectedTabByName
struct Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics
{
	struct GLSSaveSystemUtils_eventSetSelectedTabByName_Parms
	{
		UObject* Context;
		FString TabName;
		bool bSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventSetSelectedTabByName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSaveSystemUtils_eventSetSelectedTabByName_Parms, TabName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabName_MetaData), NewProp_TabName_MetaData) };
void Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((GLSSaveSystemUtils_eventSetSelectedTabByName_Parms*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSaveSystemUtils_eventSetSelectedTabByName_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelected_MetaData), NewProp_bSelected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_TabName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "SetSelectedTabByName", nullptr, nullptr, Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::GLSSaveSystemUtils_eventSetSelectedTabByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::GLSSaveSystemUtils_eventSetSelectedTabByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSSaveSystemUtils::execSetSelectedTabByName)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_TabName);
	P_GET_UBOOL(Z_Param_bSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGLSSaveSystemUtils::SetSelectedTabByName(Z_Param_Context,Z_Param_TabName,Z_Param_bSelected);
	P_NATIVE_END;
}
// End Class UGLSSaveSystemUtils Function SetSelectedTabByName

// Begin Class UGLSSaveSystemUtils
void UGLSSaveSystemUtils::StaticRegisterNativesUGLSSaveSystemUtils()
{
	UClass* Class = UGLSSaveSystemUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CleanSaveDataByTabName", &UGLSSaveSystemUtils::execCleanSaveDataByTabName },
		{ "EnableSaveDataByTabName", &UGLSSaveSystemUtils::execEnableSaveDataByTabName },
		{ "GetEnableSaveDataByTabName", &UGLSSaveSystemUtils::execGetEnableSaveDataByTabName },
		{ "GetSaveValueAsBoolean", &UGLSSaveSystemUtils::execGetSaveValueAsBoolean },
		{ "GetSaveValueAsInteger", &UGLSSaveSystemUtils::execGetSaveValueAsInteger },
		{ "GetSaveValueAsString", &UGLSSaveSystemUtils::execGetSaveValueAsString },
		{ "GetSelectedTabName", &UGLSSaveSystemUtils::execGetSelectedTabName },
		{ "GetTabNamesFromSave", &UGLSSaveSystemUtils::execGetTabNamesFromSave },
		{ "MakeSaveParamName", &UGLSSaveSystemUtils::execMakeSaveParamName },
		{ "RemoveSaveDataByTabName", &UGLSSaveSystemUtils::execRemoveSaveDataByTabName },
		{ "RequestSaveDataRecursive", &UGLSSaveSystemUtils::execRequestSaveDataRecursive },
		{ "SetParentTabNameRecursive", &UGLSSaveSystemUtils::execSetParentTabNameRecursive },
		{ "SetSelectedTabByName", &UGLSSaveSystemUtils::execSetSelectedTabByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSSaveSystemUtils);
UClass* Z_Construct_UClass_UGLSSaveSystemUtils_NoRegister()
{
	return UGLSSaveSystemUtils::StaticClass();
}
struct Z_Construct_UClass_UGLSSaveSystemUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/GLSSaveSystemUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName, "CleanSaveDataByTabName" }, // 1346762313
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName, "EnableSaveDataByTabName" }, // 1342726977
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName, "GetEnableSaveDataByTabName" }, // 2013077739
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean, "GetSaveValueAsBoolean" }, // 231126500
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger, "GetSaveValueAsInteger" }, // 3833737181
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString, "GetSaveValueAsString" }, // 98843344
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName, "GetSelectedTabName" }, // 1713658083
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave, "GetTabNamesFromSave" }, // 3778373824
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName, "MakeSaveParamName" }, // 2414340247
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName, "RemoveSaveDataByTabName" }, // 19727812
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive, "RequestSaveDataRecursive" }, // 1227808629
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive, "SetParentTabNameRecursive" }, // 542612713
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName, "SetSelectedTabByName" }, // 3910834356
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSSaveSystemUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLSSaveSystemUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSystemUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSSaveSystemUtils_Statics::ClassParams = {
	&UGLSSaveSystemUtils::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSystemUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSSaveSystemUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSSaveSystemUtils()
{
	if (!Z_Registration_Info_UClass_UGLSSaveSystemUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSSaveSystemUtils.OuterSingleton, Z_Construct_UClass_UGLSSaveSystemUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSSaveSystemUtils.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSSaveSystemUtils>()
{
	return UGLSSaveSystemUtils::StaticClass();
}
UGLSSaveSystemUtils::UGLSSaveSystemUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSSaveSystemUtils);
UGLSSaveSystemUtils::~UGLSSaveSystemUtils() {}
// End Class UGLSSaveSystemUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSSaveSystemUtils, UGLSSaveSystemUtils::StaticClass, TEXT("UGLSSaveSystemUtils"), &Z_Registration_Info_UClass_UGLSSaveSystemUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSSaveSystemUtils), 2113462119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_1805294669(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
