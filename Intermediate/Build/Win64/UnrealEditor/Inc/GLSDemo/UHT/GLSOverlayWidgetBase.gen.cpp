// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/UI/GLSOverlayWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSOverlayWidgetBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSOverlayWidgetBase();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSOverlayWidgetBase_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Class UGLSOverlayWidgetBase
void UGLSOverlayWidgetBase::StaticRegisterNativesUGLSOverlayWidgetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSOverlayWidgetBase);
UClass* Z_Construct_UClass_UGLSOverlayWidgetBase_NoRegister()
{
	return UGLSOverlayWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UGLSOverlayWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSOverlayWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSOverlayWidgetBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/GLSOverlayWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InterfaceArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InterfaceArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSOverlayWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::NewProp_InterfaceArray_Inner = { "InterfaceArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::NewProp_InterfaceArray = { "InterfaceArray", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSOverlayWidgetBase, InterfaceArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceArray_MetaData), NewProp_InterfaceArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::NewProp_InterfaceArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::NewProp_InterfaceArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UGLSOverlayWidgetBase, IGLSSaveSystemInterface), false },  // 3394433589
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::ClassParams = {
	&UGLSOverlayWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSOverlayWidgetBase()
{
	if (!Z_Registration_Info_UClass_UGLSOverlayWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSOverlayWidgetBase.OuterSingleton, Z_Construct_UClass_UGLSOverlayWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSOverlayWidgetBase.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSOverlayWidgetBase>()
{
	return UGLSOverlayWidgetBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSOverlayWidgetBase);
UGLSOverlayWidgetBase::~UGLSOverlayWidgetBase() {}
// End Class UGLSOverlayWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSOverlayWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSOverlayWidgetBase, UGLSOverlayWidgetBase::StaticClass, TEXT("UGLSOverlayWidgetBase"), &Z_Registration_Info_UClass_UGLSOverlayWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSOverlayWidgetBase), 3455765147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSOverlayWidgetBase_h_236389323(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSOverlayWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_4_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSOverlayWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
