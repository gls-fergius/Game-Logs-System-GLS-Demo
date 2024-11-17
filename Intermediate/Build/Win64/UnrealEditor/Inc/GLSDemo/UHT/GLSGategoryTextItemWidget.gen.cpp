// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/UI/GLSGategoryTextItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSGategoryTextItemWidget() {}

// Begin Cross Module References
GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoryModel_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSGategoryTextItemWidget();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSGategoryTextItemWidget_NoRegister();
GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Delegate FCategoryButtonClickDelegate
struct Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics
{
	struct _Script_GLSDemo_eventCategoryButtonClickDelegate_Parms
	{
		UGLSGategoryTextItemWidget* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GLSGategoryTextItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GLSDemo_eventCategoryButtonClickDelegate_Parms, Button), Z_Construct_UClass_UGLSGategoryTextItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GLSDemo, nullptr, "CategoryButtonClickDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::_Script_GLSDemo_eventCategoryButtonClickDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::_Script_GLSDemo_eventCategoryButtonClickDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GLSDemo_CategoryButtonClickDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCategoryButtonClickDelegate_DelegateWrapper(const FMulticastScriptDelegate& CategoryButtonClickDelegate, UGLSGategoryTextItemWidget* Button)
{
	struct _Script_GLSDemo_eventCategoryButtonClickDelegate_Parms
	{
		UGLSGategoryTextItemWidget* Button;
	};
	_Script_GLSDemo_eventCategoryButtonClickDelegate_Parms Parms;
	Parms.Button=Button;
	CategoryButtonClickDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCategoryButtonClickDelegate

// Begin Class UGLSGategoryTextItemWidget Function GetCategoryName
struct Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics
{
	struct GLSGategoryTextItemWidget_eventGetCategoryName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSGategoryTextItemWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSGategoryTextItemWidget_eventGetCategoryName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSGategoryTextItemWidget, nullptr, "GetCategoryName", nullptr, nullptr, Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::GLSGategoryTextItemWidget_eventGetCategoryName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::GLSGategoryTextItemWidget_eventGetCategoryName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSGategoryTextItemWidget::execGetCategoryName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetCategoryName();
	P_NATIVE_END;
}
// End Class UGLSGategoryTextItemWidget Function GetCategoryName

// Begin Class UGLSGategoryTextItemWidget Function GetGategoryButtonEnabled
struct Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics
{
	struct GLSGategoryTextItemWidget_eventGetGategoryButtonEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSGategoryTextItemWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSGategoryTextItemWidget_eventGetGategoryButtonEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSGategoryTextItemWidget_eventGetGategoryButtonEnabled_Parms), &Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSGategoryTextItemWidget, nullptr, "GetGategoryButtonEnabled", nullptr, nullptr, Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::GLSGategoryTextItemWidget_eventGetGategoryButtonEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::GLSGategoryTextItemWidget_eventGetGategoryButtonEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSGategoryTextItemWidget::execGetGategoryButtonEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGategoryButtonEnabled();
	P_NATIVE_END;
}
// End Class UGLSGategoryTextItemWidget Function GetGategoryButtonEnabled

// Begin Class UGLSGategoryTextItemWidget
void UGLSGategoryTextItemWidget::StaticRegisterNativesUGLSGategoryTextItemWidget()
{
	UClass* Class = UGLSGategoryTextItemWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCategoryName", &UGLSGategoryTextItemWidget::execGetCategoryName },
		{ "GetGategoryButtonEnabled", &UGLSGategoryTextItemWidget::execGetGategoryButtonEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSGategoryTextItemWidget);
UClass* Z_Construct_UClass_UGLSGategoryTextItemWidget_NoRegister()
{
	return UGLSGategoryTextItemWidget::StaticClass();
}
struct Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSGategoryTextItemWidget.h" },
		{ "ModuleRelativePath", "Public/UI/GLSGategoryTextItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GLS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GLSGategoryTextItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelObject_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSGategoryTextItemWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CategoryNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModelObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetCategoryName, "GetCategoryName" }, // 1258506408
		{ &Z_Construct_UFunction_UGLSGategoryTextItemWidget_GetGategoryButtonEnabled, "GetGategoryButtonEnabled" }, // 1104744576
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSGategoryTextItemWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::NewProp_CategoryNameText = { "CategoryNameText", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSGategoryTextItemWidget, CategoryNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryNameText_MetaData), NewProp_CategoryNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::NewProp_ModelObject = { "ModelObject", nullptr, (EPropertyFlags)0x0124080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSGategoryTextItemWidget, ModelObject), Z_Construct_UClass_UGLSCustomCategoryModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelObject_MetaData), NewProp_ModelObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::NewProp_CategoryNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::NewProp_ModelObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UGLSGategoryTextItemWidget, IUserObjectListEntry), false },  // 228470651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::ClassParams = {
	&UGLSGategoryTextItemWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSGategoryTextItemWidget()
{
	if (!Z_Registration_Info_UClass_UGLSGategoryTextItemWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSGategoryTextItemWidget.OuterSingleton, Z_Construct_UClass_UGLSGategoryTextItemWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSGategoryTextItemWidget.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSGategoryTextItemWidget>()
{
	return UGLSGategoryTextItemWidget::StaticClass();
}
UGLSGategoryTextItemWidget::UGLSGategoryTextItemWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSGategoryTextItemWidget);
UGLSGategoryTextItemWidget::~UGLSGategoryTextItemWidget() {}
// End Class UGLSGategoryTextItemWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSGategoryTextItemWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSGategoryTextItemWidget, UGLSGategoryTextItemWidget::StaticClass, TEXT("UGLSGategoryTextItemWidget"), &Z_Registration_Info_UClass_UGLSGategoryTextItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSGategoryTextItemWidget), 4179755282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSGategoryTextItemWidget_h_1337160745(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSGategoryTextItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSGategoryTextItemWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
