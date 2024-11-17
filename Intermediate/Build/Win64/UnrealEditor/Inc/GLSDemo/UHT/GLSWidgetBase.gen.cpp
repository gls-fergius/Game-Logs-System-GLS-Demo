// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSDemo/Public/UI/GLSWidgetBase.h"
#include "GLSDemo/Public/Types/GLSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSWidgetBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSListView_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogItemBase_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSWidgetBase();
GLSDEMO_API UClass* Z_Construct_UClass_UGLSWidgetBase_NoRegister();
GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSLogType();
GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature();
GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FFilteredLog();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References

// Begin Delegate FFiltersRemovedDelegate
struct Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "FiltersRemovedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGLSWidgetBase::FFiltersRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& FiltersRemovedDelegate)
{
	FiltersRemovedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FFiltersRemovedDelegate

// Begin Class UGLSWidgetBase Function ApplyFilterByCategories
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics
{
	struct GLSWidgetBase_eventApplyFilterByCategories_Parms
	{
		TArray<FName> Categories;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Categories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByCategories_Parms, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Categories_MetaData), NewProp_Categories_MetaData) };
void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSWidgetBase_eventApplyFilterByCategories_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByCategories_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByCategories", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::GLSWidgetBase_eventApplyFilterByCategories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::GLSWidgetBase_eventApplyFilterByCategories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByCategories)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_Categories);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFilterByCategories(Z_Param_Out_Categories,Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFilterByCategories

// Begin Class UGLSWidgetBase Function ApplyFilterByCategory
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics
{
	struct GLSWidgetBase_eventApplyFilterByCategory_Parms
	{
		FName Category;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByCategory_Parms, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSWidgetBase_eventApplyFilterByCategory_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByCategory_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByCategory", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::GLSWidgetBase_eventApplyFilterByCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::GLSWidgetBase_eventApplyFilterByCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByCategory)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Category);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFilterByCategory(Z_Param_Out_Category,Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFilterByCategory

// Begin Class UGLSWidgetBase Function ApplyFilterByClassName
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics
{
	struct GLSWidgetBase_eventApplyFilterByClassName_Parms
	{
		FName ClassName;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByClassName_Parms, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSWidgetBase_eventApplyFilterByClassName_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByClassName_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByClassName", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::GLSWidgetBase_eventApplyFilterByClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::GLSWidgetBase_eventApplyFilterByClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByClassName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ClassName);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFilterByClassName(Z_Param_Out_ClassName,Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFilterByClassName

// Begin Class UGLSWidgetBase Function ApplyFilterByClassNames
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics
{
	struct GLSWidgetBase_eventApplyFilterByClassNames_Parms
	{
		TArray<FName> ClassNames;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassNames_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassNames;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames_Inner = { "ClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames = { "ClassNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByClassNames_Parms, ClassNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassNames_MetaData), NewProp_ClassNames_MetaData) };
void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSWidgetBase_eventApplyFilterByClassNames_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByClassNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByClassNames", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::GLSWidgetBase_eventApplyFilterByClassNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::GLSWidgetBase_eventApplyFilterByClassNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByClassNames)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_ClassNames);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFilterByClassNames(Z_Param_Out_ClassNames,Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFilterByClassNames

// Begin Class UGLSWidgetBase Function ApplyFilterByLogType
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics
{
	struct GLSWidgetBase_eventApplyFilterByLogType_Parms
	{
		EGLSLogType Verbosity;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByLogType_Parms, Verbosity), Z_Construct_UEnum_GLSDemo_EGLSLogType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Verbosity_MetaData), NewProp_Verbosity_MetaData) }; // 4172598178
void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSWidgetBase_eventApplyFilterByLogType_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByLogType_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByLogType", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::GLSWidgetBase_eventApplyFilterByLogType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::GLSWidgetBase_eventApplyFilterByLogType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByLogType)
{
	P_GET_ENUM(EGLSLogType,Z_Param_Verbosity);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFilterByLogType(EGLSLogType(Z_Param_Verbosity),Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFilterByLogType

// Begin Class UGLSWidgetBase Function ApplyFilterByLogTypes
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics
{
	struct GLSWidgetBase_eventApplyFilterByLogTypes_Parms
	{
		TArray<EGLSLogType> Types;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Types_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Types_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Types;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_Inner = { "Types", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_GLSDemo_EGLSLogType, METADATA_PARAMS(0, nullptr) }; // 4172598178
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByLogTypes_Parms, Types), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Types_MetaData), NewProp_Types_MetaData) }; // 4172598178
void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSWidgetBase_eventApplyFilterByLogTypes_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByLogTypes_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByLogTypes", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::GLSWidgetBase_eventApplyFilterByLogTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::GLSWidgetBase_eventApplyFilterByLogTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByLogTypes)
{
	P_GET_TARRAY_REF(EGLSLogType,Z_Param_Out_Types);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFilterByLogTypes(Z_Param_Out_Types,Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFilterByLogTypes

// Begin Class UGLSWidgetBase Function ApplyFilterByObjectName
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics
{
	struct GLSWidgetBase_eventApplyFilterByObjectName_Parms
	{
		FName ObjectName;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByObjectName_Parms, ObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectName_MetaData), NewProp_ObjectName_MetaData) };
void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSWidgetBase_eventApplyFilterByObjectName_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByObjectName_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_ObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByObjectName", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::GLSWidgetBase_eventApplyFilterByObjectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::GLSWidgetBase_eventApplyFilterByObjectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByObjectName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ObjectName);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFilterByObjectName(Z_Param_Out_ObjectName,Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFilterByObjectName

// Begin Class UGLSWidgetBase Function ApplyFilterByTag
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics
{
	struct GLSWidgetBase_eventApplyFilterByTag_Parms
	{
		FName Tag;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByTag_Parms, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSWidgetBase_eventApplyFilterByTag_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByTag_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByTag", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::GLSWidgetBase_eventApplyFilterByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::GLSWidgetBase_eventApplyFilterByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByTag)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFilterByTag(Z_Param_Out_Tag,Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFilterByTag

// Begin Class UGLSWidgetBase Function ApplyFilterByTags
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics
{
	struct GLSWidgetBase_eventApplyFilterByTags_Parms
	{
		TArray<FName> Tags;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSWidgetBase_eventApplyFilterByTags_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByTags_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByTags", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::GLSWidgetBase_eventApplyFilterByTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::GLSWidgetBase_eventApplyFilterByTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByTags)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_Tags);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFilterByTags(Z_Param_Out_Tags,Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFilterByTags

// Begin Class UGLSWidgetBase Function ApplyFilterByText
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics
{
	struct GLSWidgetBase_eventApplyFilterByText_Parms
	{
		FText TextFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TextFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::NewProp_TextFilter = { "TextFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByText_Parms, TextFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextFilter_MetaData), NewProp_TextFilter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::NewProp_TextFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByText", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::GLSWidgetBase_eventApplyFilterByText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::GLSWidgetBase_eventApplyFilterByText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TextFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFilterByText(Z_Param_Out_TextFilter);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFilterByText

// Begin Class UGLSWidgetBase Function ApplyFiltersByObjectNames
struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics
{
	struct GLSWidgetBase_eventApplyFiltersByObjectNames_Parms
	{
		TArray<FName> ObjectNames;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectNames_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectNames;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames_Inner = { "ObjectNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames = { "ObjectNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventApplyFiltersByObjectNames_Parms, ObjectNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectNames_MetaData), NewProp_ObjectNames_MetaData) };
void Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GLSWidgetBase_eventApplyFiltersByObjectNames_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFiltersByObjectNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFiltersByObjectNames", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::GLSWidgetBase_eventApplyFiltersByObjectNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::GLSWidgetBase_eventApplyFiltersByObjectNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execApplyFiltersByObjectNames)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_ObjectNames);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFiltersByObjectNames(Z_Param_Out_ObjectNames,Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ApplyFiltersByObjectNames

// Begin Class UGLSWidgetBase Function ClearFilters
struct Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ClearFilters", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ClearFilters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execClearFilters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearFilters();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ClearFilters

// Begin Class UGLSWidgetBase Function ClearLogs
struct Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ClearLogs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ClearLogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execClearLogs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearLogs();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ClearLogs

// Begin Class UGLSWidgetBase Function CopyFiltered
struct Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "CopyFiltered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execCopyFiltered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyFiltered();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function CopyFiltered

// Begin Class UGLSWidgetBase Function CopyFull
struct Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "CopyFull", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_CopyFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execCopyFull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyFull();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function CopyFull

// Begin Class UGLSWidgetBase Function GetActiveFiltersStr
struct Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics
{
	struct GLSWidgetBase_eventGetActiveFiltersStr_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventGetActiveFiltersStr_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "GetActiveFiltersStr", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::GLSWidgetBase_eventGetActiveFiltersStr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::GLSWidgetBase_eventGetActiveFiltersStr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execGetActiveFiltersStr)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetActiveFiltersStr();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function GetActiveFiltersStr

// Begin Class UGLSWidgetBase Function GetLogsCount
struct Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics
{
	struct GLSWidgetBase_eventGetLogsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventGetLogsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "GetLogsCount", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::GLSWidgetBase_eventGetLogsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::GLSWidgetBase_eventGetLogsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execGetLogsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLogsCount();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function GetLogsCount

// Begin Class UGLSWidgetBase Function IsAutoSaveLayoutEnabled
struct Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics
{
	struct GLSWidgetBase_eventIsAutoSaveLayoutEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsAutoSaveLayoutEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsAutoSaveLayoutEnabled_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsAutoSaveLayoutEnabled", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::GLSWidgetBase_eventIsAutoSaveLayoutEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::GLSWidgetBase_eventIsAutoSaveLayoutEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsAutoSaveLayoutEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAutoSaveLayoutEnabled();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsAutoSaveLayoutEnabled

// Begin Class UGLSWidgetBase Function IsFollowingLogs
struct Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics
{
	struct GLSWidgetBase_eventIsFollowingLogs_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsFollowingLogs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsFollowingLogs_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsFollowingLogs", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::GLSWidgetBase_eventIsFollowingLogs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::GLSWidgetBase_eventIsFollowingLogs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsFollowingLogs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFollowingLogs();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsFollowingLogs

// Begin Class UGLSWidgetBase Function IsLogsDuplicates
struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics
{
	struct GLSWidgetBase_eventIsLogsDuplicates_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsLogsDuplicates_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsDuplicates_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsDuplicates", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::GLSWidgetBase_eventIsLogsDuplicates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::GLSWidgetBase_eventIsLogsDuplicates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsDuplicates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLogsDuplicates();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsLogsDuplicates

// Begin Class UGLSWidgetBase Function IsLogsWithCategory
struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics
{
	struct GLSWidgetBase_eventIsLogsWithCategory_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsLogsWithCategory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithCategory_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithCategory", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::GLSWidgetBase_eventIsLogsWithCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::GLSWidgetBase_eventIsLogsWithCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithCategory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLogsWithCategory();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsLogsWithCategory

// Begin Class UGLSWidgetBase Function IsLogsWithClassNames
struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics
{
	struct GLSWidgetBase_eventIsLogsWithClassNames_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsLogsWithClassNames_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithClassNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithClassNames", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::GLSWidgetBase_eventIsLogsWithClassNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::GLSWidgetBase_eventIsLogsWithClassNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithClassNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLogsWithClassNames();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsLogsWithClassNames

// Begin Class UGLSWidgetBase Function IsLogsWithFrame
struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics
{
	struct GLSWidgetBase_eventIsLogsWithFrame_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsLogsWithFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithFrame_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithFrame", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::GLSWidgetBase_eventIsLogsWithFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::GLSWidgetBase_eventIsLogsWithFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithFrame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLogsWithFrame();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsLogsWithFrame

// Begin Class UGLSWidgetBase Function IsLogsWithObjectNames
struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics
{
	struct GLSWidgetBase_eventIsLogsWithObjectNames_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsLogsWithObjectNames_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithObjectNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithObjectNames", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::GLSWidgetBase_eventIsLogsWithObjectNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::GLSWidgetBase_eventIsLogsWithObjectNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithObjectNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLogsWithObjectNames();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsLogsWithObjectNames

// Begin Class UGLSWidgetBase Function IsLogsWithTags
struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics
{
	struct GLSWidgetBase_eventIsLogsWithTags_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsLogsWithTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithTags_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithTags", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::GLSWidgetBase_eventIsLogsWithTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::GLSWidgetBase_eventIsLogsWithTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLogsWithTags();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsLogsWithTags

// Begin Class UGLSWidgetBase Function IsLogsWithTime
struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics
{
	struct GLSWidgetBase_eventIsLogsWithTime_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsLogsWithTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithTime_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithTime", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::GLSWidgetBase_eventIsLogsWithTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::GLSWidgetBase_eventIsLogsWithTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLogsWithTime();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsLogsWithTime

// Begin Class UGLSWidgetBase Function IsLogsWithVerbosity
struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics
{
	struct GLSWidgetBase_eventIsLogsWithVerbosity_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsLogsWithVerbosity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithVerbosity_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithVerbosity", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::GLSWidgetBase_eventIsLogsWithVerbosity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::GLSWidgetBase_eventIsLogsWithVerbosity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithVerbosity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLogsWithVerbosity();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsLogsWithVerbosity

// Begin Class UGLSWidgetBase Function IsReceivingLogs
struct Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics
{
	struct GLSWidgetBase_eventIsReceivingLogs_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLSWidgetBase_eventIsReceivingLogs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventIsReceivingLogs_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsReceivingLogs", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::GLSWidgetBase_eventIsReceivingLogs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::GLSWidgetBase_eventIsReceivingLogs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execIsReceivingLogs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReceivingLogs();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function IsReceivingLogs

// Begin Class UGLSWidgetBase Function MarkNeedRecreateLogFilters
struct Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "MarkNeedRecreateLogFilters", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execMarkNeedRecreateLogFilters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MarkNeedRecreateLogFilters();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function MarkNeedRecreateLogFilters

// Begin Class UGLSWidgetBase Function OnGeneratedEntryWidget
struct Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics
{
	struct GLSWidgetBase_eventOnGeneratedEntryWidget_Parms
	{
		UObject* Model;
		UUserWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventOnGeneratedEntryWidget_Parms, Model), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventOnGeneratedEntryWidget_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "OnGeneratedEntryWidget", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::GLSWidgetBase_eventOnGeneratedEntryWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::GLSWidgetBase_eventOnGeneratedEntryWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execOnGeneratedEntryWidget)
{
	P_GET_OBJECT(UObject,Z_Param_Model);
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGeneratedEntryWidget(Z_Param_Model,Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function OnGeneratedEntryWidget

// Begin Class UGLSWidgetBase Function OnLogModelsCleared
struct Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "OnLogModelsCleared", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execOnLogModelsCleared)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLogModelsCleared();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function OnLogModelsCleared

// Begin Class UGLSWidgetBase Function OpenLogs
struct Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "OpenLogs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_OpenLogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execOpenLogs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenLogs();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function OpenLogs

// Begin Class UGLSWidgetBase Function ProcessFilters
struct Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ProcessFilters", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execProcessFilters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessFilters();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function ProcessFilters

// Begin Class UGLSWidgetBase Function SaveFilteredLogs
struct Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SaveFilteredLogs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSaveFilteredLogs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveFilteredLogs();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SaveFilteredLogs

// Begin Class UGLSWidgetBase Function SaveFullLogs
struct Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SaveFullLogs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSaveFullLogs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveFullLogs();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SaveFullLogs

// Begin Class UGLSWidgetBase Function SaveGLSLogs
struct Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SaveGLSLogs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSaveGLSLogs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGLSLogs();
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SaveGLSLogs

// Begin Class UGLSWidgetBase Function SetAutoSaveLayoutEnabled
struct Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics
{
	struct GLSWidgetBase_eventSetAutoSaveLayoutEnabled_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetAutoSaveLayoutEnabled_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetAutoSaveLayoutEnabled_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetAutoSaveLayoutEnabled", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::GLSWidgetBase_eventSetAutoSaveLayoutEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::GLSWidgetBase_eventSetAutoSaveLayoutEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetAutoSaveLayoutEnabled)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoSaveLayoutEnabled(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetAutoSaveLayoutEnabled

// Begin Class UGLSWidgetBase Function SetFollowLogs
struct Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics
{
	struct GLSWidgetBase_eventSetFollowLogs_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetFollowLogs_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetFollowLogs_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetFollowLogs", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::GLSWidgetBase_eventSetFollowLogs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::GLSWidgetBase_eventSetFollowLogs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetFollowLogs)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFollowLogs(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetFollowLogs

// Begin Class UGLSWidgetBase Function SetHighlightText
struct Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics
{
	struct GLSWidgetBase_eventSetHighlightText_Parms
	{
		FText Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLSWidgetBase_eventSetHighlightText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetHighlightText", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::GLSWidgetBase_eventSetHighlightText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::GLSWidgetBase_eventSetHighlightText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetHighlightText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighlightText(Z_Param_Out_Text);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetHighlightText

// Begin Class UGLSWidgetBase Function SetLogsDuplicates
struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics
{
	struct GLSWidgetBase_eventSetLogsDuplicates_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "Comment", "//TODO : disabled because not optimized\n" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
		{ "ToolTip", "TODO : disabled because not optimized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetLogsDuplicates_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsDuplicates_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsDuplicates", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::GLSWidgetBase_eventSetLogsDuplicates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::GLSWidgetBase_eventSetLogsDuplicates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsDuplicates)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLogsDuplicates(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetLogsDuplicates

// Begin Class UGLSWidgetBase Function SetLogsWithCategory
struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics
{
	struct GLSWidgetBase_eventSetLogsWithCategory_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetLogsWithCategory_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithCategory_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithCategory", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::GLSWidgetBase_eventSetLogsWithCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::GLSWidgetBase_eventSetLogsWithCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithCategory)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLogsWithCategory(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetLogsWithCategory

// Begin Class UGLSWidgetBase Function SetLogsWithClassNames
struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics
{
	struct GLSWidgetBase_eventSetLogsWithClassNames_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetLogsWithClassNames_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithClassNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithClassNames", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::GLSWidgetBase_eventSetLogsWithClassNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::GLSWidgetBase_eventSetLogsWithClassNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithClassNames)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLogsWithClassNames(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetLogsWithClassNames

// Begin Class UGLSWidgetBase Function SetLogsWithFrame
struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics
{
	struct GLSWidgetBase_eventSetLogsWithFrame_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetLogsWithFrame_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithFrame_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithFrame", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::GLSWidgetBase_eventSetLogsWithFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::GLSWidgetBase_eventSetLogsWithFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithFrame)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLogsWithFrame(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetLogsWithFrame

// Begin Class UGLSWidgetBase Function SetLogsWithObjectNames
struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics
{
	struct GLSWidgetBase_eventSetLogsWithObjectNames_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetLogsWithObjectNames_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithObjectNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithObjectNames", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::GLSWidgetBase_eventSetLogsWithObjectNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::GLSWidgetBase_eventSetLogsWithObjectNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithObjectNames)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLogsWithObjectNames(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetLogsWithObjectNames

// Begin Class UGLSWidgetBase Function SetLogsWithTags
struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics
{
	struct GLSWidgetBase_eventSetLogsWithTags_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetLogsWithTags_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithTags_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithTags", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::GLSWidgetBase_eventSetLogsWithTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::GLSWidgetBase_eventSetLogsWithTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithTags)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLogsWithTags(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetLogsWithTags

// Begin Class UGLSWidgetBase Function SetLogsWithTime
struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics
{
	struct GLSWidgetBase_eventSetLogsWithTime_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetLogsWithTime_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithTime_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithTime", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::GLSWidgetBase_eventSetLogsWithTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::GLSWidgetBase_eventSetLogsWithTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithTime)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLogsWithTime(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetLogsWithTime

// Begin Class UGLSWidgetBase Function SetLogsWithVerbosity
struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics
{
	struct GLSWidgetBase_eventSetLogsWithVerbosity_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetLogsWithVerbosity_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithVerbosity_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithVerbosity", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::GLSWidgetBase_eventSetLogsWithVerbosity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::GLSWidgetBase_eventSetLogsWithVerbosity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithVerbosity)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLogsWithVerbosity(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetLogsWithVerbosity

// Begin Class UGLSWidgetBase Function SetReceivingLogs
struct Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics
{
	struct GLSWidgetBase_eventSetReceivingLogs_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GLSWidgetBase_eventSetReceivingLogs_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLSWidgetBase_eventSetReceivingLogs_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetReceivingLogs", nullptr, nullptr, Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::GLSWidgetBase_eventSetReceivingLogs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::GLSWidgetBase_eventSetReceivingLogs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLSWidgetBase::execSetReceivingLogs)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReceivingLogs(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGLSWidgetBase Function SetReceivingLogs

// Begin Class UGLSWidgetBase
void UGLSWidgetBase::StaticRegisterNativesUGLSWidgetBase()
{
	UClass* Class = UGLSWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyFilterByCategories", &UGLSWidgetBase::execApplyFilterByCategories },
		{ "ApplyFilterByCategory", &UGLSWidgetBase::execApplyFilterByCategory },
		{ "ApplyFilterByClassName", &UGLSWidgetBase::execApplyFilterByClassName },
		{ "ApplyFilterByClassNames", &UGLSWidgetBase::execApplyFilterByClassNames },
		{ "ApplyFilterByLogType", &UGLSWidgetBase::execApplyFilterByLogType },
		{ "ApplyFilterByLogTypes", &UGLSWidgetBase::execApplyFilterByLogTypes },
		{ "ApplyFilterByObjectName", &UGLSWidgetBase::execApplyFilterByObjectName },
		{ "ApplyFilterByTag", &UGLSWidgetBase::execApplyFilterByTag },
		{ "ApplyFilterByTags", &UGLSWidgetBase::execApplyFilterByTags },
		{ "ApplyFilterByText", &UGLSWidgetBase::execApplyFilterByText },
		{ "ApplyFiltersByObjectNames", &UGLSWidgetBase::execApplyFiltersByObjectNames },
		{ "ClearFilters", &UGLSWidgetBase::execClearFilters },
		{ "ClearLogs", &UGLSWidgetBase::execClearLogs },
		{ "CopyFiltered", &UGLSWidgetBase::execCopyFiltered },
		{ "CopyFull", &UGLSWidgetBase::execCopyFull },
		{ "GetActiveFiltersStr", &UGLSWidgetBase::execGetActiveFiltersStr },
		{ "GetLogsCount", &UGLSWidgetBase::execGetLogsCount },
		{ "IsAutoSaveLayoutEnabled", &UGLSWidgetBase::execIsAutoSaveLayoutEnabled },
		{ "IsFollowingLogs", &UGLSWidgetBase::execIsFollowingLogs },
		{ "IsLogsDuplicates", &UGLSWidgetBase::execIsLogsDuplicates },
		{ "IsLogsWithCategory", &UGLSWidgetBase::execIsLogsWithCategory },
		{ "IsLogsWithClassNames", &UGLSWidgetBase::execIsLogsWithClassNames },
		{ "IsLogsWithFrame", &UGLSWidgetBase::execIsLogsWithFrame },
		{ "IsLogsWithObjectNames", &UGLSWidgetBase::execIsLogsWithObjectNames },
		{ "IsLogsWithTags", &UGLSWidgetBase::execIsLogsWithTags },
		{ "IsLogsWithTime", &UGLSWidgetBase::execIsLogsWithTime },
		{ "IsLogsWithVerbosity", &UGLSWidgetBase::execIsLogsWithVerbosity },
		{ "IsReceivingLogs", &UGLSWidgetBase::execIsReceivingLogs },
		{ "MarkNeedRecreateLogFilters", &UGLSWidgetBase::execMarkNeedRecreateLogFilters },
		{ "OnGeneratedEntryWidget", &UGLSWidgetBase::execOnGeneratedEntryWidget },
		{ "OnLogModelsCleared", &UGLSWidgetBase::execOnLogModelsCleared },
		{ "OpenLogs", &UGLSWidgetBase::execOpenLogs },
		{ "ProcessFilters", &UGLSWidgetBase::execProcessFilters },
		{ "SaveFilteredLogs", &UGLSWidgetBase::execSaveFilteredLogs },
		{ "SaveFullLogs", &UGLSWidgetBase::execSaveFullLogs },
		{ "SaveGLSLogs", &UGLSWidgetBase::execSaveGLSLogs },
		{ "SetAutoSaveLayoutEnabled", &UGLSWidgetBase::execSetAutoSaveLayoutEnabled },
		{ "SetFollowLogs", &UGLSWidgetBase::execSetFollowLogs },
		{ "SetHighlightText", &UGLSWidgetBase::execSetHighlightText },
		{ "SetLogsDuplicates", &UGLSWidgetBase::execSetLogsDuplicates },
		{ "SetLogsWithCategory", &UGLSWidgetBase::execSetLogsWithCategory },
		{ "SetLogsWithClassNames", &UGLSWidgetBase::execSetLogsWithClassNames },
		{ "SetLogsWithFrame", &UGLSWidgetBase::execSetLogsWithFrame },
		{ "SetLogsWithObjectNames", &UGLSWidgetBase::execSetLogsWithObjectNames },
		{ "SetLogsWithTags", &UGLSWidgetBase::execSetLogsWithTags },
		{ "SetLogsWithTime", &UGLSWidgetBase::execSetLogsWithTime },
		{ "SetLogsWithVerbosity", &UGLSWidgetBase::execSetLogsWithVerbosity },
		{ "SetReceivingLogs", &UGLSWidgetBase::execSetReceivingLogs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSWidgetBase);
UClass* Z_Construct_UClass_UGLSWidgetBase_NoRegister()
{
	return UGLSWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UGLSWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFiltersCleared_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListView_Logs_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GLS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogWidgetClass_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogDataModels_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFiltersCleared;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListView_Logs;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LogWidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LogDataModels_ValueProp;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_LogDataModels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LogDataModels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories, "ApplyFilterByCategories" }, // 3304521974
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory, "ApplyFilterByCategory" }, // 80572478
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName, "ApplyFilterByClassName" }, // 203451608
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames, "ApplyFilterByClassNames" }, // 737279019
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType, "ApplyFilterByLogType" }, // 1187088425
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes, "ApplyFilterByLogTypes" }, // 3246674734
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName, "ApplyFilterByObjectName" }, // 2280290415
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag, "ApplyFilterByTag" }, // 2542238438
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags, "ApplyFilterByTags" }, // 833137937
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText, "ApplyFilterByText" }, // 1831362570
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames, "ApplyFiltersByObjectNames" }, // 2405118317
		{ &Z_Construct_UFunction_UGLSWidgetBase_ClearFilters, "ClearFilters" }, // 2438375294
		{ &Z_Construct_UFunction_UGLSWidgetBase_ClearLogs, "ClearLogs" }, // 2349719880
		{ &Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered, "CopyFiltered" }, // 384057827
		{ &Z_Construct_UFunction_UGLSWidgetBase_CopyFull, "CopyFull" }, // 44708246
		{ &Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature, "FiltersRemovedDelegate__DelegateSignature" }, // 2656901848
		{ &Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr, "GetActiveFiltersStr" }, // 403796842
		{ &Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount, "GetLogsCount" }, // 3858858988
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled, "IsAutoSaveLayoutEnabled" }, // 1242267822
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs, "IsFollowingLogs" }, // 1685849468
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates, "IsLogsDuplicates" }, // 4278028506
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory, "IsLogsWithCategory" }, // 798455174
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames, "IsLogsWithClassNames" }, // 4008058314
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame, "IsLogsWithFrame" }, // 2782190839
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames, "IsLogsWithObjectNames" }, // 1013716803
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags, "IsLogsWithTags" }, // 4036166276
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime, "IsLogsWithTime" }, // 2372908528
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity, "IsLogsWithVerbosity" }, // 819012830
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs, "IsReceivingLogs" }, // 1374817115
		{ &Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters, "MarkNeedRecreateLogFilters" }, // 495632298
		{ &Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget, "OnGeneratedEntryWidget" }, // 2357716584
		{ &Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared, "OnLogModelsCleared" }, // 2957376149
		{ &Z_Construct_UFunction_UGLSWidgetBase_OpenLogs, "OpenLogs" }, // 325610968
		{ &Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters, "ProcessFilters" }, // 2636787865
		{ &Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs, "SaveFilteredLogs" }, // 2675701975
		{ &Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs, "SaveFullLogs" }, // 4244485448
		{ &Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs, "SaveGLSLogs" }, // 4184761114
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled, "SetAutoSaveLayoutEnabled" }, // 3298276643
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs, "SetFollowLogs" }, // 1907272272
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText, "SetHighlightText" }, // 2505408854
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates, "SetLogsDuplicates" }, // 3171259251
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory, "SetLogsWithCategory" }, // 1441245047
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames, "SetLogsWithClassNames" }, // 90638768
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame, "SetLogsWithFrame" }, // 3315989662
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames, "SetLogsWithObjectNames" }, // 654994101
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags, "SetLogsWithTags" }, // 1511710035
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime, "SetLogsWithTime" }, // 2228708704
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity, "SetLogsWithVerbosity" }, // 1273265958
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs, "SetReceivingLogs" }, // 362305790
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_OnFiltersCleared = { "OnFiltersCleared", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSWidgetBase, OnFiltersCleared), Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFiltersCleared_MetaData), NewProp_OnFiltersCleared_MetaData) }; // 2656901848
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_ListView_Logs = { "ListView_Logs", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSWidgetBase, ListView_Logs), Z_Construct_UClass_UGLSListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListView_Logs_MetaData), NewProp_ListView_Logs_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogWidgetClass = { "LogWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSWidgetBase, LogWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGLSLogItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogWidgetClass_MetaData), NewProp_LogWidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_ValueProp = { "LogDataModels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFilteredLog, METADATA_PARAMS(0, nullptr) }; // 2313199814
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_Key_KeyProp = { "LogDataModels_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels = { "LogDataModels", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLSWidgetBase, LogDataModels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogDataModels_MetaData), NewProp_LogDataModels_MetaData) }; // 2313199814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_OnFiltersCleared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_ListView_Logs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLSWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGLSWidgetBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UGLSWidgetBase, IGLSSaveSystemInterface), false },  // 3394433589
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSWidgetBase_Statics::ClassParams = {
	&UGLSWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGLSWidgetBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLSWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLSWidgetBase()
{
	if (!Z_Registration_Info_UClass_UGLSWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSWidgetBase.OuterSingleton, Z_Construct_UClass_UGLSWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLSWidgetBase.OuterSingleton;
}
template<> GLSDEMO_API UClass* StaticClass<UGLSWidgetBase>()
{
	return UGLSWidgetBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSWidgetBase);
UGLSWidgetBase::~UGLSWidgetBase() {}
// End Class UGLSWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLSWidgetBase, UGLSWidgetBase::StaticClass, TEXT("UGLSWidgetBase"), &Z_Registration_Info_UClass_UGLSWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSWidgetBase), 612168204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_3804609880(TEXT("/Script/GLSDemo"),
	Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_5_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
