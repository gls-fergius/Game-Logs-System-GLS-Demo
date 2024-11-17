// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Models/GLSLogInfoObject.h"
#include "../Types/GLSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSLogInfoObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogInfoObject();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogInfoObject_NoRegister();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSLogInfo();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics
	{
		struct GLSLogInfoObject_eventOnLogSelected_Parms
		{
			UGLSLogInfoObject* Model;
			bool bSelected;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSLogInfoObject_eventOnLogSelected_Parms, Model), Z_Construct_UClass_UGLSLogInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((GLSLogInfoObject_eventOnLogSelected_Parms*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSLogInfoObject_eventOnLogSelected_Parms), &Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Models/GLSLogInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogInfoObject, nullptr, "OnLogSelected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::GLSLogInfoObject_eventOnLogSelected_Parms), Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGLSLogInfoObject::FOnLogSelected_DelegateWrapper(const FMulticastScriptDelegate& OnLogSelected, UGLSLogInfoObject* Model, bool bSelected)
{
	struct GLSLogInfoObject_eventOnLogSelected_Parms
	{
		UGLSLogInfoObject* Model;
		bool bSelected;
	};
	GLSLogInfoObject_eventOnLogSelected_Parms Parms;
	Parms.Model=Model;
	Parms.bSelected=bSelected ? true : false;
	OnLogSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGLSLogInfoObject::execGetLogInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGLSLogInfo*)Z_Param__Result=P_THIS->GetLogInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSLogInfoObject::execLogSelected)
	{
		P_GET_UBOOL(Z_Param_bSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogSelected(Z_Param_bSelected);
		P_NATIVE_END;
	}
	void UGLSLogInfoObject::StaticRegisterNativesUGLSLogInfoObject()
	{
		UClass* Class = UGLSLogInfoObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLogInfo", &UGLSLogInfoObject::execGetLogInfo },
			{ "LogSelected", &UGLSLogInfoObject::execLogSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics
	{
		struct GLSLogInfoObject_eventGetLogInfo_Parms
		{
			FGLSLogInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSLogInfoObject_eventGetLogInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGLSLogInfo, METADATA_PARAMS(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::NewProp_ReturnValue_MetaData)) }; // 397973701
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSLogInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogInfoObject, nullptr, "GetLogInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::GLSLogInfoObject_eventGetLogInfo_Parms), Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics
	{
		struct GLSLogInfoObject_eventLogSelected_Parms
		{
			bool bSelected;
		};
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((GLSLogInfoObject_eventLogSelected_Parms*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSLogInfoObject_eventLogSelected_Parms), &Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::NewProp_bSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSLogInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogInfoObject, nullptr, "LogSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::GLSLogInfoObject_eventLogSelected_Parms), Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSLogInfoObject_LogSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSLogInfoObject);
	UClass* Z_Construct_UClass_UGLSLogInfoObject_NoRegister()
	{
		return UGLSLogInfoObject::StaticClass();
	}
	struct Z_Construct_UClass_UGLSLogInfoObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLogSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLogSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSLogInfoObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSLogInfoObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo, "GetLogInfo" }, // 82598698
		{ &Z_Construct_UFunction_UGLSLogInfoObject_LogSelected, "LogSelected" }, // 913557779
		{ &Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature, "OnLogSelected__DelegateSignature" }, // 620807435
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSLogInfoObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Models/GLSLogInfoObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Models/GLSLogInfoObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSLogInfoObject_Statics::NewProp_OnLogSelected_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSLogInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSLogInfoObject_Statics::NewProp_OnLogSelected = { "OnLogSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSLogInfoObject, OnLogSelected), Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLSLogInfoObject_Statics::NewProp_OnLogSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogInfoObject_Statics::NewProp_OnLogSelected_MetaData)) }; // 620807435
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSLogInfoObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSLogInfoObject_Statics::NewProp_OnLogSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSLogInfoObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSLogInfoObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSLogInfoObject_Statics::ClassParams = {
		&UGLSLogInfoObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLSLogInfoObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogInfoObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLSLogInfoObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogInfoObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLSLogInfoObject()
	{
		if (!Z_Registration_Info_UClass_UGLSLogInfoObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSLogInfoObject.OuterSingleton, Z_Construct_UClass_UGLSLogInfoObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSLogInfoObject.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSLogInfoObject>()
	{
		return UGLSLogInfoObject::StaticClass();
	}
	UGLSLogInfoObject::UGLSLogInfoObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSLogInfoObject);
	UGLSLogInfoObject::~UGLSLogInfoObject() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSLogInfoObject, UGLSLogInfoObject::StaticClass, TEXT("UGLSLogInfoObject"), &Z_Registration_Info_UClass_UGLSLogInfoObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSLogInfoObject), 1648302916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_1183971880(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
