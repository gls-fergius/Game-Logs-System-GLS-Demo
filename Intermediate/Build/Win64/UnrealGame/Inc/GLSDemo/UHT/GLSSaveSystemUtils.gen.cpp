// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Utils/GLSSaveSystemUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSSaveSystemUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemUtils();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemUtils_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
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
	DEFINE_FUNCTION(UGLSSaveSystemUtils::execGetSelectedTabName)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGLSSaveSystemUtils::GetSelectedTabName(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSSaveSystemUtils::execGetTabNamesFromSave)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UGLSSaveSystemUtils::GetTabNamesFromSave(Z_Param_Context);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UGLSSaveSystemUtils::execCleanSaveDataByTabName)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_PROPERTY(FStrProperty,Z_Param_TabName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGLSSaveSystemUtils::CleanSaveDataByTabName(Z_Param_Context,Z_Param_TabName);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UGLSSaveSystemUtils::execRequestSaveDataRecursive)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGLSSaveSystemUtils::RequestSaveDataRecursive(Z_Param_Widget);
		P_NATIVE_END;
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
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics
	{
		struct GLSSaveSystemUtils_eventCleanSaveDataByTabName_Parms
		{
			UObject* Context;
			FString TabName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventCleanSaveDataByTabName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventCleanSaveDataByTabName_Parms, TabName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_TabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_TabName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::NewProp_TabName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "CleanSaveDataByTabName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::GLSSaveSystemUtils_eventCleanSaveDataByTabName_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics
	{
		struct GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms
		{
			UObject* Context;
			FString TabName;
			bool bEnable;
			bool bForceCleanParams;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceCleanParams_MetaData[];
#endif
		static void NewProp_bForceCleanParams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCleanParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms, TabName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_TabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_TabName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams_SetBit(void* Obj)
	{
		((GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms*)Obj)->bForceCleanParams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams = { "bForceCleanParams", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_TabName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::NewProp_bForceCleanParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "EnableSaveDataByTabName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::GLSSaveSystemUtils_eventEnableSaveDataByTabName_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics
	{
		struct GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms
		{
			const UObject* Context;
			FString TabName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms, TabName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_TabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_TabName_MetaData)) };
	void Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_TabName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetEnableSaveDataByTabName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::GLSSaveSystemUtils_eventGetEnableSaveDataByTabName_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics
	{
		struct GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms
		{
			UObject* Context;
			FString ParamName;
			bool OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static void NewProp_OutValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ParamName_MetaData)) };
	void Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_OutValue_SetBit(void* Obj)
	{
		((GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms*)Obj)->OutValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_OutValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetSaveValueAsBoolean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::GLSSaveSystemUtils_eventGetSaveValueAsBoolean_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics
	{
		struct GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms
		{
			UObject* Context;
			FString ParamName;
			int32 OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetSaveValueAsInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::GLSSaveSystemUtils_eventGetSaveValueAsInteger_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics
	{
		struct GLSSaveSystemUtils_eventGetSaveValueAsString_Parms
		{
			UObject* Context;
			FString ParamName;
			FString OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsString_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsString_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSaveValueAsString_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSSaveSystemUtils_eventGetSaveValueAsString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSSaveSystemUtils_eventGetSaveValueAsString_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetSaveValueAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::GLSSaveSystemUtils_eventGetSaveValueAsString_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics
	{
		struct GLSSaveSystemUtils_eventGetSelectedTabName_Parms
		{
			UObject* Context;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSelectedTabName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetSelectedTabName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetSelectedTabName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::GLSSaveSystemUtils_eventGetSelectedTabName_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics
	{
		struct GLSSaveSystemUtils_eventGetTabNamesFromSave_Parms
		{
			UObject* Context;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetTabNamesFromSave_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventGetTabNamesFromSave_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "GetTabNamesFromSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::GLSSaveSystemUtils_eventGetTabNamesFromSave_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics
	{
		struct GLSSaveSystemUtils_eventMakeSaveParamName_Parms
		{
			UObject* Context;
			FString VariableName;
			FString ParamName;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventMakeSaveParamName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventMakeSaveParamName_Parms, VariableName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventMakeSaveParamName_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventMakeSaveParamName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "MakeSaveParamName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::GLSSaveSystemUtils_eventMakeSaveParamName_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics
	{
		struct GLSSaveSystemUtils_eventRemoveSaveDataByTabName_Parms
		{
			UObject* Context;
			FString TabName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventRemoveSaveDataByTabName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventRemoveSaveDataByTabName_Parms, TabName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_TabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_TabName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::NewProp_TabName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "RemoveSaveDataByTabName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::GLSSaveSystemUtils_eventRemoveSaveDataByTabName_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics
	{
		struct GLSSaveSystemUtils_eventRequestSaveDataRecursive_Parms
		{
			UWidget* Widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventRequestSaveDataRecursive_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "RequestSaveDataRecursive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::GLSSaveSystemUtils_eventRequestSaveDataRecursive_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics
	{
		struct GLSSaveSystemUtils_eventSetParentTabNameRecursive_Parms
		{
			UWidget* Widget;
			FString TabName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventSetParentTabNameRecursive_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventSetParentTabNameRecursive_Parms, TabName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_TabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_TabName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::NewProp_TabName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "SetParentTabNameRecursive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::GLSSaveSystemUtils_eventSetParentTabNameRecursive_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics
	{
		struct GLSSaveSystemUtils_eventSetSelectedTabByName_Parms
		{
			UObject* Context;
			FString TabName;
			bool bSelected;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventSetSelectedTabByName_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSaveSystemUtils_eventSetSelectedTabByName_Parms, TabName), METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_TabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_TabName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((GLSSaveSystemUtils_eventSetSelectedTabByName_Parms*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSSaveSystemUtils_eventSetSelectedTabByName_Parms), &Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_TabName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::NewProp_bSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSaveSystemUtils, nullptr, "SetSelectedTabByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::GLSSaveSystemUtils_eventSetSelectedTabByName_Parms), Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSSaveSystemUtils);
	UClass* Z_Construct_UClass_UGLSSaveSystemUtils_NoRegister()
	{
		return UGLSSaveSystemUtils::StaticClass();
	}
	struct Z_Construct_UClass_UGLSSaveSystemUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSSaveSystemUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSSaveSystemUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_CleanSaveDataByTabName, "CleanSaveDataByTabName" }, // 1071231053
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_EnableSaveDataByTabName, "EnableSaveDataByTabName" }, // 2238700862
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetEnableSaveDataByTabName, "GetEnableSaveDataByTabName" }, // 1134779123
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsBoolean, "GetSaveValueAsBoolean" }, // 1416269110
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsInteger, "GetSaveValueAsInteger" }, // 2482254830
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSaveValueAsString, "GetSaveValueAsString" }, // 1195450441
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetSelectedTabName, "GetSelectedTabName" }, // 1197879788
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_GetTabNamesFromSave, "GetTabNamesFromSave" }, // 1657062447
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_MakeSaveParamName, "MakeSaveParamName" }, // 2468257387
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_RemoveSaveDataByTabName, "RemoveSaveDataByTabName" }, // 2092305681
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_RequestSaveDataRecursive, "RequestSaveDataRecursive" }, // 3093687514
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_SetParentTabNameRecursive, "SetParentTabNameRecursive" }, // 2534127047
		{ &Z_Construct_UFunction_UGLSSaveSystemUtils_SetSelectedTabByName, "SetSelectedTabByName" }, // 2250701760
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSaveSystemUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/GLSSaveSystemUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/GLSSaveSystemUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSSaveSystemUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSSaveSystemUtils>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UGLSSaveSystemUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSaveSystemUtils_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSSaveSystemUtils, UGLSSaveSystemUtils::StaticClass, TEXT("UGLSSaveSystemUtils"), &Z_Registration_Info_UClass_UGLSSaveSystemUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSSaveSystemUtils), 3506918056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_4052682567(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSSaveSystemUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
