// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Utils/GLSUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSUtils();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	DEFINE_FUNCTION(UGLSUtils::execGetReceivedTags)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=UGLSUtils::GetReceivedTags(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execGetReceivedObjectNames)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=UGLSUtils::GetReceivedObjectNames(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execGetReceivedClassNames)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=UGLSUtils::GetReceivedClassNames(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execGetReceivedCategories)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=UGLSUtils::GetReceivedCategories(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execGetLogsNum)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGLSUtils::GetLogsNum(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execIsLogsEmpty)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGLSUtils::IsLogsEmpty(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execGetMaxObjectsInGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGLSUtils::GetMaxObjectsInGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execOpenGLSEditorSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UGLSUtils::OpenGLSEditorSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execIsEditorContext)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGLSUtils::IsEditorContext(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execIsEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGLSUtils::IsEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execIsMobilePlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGLSUtils::IsMobilePlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execIsConsolePlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGLSUtils::IsConsolePlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSUtils::execIsDesktopPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGLSUtils::IsDesktopPlatform();
		P_NATIVE_END;
	}
	void UGLSUtils::StaticRegisterNativesUGLSUtils()
	{
		UClass* Class = UGLSUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLogsNum", &UGLSUtils::execGetLogsNum },
			{ "GetMaxObjectsInGame", &UGLSUtils::execGetMaxObjectsInGame },
			{ "GetReceivedCategories", &UGLSUtils::execGetReceivedCategories },
			{ "GetReceivedClassNames", &UGLSUtils::execGetReceivedClassNames },
			{ "GetReceivedObjectNames", &UGLSUtils::execGetReceivedObjectNames },
			{ "GetReceivedTags", &UGLSUtils::execGetReceivedTags },
			{ "IsConsolePlatform", &UGLSUtils::execIsConsolePlatform },
			{ "IsDesktopPlatform", &UGLSUtils::execIsDesktopPlatform },
			{ "IsEditor", &UGLSUtils::execIsEditor },
			{ "IsEditorContext", &UGLSUtils::execIsEditorContext },
			{ "IsLogsEmpty", &UGLSUtils::execIsLogsEmpty },
			{ "IsMobilePlatform", &UGLSUtils::execIsMobilePlatform },
			{ "OpenGLSEditorSettings", &UGLSUtils::execOpenGLSEditorSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics
	{
		struct GLSUtils_eventGetLogsNum_Parms
		{
			UObject* Context;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetLogsNum_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetLogsNum_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "GetLogsNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::GLSUtils_eventGetLogsNum_Parms), Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_GetLogsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_GetLogsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics
	{
		struct GLSUtils_eventGetMaxObjectsInGame_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetMaxObjectsInGame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "GetMaxObjectsInGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::GLSUtils_eventGetMaxObjectsInGame_Parms), Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics
	{
		struct GLSUtils_eventGetReceivedCategories_Parms
		{
			UObject* Context;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetReceivedCategories_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetReceivedCategories_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "GetReceivedCategories", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::GLSUtils_eventGetReceivedCategories_Parms), Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_GetReceivedCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_GetReceivedCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics
	{
		struct GLSUtils_eventGetReceivedClassNames_Parms
		{
			UObject* Context;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetReceivedClassNames_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetReceivedClassNames_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "GetReceivedClassNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::GLSUtils_eventGetReceivedClassNames_Parms), Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics
	{
		struct GLSUtils_eventGetReceivedObjectNames_Parms
		{
			UObject* Context;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetReceivedObjectNames_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetReceivedObjectNames_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "GetReceivedObjectNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::GLSUtils_eventGetReceivedObjectNames_Parms), Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics
	{
		struct GLSUtils_eventGetReceivedTags_Parms
		{
			UObject* Context;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetReceivedTags_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventGetReceivedTags_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "GetReceivedTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::GLSUtils_eventGetReceivedTags_Parms), Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_GetReceivedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_GetReceivedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics
	{
		struct GLSUtils_eventIsConsolePlatform_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSUtils_eventIsConsolePlatform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSUtils_eventIsConsolePlatform_Parms), &Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "IsConsolePlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::GLSUtils_eventIsConsolePlatform_Parms), Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_IsConsolePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_IsConsolePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics
	{
		struct GLSUtils_eventIsDesktopPlatform_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSUtils_eventIsDesktopPlatform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSUtils_eventIsDesktopPlatform_Parms), &Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "IsDesktopPlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::GLSUtils_eventIsDesktopPlatform_Parms), Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_IsEditor_Statics
	{
		struct GLSUtils_eventIsEditor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSUtils_eventIsEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSUtils_eventIsEditor_Parms), &Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "IsEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::GLSUtils_eventIsEditor_Parms), Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_IsEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_IsEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics
	{
		struct GLSUtils_eventIsEditorContext_Parms
		{
			UObject* Context;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventIsEditorContext_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSUtils_eventIsEditorContext_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSUtils_eventIsEditorContext_Parms), &Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "Context" },
		{ "HidePin", "Context" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "IsEditorContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::GLSUtils_eventIsEditorContext_Parms), Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_IsEditorContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_IsEditorContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics
	{
		struct GLSUtils_eventIsLogsEmpty_Parms
		{
			UObject* Context;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSUtils_eventIsLogsEmpty_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSUtils_eventIsLogsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSUtils_eventIsLogsEmpty_Parms), &Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "IsLogsEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::GLSUtils_eventIsLogsEmpty_Parms), Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_IsLogsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_IsLogsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics
	{
		struct GLSUtils_eventIsMobilePlatform_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSUtils_eventIsMobilePlatform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSUtils_eventIsMobilePlatform_Parms), &Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "IsMobilePlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::GLSUtils_eventIsMobilePlatform_Parms), Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_IsMobilePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_IsMobilePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSUtils_OpenGLSEditorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSUtils_OpenGLSEditorSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSUtils_OpenGLSEditorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSUtils, nullptr, "OpenGLSEditorSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSUtils_OpenGLSEditorSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSUtils_OpenGLSEditorSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSUtils_OpenGLSEditorSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSUtils_OpenGLSEditorSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSUtils);
	UClass* Z_Construct_UClass_UGLSUtils_NoRegister()
	{
		return UGLSUtils::StaticClass();
	}
	struct Z_Construct_UClass_UGLSUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSUtils_GetLogsNum, "GetLogsNum" }, // 240034486
		{ &Z_Construct_UFunction_UGLSUtils_GetMaxObjectsInGame, "GetMaxObjectsInGame" }, // 1901480969
		{ &Z_Construct_UFunction_UGLSUtils_GetReceivedCategories, "GetReceivedCategories" }, // 747638201
		{ &Z_Construct_UFunction_UGLSUtils_GetReceivedClassNames, "GetReceivedClassNames" }, // 3526609719
		{ &Z_Construct_UFunction_UGLSUtils_GetReceivedObjectNames, "GetReceivedObjectNames" }, // 4240099718
		{ &Z_Construct_UFunction_UGLSUtils_GetReceivedTags, "GetReceivedTags" }, // 2878226380
		{ &Z_Construct_UFunction_UGLSUtils_IsConsolePlatform, "IsConsolePlatform" }, // 461874622
		{ &Z_Construct_UFunction_UGLSUtils_IsDesktopPlatform, "IsDesktopPlatform" }, // 3614216502
		{ &Z_Construct_UFunction_UGLSUtils_IsEditor, "IsEditor" }, // 3740666011
		{ &Z_Construct_UFunction_UGLSUtils_IsEditorContext, "IsEditorContext" }, // 4211358115
		{ &Z_Construct_UFunction_UGLSUtils_IsLogsEmpty, "IsLogsEmpty" }, // 3519274038
		{ &Z_Construct_UFunction_UGLSUtils_IsMobilePlatform, "IsMobilePlatform" }, // 2687636648
		{ &Z_Construct_UFunction_UGLSUtils_OpenGLSEditorSettings, "OpenGLSEditorSettings" }, // 1212752982
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/GLSUtils.h" },
		{ "ModuleRelativePath", "Public/Utils/GLSUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSUtils_Statics::ClassParams = {
		&UGLSUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGLSUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLSUtils()
	{
		if (!Z_Registration_Info_UClass_UGLSUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSUtils.OuterSingleton, Z_Construct_UClass_UGLSUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSUtils.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSUtils>()
	{
		return UGLSUtils::StaticClass();
	}
	UGLSUtils::UGLSUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSUtils);
	UGLSUtils::~UGLSUtils() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSUtils, UGLSUtils::StaticClass, TEXT("UGLSUtils"), &Z_Registration_Info_UClass_UGLSUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSUtils), 1729243937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSUtils_h_449004647(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Utils_GLSUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
