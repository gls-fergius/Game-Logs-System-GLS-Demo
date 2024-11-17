// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/Models/GLSLogInfoObject.h"
#include "GLSDemo/Public/Types/GLSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSLogInfoObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogInfoObject();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogInfoObject_NoRegister();
GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature();
GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSLogInfo();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Delegate FOnLogSelected
struct Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics
{
	struct GLSLogInfoObject_eventOnLogSelected_Parms
	{
		UGLSLogInfoObject* Model;
		bool bSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Models/GLSLogInfoObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSLogInfoObject_eventOnLogSelected_Parms, Model), Z_Construct_UClass_UGLSLogInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((GLSLogInfoObject_eventOnLogSelected_Parms*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSLogInfoObject_eventOnLogSelected_Parms), &Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelected_MetaData), NewProp_bSelected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::NewProp_bSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogInfoObject, nullptr, "OnLogSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::GLSLogInfoObject_eventOnLogSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature_Statics::GLSLogInfoObject_eventOnLogSelected_Parms) < MAX_uint16);
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
// End Delegate FOnLogSelected

// Begin Class UGLSLogInfoObject Function GetLogInfo
struct Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics
{
	struct GLSLogInfoObject_eventGetLogInfo_Parms
	{
		FGLSLogInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSLogInfoObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSLogInfoObject_eventGetLogInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGLSLogInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1537936799
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogInfoObject, nullptr, "GetLogInfo", nullptr, nullptr, Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::GLSLogInfoObject_eventGetLogInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::GLSLogInfoObject_eventGetLogInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSLogInfoObject::execGetLogInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGLSLogInfo*)Z_Param__Result=P_THIS->GetLogInfo();
	P_NATIVE_END;
}
// End Class UGLSLogInfoObject Function GetLogInfo

// Begin Class UGLSLogInfoObject Function LogSelected
struct Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics
{
	struct GLSLogInfoObject_eventLogSelected_Parms
	{
		bool bSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSLogInfoObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((GLSLogInfoObject_eventLogSelected_Parms*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSLogInfoObject_eventLogSelected_Parms), &Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::NewProp_bSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogInfoObject, nullptr, "LogSelected", nullptr, nullptr, Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::GLSLogInfoObject_eventLogSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::GLSLogInfoObject_eventLogSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSLogInfoObject_LogSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSLogInfoObject_LogSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSLogInfoObject::execLogSelected)
{
	P_GET_UBOOL(Z_Param_bSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogSelected(Z_Param_bSelected);
	P_NATIVE_END;
}
// End Class UGLSLogInfoObject Function LogSelected

// Begin Class UGLSLogInfoObject
void UGLSLogInfoObject::StaticRegisterNativesUGLSLogInfoObject()
{
	UClass* Class = UGLSLogInfoObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLogInfo", &UGLSLogInfoObject::execGetLogInfo },
		{ "LogSelected", &UGLSLogInfoObject::execLogSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSLogInfoObject);
UClass* Z_Construct_UClass_UGLSLogInfoObject_NoRegister()
{
	return UGLSLogInfoObject::StaticClass();
}
struct Z_Construct_UClass_UGLSLogInfoObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Models/GLSLogInfoObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Models/GLSLogInfoObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLogSelected_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Models/GLSLogInfoObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLogSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSLogInfoObject_GetLogInfo, "GetLogInfo" }, // 2776083074
		{ &Z_Construct_UFunction_UGLSLogInfoObject_LogSelected, "LogSelected" }, // 1631951013
		{ &Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature, "OnLogSelected__DelegateSignature" }, // 3643961816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSLogInfoObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSLogInfoObject_Statics::NewProp_OnLogSelected = { "OnLogSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSLogInfoObject, OnLogSelected), Z_Construct_UDelegateFunction_UGLSLogInfoObject_OnLogSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLogSelected_MetaData), NewProp_OnLogSelected_MetaData) }; // 3643961816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSLogInfoObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSLogInfoObject_Statics::NewProp_OnLogSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogInfoObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLSLogInfoObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogInfoObject_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogInfoObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSLogInfoObject_Statics::Class_MetaDataParams)
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
// End Class UGLSLogInfoObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSLogInfoObject, UGLSLogInfoObject::StaticClass, TEXT("UGLSLogInfoObject"), &Z_Registration_Info_UClass_UGLSLogInfoObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSLogInfoObject), 2272683449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_1568108127(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Models_GLSLogInfoObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
