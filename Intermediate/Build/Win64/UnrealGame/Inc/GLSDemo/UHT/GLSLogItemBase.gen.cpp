// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/UI/GLSLogItemBase.h"
#include "GLSDemo/Public/Types/GLSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSLogItemBase() {}

// Begin Cross Module References
GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogInfoObject_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogItemBase();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogItemBase_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSMultiLineEditableText_NoRegister();
GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSLogInfo();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Class UGLSLogItemBase Function GetLogInfo
struct Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics
{
	struct GLSLogItemBase_eventGetLogInfo_Parms
	{
		FGLSLogInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSLogItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSLogItemBase_eventGetLogInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGLSLogInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1537936799
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogItemBase, nullptr, "GetLogInfo", nullptr, nullptr, Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::GLSLogItemBase_eventGetLogInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::GLSLogItemBase_eventGetLogInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSLogItemBase::execGetLogInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGLSLogInfo*)Z_Param__Result=P_THIS->GetLogInfo();
	P_NATIVE_END;
}
// End Class UGLSLogItemBase Function GetLogInfo

// Begin Class UGLSLogItemBase Function InitializeLogItem
static const FName NAME_UGLSLogItemBase_InitializeLogItem = FName(TEXT("InitializeLogItem"));
void UGLSLogItemBase::InitializeLogItem()
{
	UFunction* Func = FindFunctionChecked(NAME_UGLSLogItemBase_InitializeLogItem);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UGLSLogItemBase_InitializeLogItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSLogItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSLogItemBase_InitializeLogItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSLogItemBase, nullptr, "InitializeLogItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSLogItemBase_InitializeLogItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSLogItemBase_InitializeLogItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSLogItemBase_InitializeLogItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSLogItemBase_InitializeLogItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGLSLogItemBase Function InitializeLogItem

// Begin Class UGLSLogItemBase
void UGLSLogItemBase::StaticRegisterNativesUGLSLogItemBase()
{
	UClass* Class = UGLSLogItemBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLogInfo", &UGLSLogItemBase::execGetLogInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSLogItemBase);
UClass* Z_Construct_UClass_UGLSLogItemBase_NoRegister()
{
	return UGLSLogItemBase::StaticClass();
}
struct Z_Construct_UClass_UGLSLogItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSLogItemBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSLogItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextLog_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GLS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GLSLogItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogModelPtr_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSLogItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextLog;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LogModelPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSLogItemBase_GetLogInfo, "GetLogInfo" }, // 1280351120
		{ &Z_Construct_UFunction_UGLSLogItemBase_InitializeLogItem, "InitializeLogItem" }, // 176649499
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSLogItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGLSLogItemBase_Statics::NewProp_EditableTextLog = { "EditableTextLog", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSLogItemBase, EditableTextLog), Z_Construct_UClass_UGLSMultiLineEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextLog_MetaData), NewProp_EditableTextLog_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGLSLogItemBase_Statics::NewProp_LogModelPtr = { "LogModelPtr", nullptr, (EPropertyFlags)0x0124080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSLogItemBase, LogModelPtr), Z_Construct_UClass_UGLSLogInfoObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogModelPtr_MetaData), NewProp_LogModelPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSLogItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSLogItemBase_Statics::NewProp_EditableTextLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSLogItemBase_Statics::NewProp_LogModelPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogItemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLSLogItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGLSLogItemBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UGLSLogItemBase, IUserObjectListEntry), false },  // 228470651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSLogItemBase_Statics::ClassParams = {
	&UGLSLogItemBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGLSLogItemBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogItemBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSLogItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSLogItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSLogItemBase()
{
	if (!Z_Registration_Info_UClass_UGLSLogItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSLogItemBase.OuterSingleton, Z_Construct_UClass_UGLSLogItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSLogItemBase.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSLogItemBase>()
{
	return UGLSLogItemBase::StaticClass();
}
UGLSLogItemBase::UGLSLogItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSLogItemBase);
UGLSLogItemBase::~UGLSLogItemBase() {}
// End Class UGLSLogItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSLogItemBase, UGLSLogItemBase::StaticClass, TEXT("UGLSLogItemBase"), &Z_Registration_Info_UClass_UGLSLogItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSLogItemBase), 2857954487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_214779530(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSLogItemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
