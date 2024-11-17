// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../UI/GLSWidgetBase.h"
#include "../Types/GLSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSWidgetBase() {}
// Cross Module References
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
	struct Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "FiltersRemovedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	DEFINE_FUNCTION(UGLSWidgetBase::execOnGeneratedEntryWidget)
	{
		P_GET_OBJECT(UObject,Z_Param_Model);
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGeneratedEntryWidget(Z_Param_Model,Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execOnLogModelsCleared)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLogModelsCleared();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execProcessFilters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessFilters();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByObjectName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ObjectName);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyFilterByObjectName(Z_Param_Out_ObjectName,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TextFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyFilterByText(Z_Param_Out_TextFilter);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByTag)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyFilterByTag(Z_Param_Out_Tag,Z_Param_bEnabled);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByCategory)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Category);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyFilterByCategory(Z_Param_Out_Category,Z_Param_bEnabled);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByLogType)
	{
		P_GET_ENUM(EGLSLogType,Z_Param_Verbosity);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyFilterByLogType(EGLSLogType(Z_Param_Verbosity),Z_Param_bEnabled);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UGLSWidgetBase::execApplyFilterByClassName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ClassName);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyFilterByClassName(Z_Param_Out_ClassName,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execMarkNeedRecreateLogFilters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkNeedRecreateLogFilters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execGetLogsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLogsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execGetActiveFiltersStr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActiveFiltersStr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetAutoSaveLayoutEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoSaveLayoutEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsAutoSaveLayoutEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAutoSaveLayoutEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetHighlightText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHighlightText(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsReceivingLogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReceivingLogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetReceivingLogs)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReceivingLogs(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsFollowingLogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFollowingLogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetFollowLogs)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFollowLogs(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithClassNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLogsWithClassNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithClassNames)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogsWithClassNames(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithObjectNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLogsWithObjectNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithObjectNames)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogsWithObjectNames(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLogsWithTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithTags)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogsWithTags(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithVerbosity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLogsWithVerbosity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithVerbosity)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogsWithVerbosity(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLogsWithCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithCategory)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogsWithCategory(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLogsWithFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithFrame)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogsWithFrame(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsWithTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLogsWithTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsWithTime)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogsWithTime(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execIsLogsDuplicates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLogsDuplicates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSetLogsDuplicates)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogsDuplicates(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execOpenLogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenLogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSaveGLSLogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGLSLogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSaveFilteredLogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveFilteredLogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execSaveFullLogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveFullLogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execCopyFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyFull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execCopyFiltered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyFiltered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execClearFilters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearFilters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSWidgetBase::execClearLogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearLogs();
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics
	{
		struct GLSWidgetBase_eventApplyFilterByCategories_Parms
		{
			TArray<FName> Categories;
			bool bEnabled;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByCategories_Parms, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventApplyFilterByCategories_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByCategories_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_Categories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByCategories", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::GLSWidgetBase_eventApplyFilterByCategories_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics
	{
		struct GLSWidgetBase_eventApplyFilterByCategory_Parms
		{
			FName Category;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByCategory_Parms, Category), METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventApplyFilterByCategory_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByCategory_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::GLSWidgetBase_eventApplyFilterByCategory_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics
	{
		struct GLSWidgetBase_eventApplyFilterByClassName_Parms
		{
			FName ClassName;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByClassName_Parms, ClassName), METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventApplyFilterByClassName_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByClassName_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByClassName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::GLSWidgetBase_eventApplyFilterByClassName_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics
	{
		struct GLSWidgetBase_eventApplyFilterByClassNames_Parms
		{
			TArray<FName> ClassNames;
			bool bEnabled;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames_Inner = { "ClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames = { "ClassNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByClassNames_Parms, ClassNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventApplyFilterByClassNames_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByClassNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_ClassNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByClassNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::GLSWidgetBase_eventApplyFilterByClassNames_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics
	{
		struct GLSWidgetBase_eventApplyFilterByLogType_Parms
		{
			EGLSLogType Verbosity;
			bool bEnabled;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByLogType_Parms, Verbosity), Z_Construct_UEnum_GLSDemo_EGLSLogType, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity_MetaData)) }; // 3770678327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventApplyFilterByLogType_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByLogType_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_Verbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByLogType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::GLSWidgetBase_eventApplyFilterByLogType_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics
	{
		struct GLSWidgetBase_eventApplyFilterByLogTypes_Parms
		{
			TArray<EGLSLogType> Types;
			bool bEnabled;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Types_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Types_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Types;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_Inner = { "Types", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GLSDemo_EGLSLogType, METADATA_PARAMS(nullptr, 0) }; // 3770678327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByLogTypes_Parms, Types), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_MetaData)) }; // 3770678327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventApplyFilterByLogTypes_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByLogTypes_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_Types,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByLogTypes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::GLSWidgetBase_eventApplyFilterByLogTypes_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics
	{
		struct GLSWidgetBase_eventApplyFilterByObjectName_Parms
		{
			FName ObjectName;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_ObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByObjectName_Parms, ObjectName), METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventApplyFilterByObjectName_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByObjectName_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByObjectName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::GLSWidgetBase_eventApplyFilterByObjectName_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics
	{
		struct GLSWidgetBase_eventApplyFilterByTag_Parms
		{
			FName Tag;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByTag_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventApplyFilterByTag_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByTag_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::GLSWidgetBase_eventApplyFilterByTag_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics
	{
		struct GLSWidgetBase_eventApplyFilterByTags_Parms
		{
			TArray<FName> Tags;
			bool bEnabled;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventApplyFilterByTags_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFilterByTags_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::GLSWidgetBase_eventApplyFilterByTags_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics
	{
		struct GLSWidgetBase_eventApplyFilterByText_Parms
		{
			FText TextFilter;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextFilter_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TextFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::NewProp_TextFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::NewProp_TextFilter = { "TextFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFilterByText_Parms, TextFilter), METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::NewProp_TextFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::NewProp_TextFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::NewProp_TextFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFilterByText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::GLSWidgetBase_eventApplyFilterByText_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics
	{
		struct GLSWidgetBase_eventApplyFiltersByObjectNames_Parms
		{
			TArray<FName> ObjectNames;
			bool bEnabled;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames_Inner = { "ObjectNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames = { "ObjectNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventApplyFiltersByObjectNames_Parms, ObjectNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventApplyFiltersByObjectNames_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventApplyFiltersByObjectNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_ObjectNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ApplyFiltersByObjectNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::GLSWidgetBase_eventApplyFiltersByObjectNames_Parms), Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ClearFilters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ClearFilters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ClearFilters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ClearLogs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ClearLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ClearLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "CopyFiltered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "CopyFull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_CopyFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_CopyFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics
	{
		struct GLSWidgetBase_eventGetActiveFiltersStr_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventGetActiveFiltersStr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "GetActiveFiltersStr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::GLSWidgetBase_eventGetActiveFiltersStr_Parms), Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics
	{
		struct GLSWidgetBase_eventGetLogsCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventGetLogsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "GetLogsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::GLSWidgetBase_eventGetLogsCount_Parms), Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics
	{
		struct GLSWidgetBase_eventIsAutoSaveLayoutEnabled_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsAutoSaveLayoutEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsAutoSaveLayoutEnabled_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsAutoSaveLayoutEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::GLSWidgetBase_eventIsAutoSaveLayoutEnabled_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics
	{
		struct GLSWidgetBase_eventIsFollowingLogs_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsFollowingLogs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsFollowingLogs_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsFollowingLogs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::GLSWidgetBase_eventIsFollowingLogs_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics
	{
		struct GLSWidgetBase_eventIsLogsDuplicates_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsLogsDuplicates_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsDuplicates_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsDuplicates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::GLSWidgetBase_eventIsLogsDuplicates_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics
	{
		struct GLSWidgetBase_eventIsLogsWithCategory_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsLogsWithCategory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithCategory_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::GLSWidgetBase_eventIsLogsWithCategory_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics
	{
		struct GLSWidgetBase_eventIsLogsWithClassNames_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsLogsWithClassNames_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithClassNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithClassNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::GLSWidgetBase_eventIsLogsWithClassNames_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics
	{
		struct GLSWidgetBase_eventIsLogsWithFrame_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsLogsWithFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithFrame_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::GLSWidgetBase_eventIsLogsWithFrame_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics
	{
		struct GLSWidgetBase_eventIsLogsWithObjectNames_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsLogsWithObjectNames_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithObjectNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithObjectNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::GLSWidgetBase_eventIsLogsWithObjectNames_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics
	{
		struct GLSWidgetBase_eventIsLogsWithTags_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsLogsWithTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithTags_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::GLSWidgetBase_eventIsLogsWithTags_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics
	{
		struct GLSWidgetBase_eventIsLogsWithTime_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsLogsWithTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithTime_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::GLSWidgetBase_eventIsLogsWithTime_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics
	{
		struct GLSWidgetBase_eventIsLogsWithVerbosity_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsLogsWithVerbosity_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsLogsWithVerbosity_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsLogsWithVerbosity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::GLSWidgetBase_eventIsLogsWithVerbosity_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics
	{
		struct GLSWidgetBase_eventIsReceivingLogs_Parms
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
	void Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventIsReceivingLogs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventIsReceivingLogs_Parms), &Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "IsReceivingLogs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::GLSWidgetBase_eventIsReceivingLogs_Parms), Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "MarkNeedRecreateLogFilters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics
	{
		struct GLSWidgetBase_eventOnGeneratedEntryWidget_Parms
		{
			UObject* Model;
			UUserWidget* Widget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventOnGeneratedEntryWidget_Parms, Model), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventOnGeneratedEntryWidget_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "OnGeneratedEntryWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::GLSWidgetBase_eventOnGeneratedEntryWidget_Parms), Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "OnLogModelsCleared", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "OpenLogs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_OpenLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_OpenLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "ProcessFilters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SaveFilteredLogs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SaveFullLogs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SaveGLSLogs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics
	{
		struct GLSWidgetBase_eventSetAutoSaveLayoutEnabled_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetAutoSaveLayoutEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetAutoSaveLayoutEnabled_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetAutoSaveLayoutEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::GLSWidgetBase_eventSetAutoSaveLayoutEnabled_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics
	{
		struct GLSWidgetBase_eventSetFollowLogs_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetFollowLogs_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetFollowLogs_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetFollowLogs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::GLSWidgetBase_eventSetFollowLogs_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics
	{
		struct GLSWidgetBase_eventSetHighlightText_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSWidgetBase_eventSetHighlightText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetHighlightText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::GLSWidgetBase_eventSetHighlightText_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics
	{
		struct GLSWidgetBase_eventSetLogsDuplicates_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetLogsDuplicates_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsDuplicates_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "Comment", "//TODO : disabled because not optimized\n" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
		{ "ToolTip", "TODO : disabled because not optimized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsDuplicates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::GLSWidgetBase_eventSetLogsDuplicates_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics
	{
		struct GLSWidgetBase_eventSetLogsWithCategory_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetLogsWithCategory_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithCategory_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::GLSWidgetBase_eventSetLogsWithCategory_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics
	{
		struct GLSWidgetBase_eventSetLogsWithClassNames_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetLogsWithClassNames_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithClassNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithClassNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::GLSWidgetBase_eventSetLogsWithClassNames_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics
	{
		struct GLSWidgetBase_eventSetLogsWithFrame_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetLogsWithFrame_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithFrame_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::GLSWidgetBase_eventSetLogsWithFrame_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics
	{
		struct GLSWidgetBase_eventSetLogsWithObjectNames_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetLogsWithObjectNames_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithObjectNames_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithObjectNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::GLSWidgetBase_eventSetLogsWithObjectNames_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics
	{
		struct GLSWidgetBase_eventSetLogsWithTags_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetLogsWithTags_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithTags_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::GLSWidgetBase_eventSetLogsWithTags_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics
	{
		struct GLSWidgetBase_eventSetLogsWithTime_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetLogsWithTime_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithTime_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::GLSWidgetBase_eventSetLogsWithTime_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics
	{
		struct GLSWidgetBase_eventSetLogsWithVerbosity_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetLogsWithVerbosity_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetLogsWithVerbosity_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetLogsWithVerbosity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::GLSWidgetBase_eventSetLogsWithVerbosity_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics
	{
		struct GLSWidgetBase_eventSetReceivingLogs_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSWidgetBase_eventSetReceivingLogs_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSWidgetBase_eventSetReceivingLogs_Parms), &Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSWidgetBase, nullptr, "SetReceivingLogs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::GLSWidgetBase_eventSetReceivingLogs_Parms), Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSWidgetBase);
	UClass* Z_Construct_UClass_UGLSWidgetBase_NoRegister()
	{
		return UGLSWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UGLSWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFiltersCleared_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFiltersCleared;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListView_Logs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ListView_Logs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LogWidgetClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LogDataModels_ValueProp;
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_LogDataModels_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogDataModels_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LogDataModels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategories, "ApplyFilterByCategories" }, // 181801611
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByCategory, "ApplyFilterByCategory" }, // 2026066989
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassName, "ApplyFilterByClassName" }, // 2440860801
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByClassNames, "ApplyFilterByClassNames" }, // 3910935761
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogType, "ApplyFilterByLogType" }, // 866975066
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByLogTypes, "ApplyFilterByLogTypes" }, // 4001802355
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByObjectName, "ApplyFilterByObjectName" }, // 540757995
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTag, "ApplyFilterByTag" }, // 1013746697
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByTags, "ApplyFilterByTags" }, // 872126218
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFilterByText, "ApplyFilterByText" }, // 3672906997
		{ &Z_Construct_UFunction_UGLSWidgetBase_ApplyFiltersByObjectNames, "ApplyFiltersByObjectNames" }, // 3034382989
		{ &Z_Construct_UFunction_UGLSWidgetBase_ClearFilters, "ClearFilters" }, // 1606349744
		{ &Z_Construct_UFunction_UGLSWidgetBase_ClearLogs, "ClearLogs" }, // 1061960461
		{ &Z_Construct_UFunction_UGLSWidgetBase_CopyFiltered, "CopyFiltered" }, // 962428279
		{ &Z_Construct_UFunction_UGLSWidgetBase_CopyFull, "CopyFull" }, // 1577861484
		{ &Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature, "FiltersRemovedDelegate__DelegateSignature" }, // 3993701681
		{ &Z_Construct_UFunction_UGLSWidgetBase_GetActiveFiltersStr, "GetActiveFiltersStr" }, // 1157018173
		{ &Z_Construct_UFunction_UGLSWidgetBase_GetLogsCount, "GetLogsCount" }, // 1773567582
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsAutoSaveLayoutEnabled, "IsAutoSaveLayoutEnabled" }, // 2157013350
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsFollowingLogs, "IsFollowingLogs" }, // 2856168717
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsDuplicates, "IsLogsDuplicates" }, // 3574134184
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithCategory, "IsLogsWithCategory" }, // 2749968824
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithClassNames, "IsLogsWithClassNames" }, // 1516832932
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithFrame, "IsLogsWithFrame" }, // 665926401
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithObjectNames, "IsLogsWithObjectNames" }, // 3839831260
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTags, "IsLogsWithTags" }, // 4274886579
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithTime, "IsLogsWithTime" }, // 265685364
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsLogsWithVerbosity, "IsLogsWithVerbosity" }, // 3176557769
		{ &Z_Construct_UFunction_UGLSWidgetBase_IsReceivingLogs, "IsReceivingLogs" }, // 2114300731
		{ &Z_Construct_UFunction_UGLSWidgetBase_MarkNeedRecreateLogFilters, "MarkNeedRecreateLogFilters" }, // 3403329357
		{ &Z_Construct_UFunction_UGLSWidgetBase_OnGeneratedEntryWidget, "OnGeneratedEntryWidget" }, // 3257822302
		{ &Z_Construct_UFunction_UGLSWidgetBase_OnLogModelsCleared, "OnLogModelsCleared" }, // 1964794651
		{ &Z_Construct_UFunction_UGLSWidgetBase_OpenLogs, "OpenLogs" }, // 3991376036
		{ &Z_Construct_UFunction_UGLSWidgetBase_ProcessFilters, "ProcessFilters" }, // 1624636556
		{ &Z_Construct_UFunction_UGLSWidgetBase_SaveFilteredLogs, "SaveFilteredLogs" }, // 787756212
		{ &Z_Construct_UFunction_UGLSWidgetBase_SaveFullLogs, "SaveFullLogs" }, // 1583997429
		{ &Z_Construct_UFunction_UGLSWidgetBase_SaveGLSLogs, "SaveGLSLogs" }, // 1012195738
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetAutoSaveLayoutEnabled, "SetAutoSaveLayoutEnabled" }, // 4147595702
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetFollowLogs, "SetFollowLogs" }, // 3801070917
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetHighlightText, "SetHighlightText" }, // 3693042253
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsDuplicates, "SetLogsDuplicates" }, // 2573778657
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithCategory, "SetLogsWithCategory" }, // 2109615571
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithClassNames, "SetLogsWithClassNames" }, // 554858910
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithFrame, "SetLogsWithFrame" }, // 3411487867
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithObjectNames, "SetLogsWithObjectNames" }, // 3547863165
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTags, "SetLogsWithTags" }, // 1915521053
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithTime, "SetLogsWithTime" }, // 4224273802
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetLogsWithVerbosity, "SetLogsWithVerbosity" }, // 916832417
		{ &Z_Construct_UFunction_UGLSWidgetBase_SetReceivingLogs, "SetReceivingLogs" }, // 4203389916
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_OnFiltersCleared_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_OnFiltersCleared = { "OnFiltersCleared", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSWidgetBase, OnFiltersCleared), Z_Construct_UDelegateFunction_UGLSWidgetBase_FiltersRemovedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_OnFiltersCleared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_OnFiltersCleared_MetaData)) }; // 3993701681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_ListView_Logs_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GLS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_ListView_Logs = { "ListView_Logs", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSWidgetBase, ListView_Logs), Z_Construct_UClass_UGLSListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_ListView_Logs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_ListView_Logs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogWidgetClass_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogWidgetClass = { "LogWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSWidgetBase, LogWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGLSLogItemBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogWidgetClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_ValueProp = { "LogDataModels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FFilteredLog, METADATA_PARAMS(nullptr, 0) }; // 1122193809
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_Key_KeyProp = { "LogDataModels_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/GLSWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels = { "LogDataModels", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSWidgetBase, LogDataModels), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_MetaData)) }; // 1122193809
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_OnFiltersCleared,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_ListView_Logs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSWidgetBase_Statics::NewProp_LogDataModels,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGLSWidgetBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UGLSWidgetBase, IGLSSaveSystemInterface), false },  // 2226746826
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSWidgetBase>::IsAbstract,
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
		METADATA_PARAMS(Z_Construct_UClass_UGLSWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSWidgetBase_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSWidgetBase, UGLSWidgetBase::StaticClass, TEXT("UGLSWidgetBase"), &Z_Registration_Info_UClass_UGLSWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSWidgetBase), 2921894694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_161326655(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
