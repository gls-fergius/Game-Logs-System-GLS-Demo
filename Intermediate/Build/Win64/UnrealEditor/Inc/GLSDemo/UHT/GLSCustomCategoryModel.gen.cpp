// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/Models/GLSCustomCategoryModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSCustomCategoryModel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoryModel();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoryModel_NoRegister();
GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Class UGLSCustomCategoryModel Function BP_GetCategoryEnable
struct Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics
{
	struct GLSCustomCategoryModel_eventBP_GetCategoryEnable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSCustomCategoryModel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSCustomCategoryModel_eventBP_GetCategoryEnable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSCustomCategoryModel_eventBP_GetCategoryEnable_Parms), &Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoryModel, nullptr, "BP_GetCategoryEnable", nullptr, nullptr, Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::GLSCustomCategoryModel_eventBP_GetCategoryEnable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::GLSCustomCategoryModel_eventBP_GetCategoryEnable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSCustomCategoryModel::execBP_GetCategoryEnable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_GetCategoryEnable();
	P_NATIVE_END;
}
// End Class UGLSCustomCategoryModel Function BP_GetCategoryEnable

// Begin Class UGLSCustomCategoryModel Function ChangeCategoryEnable
struct Z_Construct_UFunction_UGLSCustomCategoryModel_ChangeCategoryEnable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSCustomCategoryModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoryModel_ChangeCategoryEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoryModel, nullptr, "ChangeCategoryEnable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_ChangeCategoryEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSCustomCategoryModel_ChangeCategoryEnable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSCustomCategoryModel_ChangeCategoryEnable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoryModel_ChangeCategoryEnable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSCustomCategoryModel::execChangeCategoryEnable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeCategoryEnable();
	P_NATIVE_END;
}
// End Class UGLSCustomCategoryModel Function ChangeCategoryEnable

// Begin Class UGLSCustomCategoryModel Function GetActiveEditableMode
struct Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics
{
	struct GLSCustomCategoryModel_eventGetActiveEditableMode_Parms
	{
		EGLSCustomCetegoryEditableModeType ModeType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSCustomCategoryModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModeType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::NewProp_ModeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::NewProp_ModeType = { "ModeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSCustomCategoryModel_eventGetActiveEditableMode_Parms, ModeType), Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeType_MetaData), NewProp_ModeType_MetaData) }; // 3167743905
void Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSCustomCategoryModel_eventGetActiveEditableMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSCustomCategoryModel_eventGetActiveEditableMode_Parms), &Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::NewProp_ModeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::NewProp_ModeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoryModel, nullptr, "GetActiveEditableMode", nullptr, nullptr, Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::GLSCustomCategoryModel_eventGetActiveEditableMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::GLSCustomCategoryModel_eventGetActiveEditableMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSCustomCategoryModel::execGetActiveEditableMode)
{
	P_GET_ENUM(EGLSCustomCetegoryEditableModeType,Z_Param_ModeType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetActiveEditableMode(EGLSCustomCetegoryEditableModeType(Z_Param_ModeType));
	P_NATIVE_END;
}
// End Class UGLSCustomCategoryModel Function GetActiveEditableMode

// Begin Class UGLSCustomCategoryModel Function GetEnableEditableMode
struct Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics
{
	struct GLSCustomCategoryModel_eventGetEnableEditableMode_Parms
	{
		EGLSCustomCetegoryEditableModeType ModeType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSCustomCategoryModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModeType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::NewProp_ModeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::NewProp_ModeType = { "ModeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSCustomCategoryModel_eventGetEnableEditableMode_Parms, ModeType), Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeType_MetaData), NewProp_ModeType_MetaData) }; // 3167743905
void Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSCustomCategoryModel_eventGetEnableEditableMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSCustomCategoryModel_eventGetEnableEditableMode_Parms), &Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::NewProp_ModeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::NewProp_ModeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoryModel, nullptr, "GetEnableEditableMode", nullptr, nullptr, Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::GLSCustomCategoryModel_eventGetEnableEditableMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::GLSCustomCategoryModel_eventGetEnableEditableMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSCustomCategoryModel::execGetEnableEditableMode)
{
	P_GET_ENUM(EGLSCustomCetegoryEditableModeType,Z_Param_ModeType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnableEditableMode(EGLSCustomCetegoryEditableModeType(Z_Param_ModeType));
	P_NATIVE_END;
}
// End Class UGLSCustomCategoryModel Function GetEnableEditableMode

// Begin Class UGLSCustomCategoryModel Function SetActiveEditableMode
struct Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics
{
	struct GLSCustomCategoryModel_eventSetActiveEditableMode_Parms
	{
		EGLSCustomCetegoryEditableModeType ModeType;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSCustomCategoryModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModeType;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::NewProp_ModeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::NewProp_ModeType = { "ModeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSCustomCategoryModel_eventSetActiveEditableMode_Parms, ModeType), Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeType_MetaData), NewProp_ModeType_MetaData) }; // 3167743905
void Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSCustomCategoryModel_eventSetActiveEditableMode_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSCustomCategoryModel_eventSetActiveEditableMode_Parms), &Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::NewProp_ModeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::NewProp_ModeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoryModel, nullptr, "SetActiveEditableMode", nullptr, nullptr, Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::GLSCustomCategoryModel_eventSetActiveEditableMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::GLSCustomCategoryModel_eventSetActiveEditableMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSCustomCategoryModel::execSetActiveEditableMode)
{
	P_GET_ENUM(EGLSCustomCetegoryEditableModeType,Z_Param_ModeType);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveEditableMode(EGLSCustomCetegoryEditableModeType(Z_Param_ModeType),Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSCustomCategoryModel Function SetActiveEditableMode

// Begin Class UGLSCustomCategoryModel Function SetEnableEditableMode
struct Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics
{
	struct GLSCustomCategoryModel_eventSetEnableEditableMode_Parms
	{
		EGLSCustomCetegoryEditableModeType ModeType;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSCustomCategoryModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModeType;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::NewProp_ModeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::NewProp_ModeType = { "ModeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSCustomCategoryModel_eventSetEnableEditableMode_Parms, ModeType), Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeType_MetaData), NewProp_ModeType_MetaData) }; // 3167743905
void Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSCustomCategoryModel_eventSetEnableEditableMode_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSCustomCategoryModel_eventSetEnableEditableMode_Parms), &Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::NewProp_ModeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::NewProp_ModeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoryModel, nullptr, "SetEnableEditableMode", nullptr, nullptr, Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::GLSCustomCategoryModel_eventSetEnableEditableMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::GLSCustomCategoryModel_eventSetEnableEditableMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSCustomCategoryModel::execSetEnableEditableMode)
{
	P_GET_ENUM(EGLSCustomCetegoryEditableModeType,Z_Param_ModeType);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableEditableMode(EGLSCustomCetegoryEditableModeType(Z_Param_ModeType),Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSCustomCategoryModel Function SetEnableEditableMode

// Begin Class UGLSCustomCategoryModel
void UGLSCustomCategoryModel::StaticRegisterNativesUGLSCustomCategoryModel()
{
	UClass* Class = UGLSCustomCategoryModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_GetCategoryEnable", &UGLSCustomCategoryModel::execBP_GetCategoryEnable },
		{ "ChangeCategoryEnable", &UGLSCustomCategoryModel::execChangeCategoryEnable },
		{ "GetActiveEditableMode", &UGLSCustomCategoryModel::execGetActiveEditableMode },
		{ "GetEnableEditableMode", &UGLSCustomCategoryModel::execGetEnableEditableMode },
		{ "SetActiveEditableMode", &UGLSCustomCategoryModel::execSetActiveEditableMode },
		{ "SetEnableEditableMode", &UGLSCustomCategoryModel::execSetEnableEditableMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSCustomCategoryModel);
UClass* Z_Construct_UClass_UGLSCustomCategoryModel_NoRegister()
{
	return UGLSCustomCategoryModel::StaticClass();
}
struct Z_Construct_UClass_UGLSCustomCategoryModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Models/GLSCustomCategoryModel.h" },
		{ "ModuleRelativePath", "Public/Models/GLSCustomCategoryModel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSCustomCategoryModel_BP_GetCategoryEnable, "BP_GetCategoryEnable" }, // 1633846200
		{ &Z_Construct_UFunction_UGLSCustomCategoryModel_ChangeCategoryEnable, "ChangeCategoryEnable" }, // 2283727603
		{ &Z_Construct_UFunction_UGLSCustomCategoryModel_GetActiveEditableMode, "GetActiveEditableMode" }, // 817342414
		{ &Z_Construct_UFunction_UGLSCustomCategoryModel_GetEnableEditableMode, "GetEnableEditableMode" }, // 608830345
		{ &Z_Construct_UFunction_UGLSCustomCategoryModel_SetActiveEditableMode, "SetActiveEditableMode" }, // 1311209604
		{ &Z_Construct_UFunction_UGLSCustomCategoryModel_SetEnableEditableMode, "SetEnableEditableMode" }, // 3244492979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSCustomCategoryModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLSCustomCategoryModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSCustomCategoryModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSCustomCategoryModel_Statics::ClassParams = {
	&UGLSCustomCategoryModel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSCustomCategoryModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSCustomCategoryModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSCustomCategoryModel()
{
	if (!Z_Registration_Info_UClass_UGLSCustomCategoryModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSCustomCategoryModel.OuterSingleton, Z_Construct_UClass_UGLSCustomCategoryModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSCustomCategoryModel.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSCustomCategoryModel>()
{
	return UGLSCustomCategoryModel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSCustomCategoryModel);
UGLSCustomCategoryModel::~UGLSCustomCategoryModel() {}
// End Class UGLSCustomCategoryModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSCustomCategoryModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSCustomCategoryModel, UGLSCustomCategoryModel::StaticClass, TEXT("UGLSCustomCategoryModel"), &Z_Registration_Info_UClass_UGLSCustomCategoryModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSCustomCategoryModel), 4294460727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSCustomCategoryModel_h_914180750(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSCustomCategoryModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSCustomCategoryModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
