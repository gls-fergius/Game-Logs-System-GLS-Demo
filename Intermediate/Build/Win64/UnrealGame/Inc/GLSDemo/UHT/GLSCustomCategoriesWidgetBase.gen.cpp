// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../UI/GLSCustomCategoriesWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSCustomCategoriesWidgetBase() {}
// Cross Module References
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoriesWidgetBase();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_NoRegister();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSCustomCategoryModel_NoRegister();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSListView_NoRegister();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSWidgetBase_NoRegister();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execOnOnFiltersCleared)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOnFiltersCleared();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execDisableCategories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableCategories();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execClearCategories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCategories();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execGetNumEnabledCategories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumEnabledCategories();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execInitializeCategories)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Categories);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCategories(Z_Param_Out_Categories);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execGetCategorySortType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGLSCustomCetegorySortType*)Z_Param__Result=P_THIS->GetCategorySortType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execSetSearchText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_SearchText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSearchText(Z_Param_Out_SearchText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execSelectOrDeselectAllCategories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectOrDeselectAllCategories();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execSetCetegoriesSortType)
	{
		P_GET_ENUM(EGLSCustomCetegorySortType,Z_Param_SortType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCetegoriesSortType(EGLSCustomCetegorySortType(Z_Param_SortType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execGetActiveEditableMode)
	{
		P_GET_ENUM(EGLSCustomCetegoryEditableModeType,Z_Param_ModeType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActiveEditableMode(EGLSCustomCetegoryEditableModeType(Z_Param_ModeType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execSetActiveEditableMode)
	{
		P_GET_ENUM(EGLSCustomCetegoryEditableModeType,Z_Param_ModeType);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveEditableMode(EGLSCustomCetegoryEditableModeType(Z_Param_ModeType),Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execEnableCategoryTextOnLogs)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableCategoryTextOnLogs(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execContainsCategory)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsCategory(Z_Param_Out_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execAddCategoryItem)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCategoryItem(Z_Param_Out_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLSCustomCategoriesWidgetBase::execCetGategoryModels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGLSCustomCategoryModel*>*)Z_Param__Result=P_THIS->CetGategoryModels();
		P_NATIVE_END;
	}
	void UGLSCustomCategoriesWidgetBase::StaticRegisterNativesUGLSCustomCategoriesWidgetBase()
	{
		UClass* Class = UGLSCustomCategoriesWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCategoryItem", &UGLSCustomCategoriesWidgetBase::execAddCategoryItem },
			{ "CetGategoryModels", &UGLSCustomCategoriesWidgetBase::execCetGategoryModels },
			{ "ClearCategories", &UGLSCustomCategoriesWidgetBase::execClearCategories },
			{ "ContainsCategory", &UGLSCustomCategoriesWidgetBase::execContainsCategory },
			{ "DisableCategories", &UGLSCustomCategoriesWidgetBase::execDisableCategories },
			{ "EnableCategoryTextOnLogs", &UGLSCustomCategoriesWidgetBase::execEnableCategoryTextOnLogs },
			{ "GetActiveEditableMode", &UGLSCustomCategoriesWidgetBase::execGetActiveEditableMode },
			{ "GetCategorySortType", &UGLSCustomCategoriesWidgetBase::execGetCategorySortType },
			{ "GetNumEnabledCategories", &UGLSCustomCategoriesWidgetBase::execGetNumEnabledCategories },
			{ "InitializeCategories", &UGLSCustomCategoriesWidgetBase::execInitializeCategories },
			{ "OnOnFiltersCleared", &UGLSCustomCategoriesWidgetBase::execOnOnFiltersCleared },
			{ "SelectOrDeselectAllCategories", &UGLSCustomCategoriesWidgetBase::execSelectOrDeselectAllCategories },
			{ "SetActiveEditableMode", &UGLSCustomCategoriesWidgetBase::execSetActiveEditableMode },
			{ "SetCetegoriesSortType", &UGLSCustomCategoriesWidgetBase::execSetCetegoriesSortType },
			{ "SetSearchText", &UGLSCustomCategoriesWidgetBase::execSetSearchText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventAddCategoryItem_Parms
		{
			FName Category;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSCustomCategoriesWidgetBase_eventAddCategoryItem_Parms, Category), METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "AddCategoryItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::GLSCustomCategoriesWidgetBase_eventAddCategoryItem_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventCetGategoryModels_Parms
		{
			TArray<UGLSCustomCategoryModel*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGLSCustomCategoryModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSCustomCategoriesWidgetBase_eventCetGategoryModels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "CetGategoryModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::GLSCustomCategoriesWidgetBase_eventCetGategoryModels_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ClearCategories_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ClearCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ClearCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "ClearCategories", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ClearCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ClearCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ClearCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ClearCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventContainsCategory_Parms
		{
			FName Category;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSCustomCategoriesWidgetBase_eventContainsCategory_Parms, Category), METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::NewProp_Category_MetaData)) };
	void Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSCustomCategoriesWidgetBase_eventContainsCategory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSCustomCategoriesWidgetBase_eventContainsCategory_Parms), &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "ContainsCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::GLSCustomCategoriesWidgetBase_eventContainsCategory_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_DisableCategories_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_DisableCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_DisableCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "DisableCategories", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_DisableCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_DisableCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_DisableCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_DisableCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventEnableCategoryTextOnLogs_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GLSCustomCategoriesWidgetBase_eventEnableCategoryTextOnLogs_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSCustomCategoriesWidgetBase_eventEnableCategoryTextOnLogs_Parms), &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "EnableCategoryTextOnLogs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::GLSCustomCategoriesWidgetBase_eventEnableCategoryTextOnLogs_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventGetActiveEditableMode_Parms
		{
			EGLSCustomCetegoryEditableModeType ModeType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModeType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ModeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ModeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ModeType = { "ModeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSCustomCategoriesWidgetBase_eventGetActiveEditableMode_Parms, ModeType), Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ModeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ModeType_MetaData)) }; // 616603167
	void Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLSCustomCategoriesWidgetBase_eventGetActiveEditableMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSCustomCategoriesWidgetBase_eventGetActiveEditableMode_Parms), &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ModeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ModeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "GetActiveEditableMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::GLSCustomCategoriesWidgetBase_eventGetActiveEditableMode_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventGetCategorySortType_Parms
		{
			EGLSCustomCetegorySortType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSCustomCategoriesWidgetBase_eventGetCategorySortType_Parms, ReturnValue), Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType, METADATA_PARAMS(nullptr, 0) }; // 4051814957
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "GetCategorySortType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::GLSCustomCategoriesWidgetBase_eventGetCategorySortType_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventGetNumEnabledCategories_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSCustomCategoriesWidgetBase_eventGetNumEnabledCategories_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "GetNumEnabledCategories", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::GLSCustomCategoriesWidgetBase_eventGetNumEnabledCategories_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventInitializeCategories_Parms
		{
			TArray<FName> Categories;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::NewProp_Categories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSCustomCategoriesWidgetBase_eventInitializeCategories_Parms, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::NewProp_Categories_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::NewProp_Categories,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "InitializeCategories", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::GLSCustomCategoriesWidgetBase_eventInitializeCategories_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_OnOnFiltersCleared_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_OnOnFiltersCleared_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_OnOnFiltersCleared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "OnOnFiltersCleared", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_OnOnFiltersCleared_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_OnOnFiltersCleared_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_OnOnFiltersCleared()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_OnOnFiltersCleared_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SelectOrDeselectAllCategories_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SelectOrDeselectAllCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SelectOrDeselectAllCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "SelectOrDeselectAllCategories", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SelectOrDeselectAllCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SelectOrDeselectAllCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SelectOrDeselectAllCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SelectOrDeselectAllCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventSetActiveEditableMode_Parms
		{
			EGLSCustomCetegoryEditableModeType ModeType;
			bool bEnabled;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModeType;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_ModeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_ModeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_ModeType = { "ModeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSCustomCategoriesWidgetBase_eventSetActiveEditableMode_Parms, ModeType), Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_ModeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_ModeType_MetaData)) }; // 616603167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((GLSCustomCategoriesWidgetBase_eventSetActiveEditableMode_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLSCustomCategoriesWidgetBase_eventSetActiveEditableMode_Parms), &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_ModeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_ModeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "SetActiveEditableMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::GLSCustomCategoriesWidgetBase_eventSetActiveEditableMode_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventSetCetegoriesSortType_Parms
		{
			EGLSCustomCetegorySortType SortType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::NewProp_SortType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::NewProp_SortType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::NewProp_SortType = { "SortType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSCustomCategoriesWidgetBase_eventSetCetegoriesSortType_Parms, SortType), Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::NewProp_SortType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::NewProp_SortType_MetaData)) }; // 4051814957
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::NewProp_SortType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::NewProp_SortType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "SetCetegoriesSortType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::GLSCustomCategoriesWidgetBase_eventSetCetegoriesSortType_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics
	{
		struct GLSCustomCategoriesWidgetBase_eventSetSearchText_Parms
		{
			FText SearchText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SearchText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::NewProp_SearchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSCustomCategoriesWidgetBase_eventSetSearchText_Parms, SearchText), METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::NewProp_SearchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::NewProp_SearchText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::NewProp_SearchText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, nullptr, "SetSearchText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::GLSCustomCategoriesWidgetBase_eventSetSearchText_Parms), Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSCustomCategoriesWidgetBase);
	UClass* Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_NoRegister()
	{
		return UGLSCustomCategoriesWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainLogsWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MainLogsWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ListView;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CategoryModels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryModels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoryModels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bToolsPanelVisible_MetaData[];
#endif
		static void NewProp_bToolsPanelVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToolsPanelVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_AddCategoryItem, "AddCategoryItem" }, // 3932131510
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_CetGategoryModels, "CetGategoryModels" }, // 1234352768
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ClearCategories, "ClearCategories" }, // 766214760
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_ContainsCategory, "ContainsCategory" }, // 3408827497
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_DisableCategories, "DisableCategories" }, // 1416827154
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_EnableCategoryTextOnLogs, "EnableCategoryTextOnLogs" }, // 2363695413
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetActiveEditableMode, "GetActiveEditableMode" }, // 1798650543
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetCategorySortType, "GetCategorySortType" }, // 3437010645
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_GetNumEnabledCategories, "GetNumEnabledCategories" }, // 1342682807
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_InitializeCategories, "InitializeCategories" }, // 1770745747
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_OnOnFiltersCleared, "OnOnFiltersCleared" }, // 3481576179
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SelectOrDeselectAllCategories, "SelectOrDeselectAllCategories" }, // 3391663433
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetActiveEditableMode, "SetActiveEditableMode" }, // 1042569516
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetCetegoriesSortType, "SetCetegoriesSortType" }, // 3460516313
		{ &Z_Construct_UFunction_UGLSCustomCategoriesWidgetBase_SetSearchText, "SetSearchText" }, // 2198321128
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GLSCustomCategoriesWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_MainLogsWidget_MetaData[] = {
		{ "Category", "GLS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_MainLogsWidget = { "MainLogsWidget", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSCustomCategoriesWidgetBase, MainLogsWidget), Z_Construct_UClass_UGLSWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_MainLogsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_MainLogsWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_ListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GLS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_ListView = { "ListView", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSCustomCategoriesWidgetBase, ListView), Z_Construct_UClass_UGLSListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_ListView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_ListView_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_CategoryModels_Inner = { "CategoryModels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGLSCustomCategoryModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_CategoryModels_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_CategoryModels = { "CategoryModels", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSCustomCategoriesWidgetBase, CategoryModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_CategoryModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_CategoryModels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_bToolsPanelVisible_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/UI/GLSCustomCategoriesWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_bToolsPanelVisible_SetBit(void* Obj)
	{
		((UGLSCustomCategoriesWidgetBase*)Obj)->bToolsPanelVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_bToolsPanelVisible = { "bToolsPanelVisible", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSCustomCategoriesWidgetBase), &Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_bToolsPanelVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_bToolsPanelVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_bToolsPanelVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_MainLogsWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_ListView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_CategoryModels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_CategoryModels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::NewProp_bToolsPanelVisible,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGLSSaveSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UGLSCustomCategoriesWidgetBase, IGLSSaveSystemInterface), false },  // 2226746826
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSCustomCategoriesWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::ClassParams = {
		&UGLSCustomCategoriesWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLSCustomCategoriesWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UGLSCustomCategoriesWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSCustomCategoriesWidgetBase.OuterSingleton, Z_Construct_UClass_UGLSCustomCategoriesWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSCustomCategoriesWidgetBase.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSCustomCategoriesWidgetBase>()
	{
		return UGLSCustomCategoriesWidgetBase::StaticClass();
	}
	UGLSCustomCategoriesWidgetBase::UGLSCustomCategoriesWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSCustomCategoriesWidgetBase);
	UGLSCustomCategoriesWidgetBase::~UGLSCustomCategoriesWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSCustomCategoriesWidgetBase, UGLSCustomCategoriesWidgetBase::StaticClass, TEXT("UGLSCustomCategoriesWidgetBase"), &Z_Registration_Info_UClass_UGLSCustomCategoriesWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSCustomCategoriesWidgetBase), 900708355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_199843624(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_UI_GLSCustomCategoriesWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
