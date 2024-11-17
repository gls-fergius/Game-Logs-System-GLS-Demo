// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/UI/GLSListView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSListView() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSListView();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSListView_NoRegister();
GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UListView();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Delegate FGeneratedEntryWidgetDelegate
struct Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics
{
	struct _Script_GLSDemo_eventGeneratedEntryWidgetDelegate_Parms
	{
		UObject* Model;
		UUserWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GLSListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GLSDemo_eventGeneratedEntryWidgetDelegate_Parms, Model), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GLSDemo_eventGeneratedEntryWidgetDelegate_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GLSDemo, nullptr, "GeneratedEntryWidgetDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::_Script_GLSDemo_eventGeneratedEntryWidgetDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::_Script_GLSDemo_eventGeneratedEntryWidgetDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGeneratedEntryWidgetDelegate_DelegateWrapper(const FMulticastScriptDelegate& GeneratedEntryWidgetDelegate, UObject* Model, UUserWidget* Widget)
{
	struct _Script_GLSDemo_eventGeneratedEntryWidgetDelegate_Parms
	{
		UObject* Model;
		UUserWidget* Widget;
	};
	_Script_GLSDemo_eventGeneratedEntryWidgetDelegate_Parms Parms;
	Parms.Model=Model;
	Parms.Widget=Widget;
	GeneratedEntryWidgetDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGeneratedEntryWidgetDelegate

// Begin Class UGLSListView
void UGLSListView::StaticRegisterNativesUGLSListView()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSListView);
UClass* Z_Construct_UClass_UGLSListView_NoRegister()
{
	return UGLSListView::StaticClass();
}
struct Z_Construct_UClass_UGLSListView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSListView.h" },
		{ "ModuleRelativePath", "Public/UI/GLSListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGeneratedEntryWidget_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGeneratedEntryWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSListView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSListView_Statics::NewProp_OnGeneratedEntryWidget = { "OnGeneratedEntryWidget", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSListView, OnGeneratedEntryWidget), Z_Construct_UDelegateFunction_GLSDemo_GeneratedEntryWidgetDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGeneratedEntryWidget_MetaData), NewProp_OnGeneratedEntryWidget_MetaData) }; // 4158108942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSListView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSListView_Statics::NewProp_OnGeneratedEntryWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSListView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLSListView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListView,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSListView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSListView_Statics::ClassParams = {
	&UGLSListView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGLSListView_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGLSListView_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSListView_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSListView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSListView()
{
	if (!Z_Registration_Info_UClass_UGLSListView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSListView.OuterSingleton, Z_Construct_UClass_UGLSListView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSListView.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSListView>()
{
	return UGLSListView::StaticClass();
}
UGLSListView::UGLSListView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSListView);
UGLSListView::~UGLSListView() {}
// End Class UGLSListView

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSListView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSListView, UGLSListView::StaticClass, TEXT("UGLSListView"), &Z_Registration_Info_UClass_UGLSListView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSListView), 1405318619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSListView_h_4130519193(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSListView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSListView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
