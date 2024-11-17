// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Subsystems/GLSSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSubsystem();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSubsystem_NoRegister();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSLogType();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_UGLSSubsystem_OnPIEBeginDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGLSSubsystem_OnPIEBeginDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGLSSubsystem_OnPIEBeginDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGLSSubsystem_OnPIEBeginDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSubsystem, nullptr, "OnPIEBeginDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGLSSubsystem_OnPIEBeginDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGLSSubsystem_OnPIEBeginDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UGLSSubsystem_OnPIEBeginDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGLSSubsystem_OnPIEBeginDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGLSSubsystem::FOnPIEBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPIEBeginDelegate)
{
	OnPIEBeginDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UGLSSubsystem::execClearAllLogsData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllLogsData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSSubsystem::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGLSSubsystem**)Z_Param__Result=UGLSSubsystem::Get(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSSubsystem::execPrintStringToGLSWithTags)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Category);
		P_GET_ENUM(EGLSLogType,Z_Param_Verbosity);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGLSSubsystem::PrintStringToGLSWithTags(Z_Param_WorldContextObject,Z_Param_Out_Tags,Z_Param_InString,Z_Param_Category,EGLSLogType(Z_Param_Verbosity),Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Duration,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSSubsystem::execPrintStringToGLS)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Category);
		P_GET_ENUM(EGLSLogType,Z_Param_Verbosity);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGLSSubsystem::PrintStringToGLS(Z_Param_WorldContextObject,Z_Param_InString,Z_Param_Category,EGLSLogType(Z_Param_Verbosity),Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Duration,Z_Param_Key);
		P_NATIVE_END;
	}
	void UGLSSubsystem::StaticRegisterNativesUGLSSubsystem()
	{
		UClass* Class = UGLSSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllLogsData", &UGLSSubsystem::execClearAllLogsData },
			{ "Get", &UGLSSubsystem::execGet },
			{ "PrintStringToGLS", &UGLSSubsystem::execPrintStringToGLS },
			{ "PrintStringToGLSWithTags", &UGLSSubsystem::execPrintStringToGLSWithTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLSSubsystem_ClearAllLogsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_ClearAllLogsData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSubsystem_ClearAllLogsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSubsystem, nullptr, "ClearAllLogsData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_ClearAllLogsData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSubsystem_ClearAllLogsData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGLSSubsystem_ClearAllLogsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSubsystem_ClearAllLogsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSubsystem_Get_Statics
	{
		struct GLSSubsystem_eventGet_Parms
		{
			const UObject* WorldContext;
			UGLSSubsystem* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_Get_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSubsystem_Get_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventGet_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_Get_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UGLSSubsystem_Get_Statics::NewProp_WorldContext_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_UGLSSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSubsystem_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_Get_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DefaultToSelf", "WorldContext" },
		{ "DisplayName", "Get Game Logs Subsystem" },
		{ "HidePin", "WorldContext" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSubsystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSubsystem, nullptr, "Get", nullptr, nullptr, Z_Construct_UFunction_UGLSSubsystem_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSubsystem_Get_Statics::GLSSubsystem_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSubsystem_Get_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_Get_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGLSSubsystem_Get_Statics::GLSSubsystem_eventGet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGLSSubsystem_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSubsystem_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics
	{
		struct GLSSubsystem_eventPrintStringToGLS_Parms
		{
			UObject* WorldContextObject;
			FString InString;
			FString Category;
			EGLSLogType Verbosity;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
			float Duration;
			FName Key;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLS_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLS_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_InString_MetaData), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_InString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLS_Parms, Category), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Category_MetaData), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Category_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Verbosity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLS_Parms, Verbosity), Z_Construct_UEnum_GLSDemo_EGLSLogType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Verbosity_MetaData), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Verbosity_MetaData) }; // 3220187659
	void Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((GLSSubsystem_eventPrintStringToGLS_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSubsystem_eventPrintStringToGLS_Parms), &Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((GLSSubsystem_eventPrintStringToGLS_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSubsystem_eventPrintStringToGLS_Parms), &Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLS_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLS_Parms, Duration), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLS_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Verbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Verbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "GLS" },
		{ "Comment", "/**\n\x09 * Prints a string to the log and GLS overlay, and optionally, to the screen\n\x09 * If Print To Log is true, it will be visible in the Output Log window.  Otherwise it will be logged only as 'Verbose', so it generally won't show up.\n\x09 *\n     * @param   Category        Category to log out\n     * @param   Verbosity       Verbosity to log out\n\x09 * @param\x09InString\x09\x09The string to log out\n\x09 * @param\x09""bPrintToScreen\x09Whether or not to print the output to the screen\n\x09 * @param\x09""bPrintToLog\x09\x09Whether or not to print the output to the log\n\x09 * @param\x09""bPrintToConsole\x09Whether or not to print the output to the console\n\x09 * @param\x09TextColor\x09\x09The color of the text to display\n\x09 * @param\x09""Duration\x09\x09The display duration (if Print to Screen is True). Using negative number will result in loading the duration time from the config.\n\x09 * @param\x09Key\x09\x09\x09\x09If a non-empty key is provided, the message will replace any existing on-screen messages with the same key.\n\x09 */" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Category", "GLS" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_InString", "Hello" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Verbosity", "Display" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
		{ "ToolTip", "Prints a string to the log and GLS overlay, and optionally, to the screen\nIf Print To Log is true, it will be visible in the Output Log window.  Otherwise it will be logged only as 'Verbose', so it generally won't show up.\n\n@param   Category        Category to log out\n@param   Verbosity       Verbosity to log out\n@param       InString                The string to log out\n@param       bPrintToScreen  Whether or not to print the output to the screen\n@param       bPrintToLog             Whether or not to print the output to the log\n@param       bPrintToConsole Whether or not to print the output to the console\n@param       TextColor               The color of the text to display\n@param       Duration                The display duration (if Print to Screen is True). Using negative number will result in loading the duration time from the config.\n@param       Key                             If a non-empty key is provided, the message will replace any existing on-screen messages with the same key." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSubsystem, nullptr, "PrintStringToGLS", nullptr, nullptr, Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::GLSSubsystem_eventPrintStringToGLS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::GLSSubsystem_eventPrintStringToGLS_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics
	{
		struct GLSSubsystem_eventPrintStringToGLSWithTags_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> Tags;
			FString InString;
			FString Category;
			EGLSLogType Verbosity;
			bool bPrintToScreen;
			bool bPrintToLog;
			FLinearColor TextColor;
			float Duration;
			FName Key;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLSWithTags_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLSWithTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Tags_MetaData), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Tags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLSWithTags_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_InString_MetaData), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_InString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLSWithTags_Parms, Category), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Category_MetaData), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Category_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Verbosity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLSWithTags_Parms, Verbosity), Z_Construct_UEnum_GLSDemo_EGLSLogType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Verbosity_MetaData), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Verbosity_MetaData) }; // 3220187659
	void Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((GLSSubsystem_eventPrintStringToGLSWithTags_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSubsystem_eventPrintStringToGLSWithTags_Parms), &Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((GLSSubsystem_eventPrintStringToGLSWithTags_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSSubsystem_eventPrintStringToGLSWithTags_Parms), &Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLSWithTags_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLSWithTags_Parms, Duration), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSSubsystem_eventPrintStringToGLSWithTags_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Verbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Verbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_bPrintToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_bPrintToLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "GLS" },
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Category", "GLS" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_InString", "Hello" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Verbosity", "Display" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSubsystem, nullptr, "PrintStringToGLSWithTags", nullptr, nullptr, Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::GLSSubsystem_eventPrintStringToGLSWithTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::GLSSubsystem_eventPrintStringToGLSWithTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSSubsystem);
	UClass* Z_Construct_UClass_UGLSSubsystem_NoRegister()
	{
		return UGLSSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGLSSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCategoryRecieved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCategoryRecieved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClassNameRecieved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClassNameRecieved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnObjectNameRecieved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectNameRecieved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTagsRecieved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTagsRecieved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVerboseRecieved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVerboseRecieved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPIEStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPIEStarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSSubsystem_ClearAllLogsData, "ClearAllLogsData" }, // 3037013908
		{ &Z_Construct_UFunction_UGLSSubsystem_Get, "Get" }, // 3482870416
		{ &Z_Construct_UDelegateFunction_UGLSSubsystem_OnPIEBeginDelegate__DelegateSignature, "OnPIEBeginDelegate__DelegateSignature" }, // 118587917
		{ &Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLS, "PrintStringToGLS" }, // 3066159712
		{ &Z_Construct_UFunction_UGLSSubsystem_PrintStringToGLSWithTags, "PrintStringToGLSWithTags" }, // 2875014979
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/GLSSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnCategoryRecieved_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnCategoryRecieved = { "OnCategoryRecieved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSSubsystem, OnCategoryRecieved), Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnCategoryRecieved_MetaData), Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnCategoryRecieved_MetaData) }; // 1699837462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnClassNameRecieved_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnClassNameRecieved = { "OnClassNameRecieved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSSubsystem, OnClassNameRecieved), Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnClassNameRecieved_MetaData), Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnClassNameRecieved_MetaData) }; // 1255158242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnObjectNameRecieved_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnObjectNameRecieved = { "OnObjectNameRecieved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSSubsystem, OnObjectNameRecieved), Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnObjectNameRecieved_MetaData), Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnObjectNameRecieved_MetaData) }; // 1999064467
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnTagsRecieved_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnTagsRecieved = { "OnTagsRecieved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSSubsystem, OnTagsRecieved), Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnTagsRecieved_MetaData), Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnTagsRecieved_MetaData) }; // 3572679723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnVerboseRecieved_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnVerboseRecieved = { "OnVerboseRecieved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSSubsystem, OnVerboseRecieved), Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnVerboseRecieved_MetaData), Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnVerboseRecieved_MetaData) }; // 1736599309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnPIEStarted_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Subsystems/GLSSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnPIEStarted = { "OnPIEStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSSubsystem, OnPIEStarted), Z_Construct_UDelegateFunction_UGLSSubsystem_OnPIEBeginDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnPIEStarted_MetaData), Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnPIEStarted_MetaData) }; // 118587917
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnCategoryRecieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnClassNameRecieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnObjectNameRecieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnTagsRecieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnVerboseRecieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSubsystem_Statics::NewProp_OnPIEStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSSubsystem_Statics::ClassParams = {
		&UGLSSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLSSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGLSSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGLSSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSSubsystem.OuterSingleton, Z_Construct_UClass_UGLSSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSSubsystem.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSSubsystem>()
	{
		return UGLSSubsystem::StaticClass();
	}
	UGLSSubsystem::UGLSSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSSubsystem);
	UGLSSubsystem::~UGLSSubsystem() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSSubsystem, UGLSSubsystem::StaticClass, TEXT("UGLSSubsystem"), &Z_Registration_Info_UClass_UGLSSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSSubsystem), 2820460045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_1443857288(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_3_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Subsystems_GLSSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
