// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLSSettings.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "../Types/GLSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSettings();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSSettings_NoRegister();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSLogType();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	DEFINE_FUNCTION(UGLSSettings::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGLSSettings**)Z_Param__Result=UGLSSettings::Get();
		P_NATIVE_END;
	}
	void UGLSSettings::StaticRegisterNativesUGLSSettings()
	{
		UClass* Class = UGLSSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UGLSSettings::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLSSettings_Get_Statics
	{
		struct GLSSettings_eventGet_Parms
		{
			UGLSSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLSSettings_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLSSettings_eventGet_Parms, ReturnValue), Z_Construct_UClass_UGLSSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLSSettings_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLSSettings_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLSSettings_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "GLS" },
		{ "DisplayName", "Get Game Logs System Settings" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLSSettings_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLSSettings, nullptr, "Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLSSettings_Get_Statics::GLSSettings_eventGet_Parms), Z_Construct_UFunction_UGLSSettings_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSettings_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLSSettings_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLSSettings_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLSSettings_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLSSettings_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLSSettings);
	UClass* Z_Construct_UClass_UGLSSettings_NoRegister()
	{
		return UGLSSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGLSSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogsInEditor_MetaData[];
#endif
		static void NewProp_bEnableLogsInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogsInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogsInDevelopmentBuilds_MetaData[];
#endif
		static void NewProp_bEnableLogsInDevelopmentBuilds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogsInDevelopmentBuilds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogsInDebugBuilds_MetaData[];
#endif
		static void NewProp_bEnableLogsInDebugBuilds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogsInDebugBuilds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogsInTestBuilds_MetaData[];
#endif
		static void NewProp_bEnableLogsInTestBuilds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogsInTestBuilds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogsInShippingBuilds_MetaData[];
#endif
		static void NewProp_bEnableLogsInShippingBuilds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogsInShippingBuilds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLoggingInShippingWithLogs_MetaData[];
#endif
		static void NewProp_bEnableLoggingInShippingWithLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLoggingInShippingWithLogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLogsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLogsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearLogsOnPIE_MetaData[];
#endif
		static void NewProp_bClearLogsOnPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearLogsOnPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearEditorLogsOnPIE_MetaData[];
#endif
		static void NewProp_bClearEditorLogsOnPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearEditorLogsOnPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLoggingTagTypes_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultLoggingTagTypes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedLogsByCategory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedLogsByCategory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedLogsByCategory;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExcludedLogsByVerbosity_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExcludedLogsByVerbosity_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedLogsByVerbosity_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedLogsByVerbosity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLayoutSave_MetaData[];
#endif
		static void NewProp_bEnableLayoutSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLayoutSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCustomCategorySave_MetaData[];
#endif
		static void NewProp_bEnableCustomCategorySave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCustomCategorySave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCategoriesToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CustomCategoriesToLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIScaleEditor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UIScaleEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIScaleDesktop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UIScaleDesktop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIScaleConsole_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UIScaleConsole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIScaleMobile_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UIScaleMobile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowOverlayByInput_MetaData[];
#endif
		static void NewProp_bAllowOverlayByInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowOverlayByInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayDisplayDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlayDisplayDelay;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayInputMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayInputMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayInputMappings;
		static const UECodeGen_Private::FClassPropertyParams NewProp_IgnoredGameModesForOverlay_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredGameModesForOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IgnoredGameModesForOverlay;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_IgnoredLevelsForOverlay_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredLevelsForOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IgnoredLevelsForOverlay;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputModeOverlay_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputModeOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputModeOverlay;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputModeAfterOverlayHide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputModeAfterOverlayHide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputModeAfterOverlayHide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOverlayBackground_MetaData[];
#endif
		static void NewProp_bShowOverlayBackground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOverlayBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayBackgroundOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlayBackgroundOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayBackgroundBlur_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlayBackgroundBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogsFontSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogsFontSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLSSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLSSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLSSettings_Get, "Get" }, // 358365818
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Game Logs System (GLS) settings. The settings will be applied to applied to every tab. */" },
		{ "IncludePath", "Common/GLSSettings.h" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Game Logs System (GLS) settings. The settings will be applied to applied to every tab." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInEditor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Enable logging system in the editor\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Enable logging system in the editor" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInEditor_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bEnableLogsInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInEditor = { "bEnableLogsInEditor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDevelopmentBuilds_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Enable logging in development builds\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Enable logging in development builds" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDevelopmentBuilds_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bEnableLogsInDevelopmentBuilds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDevelopmentBuilds = { "bEnableLogsInDevelopmentBuilds", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDevelopmentBuilds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDevelopmentBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDevelopmentBuilds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDebugBuilds_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Enable logging in debug builds\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Enable logging in debug builds" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDebugBuilds_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bEnableLogsInDebugBuilds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDebugBuilds = { "bEnableLogsInDebugBuilds", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDebugBuilds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDebugBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDebugBuilds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInTestBuilds_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Enable logging in test builds, disabled for Demo version\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Enable logging in test builds, disabled for Demo version" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInTestBuilds_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bEnableLogsInTestBuilds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInTestBuilds = { "bEnableLogsInTestBuilds", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInTestBuilds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInTestBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInTestBuilds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInShippingBuilds_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Enable logging in shipping builds, disabled for Demo version\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Enable logging in shipping builds, disabled for Demo version" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInShippingBuilds_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bEnableLogsInShippingBuilds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInShippingBuilds = { "bEnableLogsInShippingBuilds", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInShippingBuilds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInShippingBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInShippingBuilds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLoggingInShippingWithLogs_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Enable logging in shipping builds with extended logging, disabled for Demo version\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Enable logging in shipping builds with extended logging, disabled for Demo version" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLoggingInShippingWithLogs_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bEnableLoggingInShippingWithLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLoggingInShippingWithLogs = { "bEnableLoggingInShippingWithLogs", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLoggingInShippingWithLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLoggingInShippingWithLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLoggingInShippingWithLogs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_MaxLogsPerFrame_MetaData[] = {
		{ "Category", "Logging" },
		{ "Comment", "// Maximum logs processed per frame\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Maximum logs processed per frame" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_MaxLogsPerFrame = { "MaxLogsPerFrame", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, MaxLogsPerFrame), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_MaxLogsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_MaxLogsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearLogsOnPIE_MetaData[] = {
		{ "Category", "Logging" },
		{ "Comment", "// Clear previous logs on PIE (Play In Editor only)\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Clear previous logs on PIE (Play In Editor only)" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearLogsOnPIE_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bClearLogsOnPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearLogsOnPIE = { "bClearLogsOnPIE", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearLogsOnPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearLogsOnPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearLogsOnPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearEditorLogsOnPIE_MetaData[] = {
		{ "Category", "Logging" },
		{ "Comment", "// Clear logs in GLS log window on PIE (editor window only)\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Clear logs in GLS log window on PIE (editor window only)" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearEditorLogsOnPIE_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bClearEditorLogsOnPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearEditorLogsOnPIE = { "bClearEditorLogsOnPIE", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearEditorLogsOnPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearEditorLogsOnPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearEditorLogsOnPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_DefaultLoggingTagTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/GLS.EGLSTagsDefaultTypes" },
		{ "Category", "Logging" },
		{ "Comment", "// Default tag types for logging (e.g., PIE, Role, Function, PlayerName)\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Default tag types for logging (e.g., PIE, Role, Function, PlayerName)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_DefaultLoggingTagTypes = { "DefaultLoggingTagTypes", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, DefaultLoggingTagTypes), nullptr, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_DefaultLoggingTagTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_DefaultLoggingTagTypes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByCategory_Inner = { "ExcludedLogsByCategory", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities, METADATA_PARAMS(nullptr, 0) }; // 644546727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByCategory_MetaData[] = {
		{ "Category", "Logging" },
		{ "Comment", "// Exclude logs by categories and verbosity\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Exclude logs by categories and verbosity" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByCategory = { "ExcludedLogsByCategory", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, ExcludedLogsByCategory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByCategory_MetaData)) }; // 644546727
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByVerbosity_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByVerbosity_Inner = { "ExcludedLogsByVerbosity", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GLSDemo_EGLSLogType, METADATA_PARAMS(nullptr, 0) }; // 3770678327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByVerbosity_MetaData[] = {
		{ "Category", "Logging" },
		{ "Comment", "// Exclude logs by verbosity\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Exclude logs by verbosity" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByVerbosity = { "ExcludedLogsByVerbosity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, ExcludedLogsByVerbosity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByVerbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByVerbosity_MetaData)) }; // 3770678327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLayoutSave_MetaData[] = {
		{ "Category", "Save system" },
		{ "Comment", "// Enable layout save system\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Enable layout save system" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLayoutSave_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bEnableLayoutSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLayoutSave = { "bEnableLayoutSave", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLayoutSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLayoutSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLayoutSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableCustomCategorySave_MetaData[] = {
		{ "Bitmask", "" },
		{ "Category", "Save system" },
		{ "Comment", "// Enable saving for custom categories\n" },
		{ "EditCondition", "bEnableLayoutSave" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Enable saving for custom categories" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableCustomCategorySave_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bEnableCustomCategorySave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableCustomCategorySave = { "bEnableCustomCategorySave", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableCustomCategorySave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableCustomCategorySave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableCustomCategorySave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_CustomCategoriesToLoad_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/GLS.EGLSCustomCategoriesTypes" },
		{ "Category", "Save system" },
		{ "Comment", "// Custom category types to load\n" },
		{ "EditCondition", "bEnableCustomCategorySave && bEnableLayoutSave" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Custom category types to load" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_CustomCategoriesToLoad = { "CustomCategoriesToLoad", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, CustomCategoriesToLoad), nullptr, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_CustomCategoriesToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_CustomCategoriesToLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleEditor_MetaData[] = {
		{ "Category", "UI Scaling" },
		{ "Comment", "// UI scale factor for the editor\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "UI scale factor for the editor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleEditor = { "UIScaleEditor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, UIScaleEditor), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleDesktop_MetaData[] = {
		{ "Category", "UI Scaling" },
		{ "Comment", "// UI scale factor for desktop applications\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "UI scale factor for desktop applications" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleDesktop = { "UIScaleDesktop", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, UIScaleDesktop), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleDesktop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleDesktop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleConsole_MetaData[] = {
		{ "Category", "UI Scaling" },
		{ "Comment", "// UI scale factor for console applications\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "UI scale factor for console applications" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleConsole = { "UIScaleConsole", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, UIScaleConsole), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleConsole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleConsole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleMobile_MetaData[] = {
		{ "Category", "UI Scaling" },
		{ "Comment", "// UI scale factor for mobile applications\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "UI scale factor for mobile applications" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleMobile = { "UIScaleMobile", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, UIScaleMobile), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleMobile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleMobile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bAllowOverlayByInput_MetaData[] = {
		{ "Category", "Overlay" },
		{ "Comment", "// Allow opening the overlay via input actions in gameplay\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Allow opening the overlay via input actions in gameplay" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bAllowOverlayByInput_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bAllowOverlayByInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bAllowOverlayByInput = { "bAllowOverlayByInput", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bAllowOverlayByInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bAllowOverlayByInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bAllowOverlayByInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayDisplayDelay_MetaData[] = {
		{ "Category", "Overlay" },
		{ "Comment", "// Delay before displaying overlay after input is pressed\n" },
		{ "EditCondition", "bAllowOverlayByInput" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Delay before displaying overlay after input is pressed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayDisplayDelay = { "OverlayDisplayDelay", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, OverlayDisplayDelay), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayDisplayDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayDisplayDelay_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayInputMappings_Inner = { "OverlayInputMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 1282624095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayInputMappings_MetaData[] = {
		{ "Category", "Overlay" },
		{ "Comment", "// Input mapping to open the overlay (keyboard, gamepad, etc.) in gameplay\n" },
		{ "EditCondition", "bAllowOverlayByInput" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Input mapping to open the overlay (keyboard, gamepad, etc.) in gameplay" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayInputMappings = { "OverlayInputMappings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, OverlayInputMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayInputMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayInputMappings_MetaData)) }; // 1282624095
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredGameModesForOverlay_ElementProp = { "IgnoredGameModesForOverlay", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredGameModesForOverlay_MetaData[] = {
		{ "Category", "Overlay" },
		{ "Comment", "// Game modes that ignore input to open the overlay\n" },
		{ "EditCondition", "bAllowOverlayByInput" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Game modes that ignore input to open the overlay" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredGameModesForOverlay = { "IgnoredGameModesForOverlay", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, IgnoredGameModesForOverlay), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredGameModesForOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredGameModesForOverlay_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredLevelsForOverlay_ElementProp = { "IgnoredLevelsForOverlay", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredLevelsForOverlay_MetaData[] = {
		{ "Category", "Overlay" },
		{ "Comment", "// Levels that ignore input to open the overlay\n" },
		{ "EditCondition", "bAllowOverlayByInput" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Levels that ignore input to open the overlay" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredLevelsForOverlay = { "IgnoredLevelsForOverlay", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, IgnoredLevelsForOverlay), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredLevelsForOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredLevelsForOverlay_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeOverlay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeOverlay_MetaData[] = {
		{ "Category", "Overlay" },
		{ "Comment", "// Input mode before open the overlay\n" },
		{ "EditCondition", "bAllowOverlayByInput" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Input mode before open the overlay" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeOverlay = { "InputModeOverlay", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, InputModeOverlay), Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeOverlay_MetaData)) }; // 4159124974
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeAfterOverlayHide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeAfterOverlayHide_MetaData[] = {
		{ "Category", "Overlay" },
		{ "Comment", "// Input mode after hiding the overlay\n" },
		{ "EditCondition", "bAllowOverlayByInput" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Input mode after hiding the overlay" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeAfterOverlayHide = { "InputModeAfterOverlayHide", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, InputModeAfterOverlayHide), Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeAfterOverlayHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeAfterOverlayHide_MetaData)) }; // 4159124974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_bShowOverlayBackground_MetaData[] = {
		{ "Category", "Overlay Appearance" },
		{ "Comment", "// Display background in the overlay\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Display background in the overlay" },
	};
#endif
	void Z_Construct_UClass_UGLSSettings_Statics::NewProp_bShowOverlayBackground_SetBit(void* Obj)
	{
		((UGLSSettings*)Obj)->bShowOverlayBackground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_bShowOverlayBackground = { "bShowOverlayBackground", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLSSettings), &Z_Construct_UClass_UGLSSettings_Statics::NewProp_bShowOverlayBackground_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bShowOverlayBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_bShowOverlayBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundColor_MetaData[] = {
		{ "Category", "Overlay Appearance" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Background color for the overlay\n" },
		{ "EditCondition", "bShowOverlayBackground" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Background color for the overlay" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundColor = { "OverlayBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, OverlayBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundOpacity_MetaData[] = {
		{ "Category", "Overlay Appearance" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Background opacity for the overlay\n" },
		{ "EditCondition", "bShowOverlayBackground" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Background opacity for the overlay" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundOpacity = { "OverlayBackgroundOpacity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, OverlayBackgroundOpacity), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundBlur_MetaData[] = {
		{ "Category", "Overlay Appearance" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Blur strength for overlay background\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Blur strength for overlay background" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundBlur = { "OverlayBackgroundBlur", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, OverlayBackgroundBlur), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLSSettings_Statics::NewProp_LogsFontSize_MetaData[] = {
		{ "Category", "Overlay Appearance" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "// Size for font log entries\n" },
		{ "ModuleRelativePath", "Public/Common/GLSSettings.h" },
		{ "ToolTip", "Size for font log entries" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGLSSettings_Statics::NewProp_LogsFontSize = { "LogsFontSize", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLSSettings, LogsFontSize), METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::NewProp_LogsFontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::NewProp_LogsFontSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLSSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDevelopmentBuilds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInDebugBuilds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInTestBuilds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLogsInShippingBuilds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLoggingInShippingWithLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_MaxLogsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearLogsOnPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bClearEditorLogsOnPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_DefaultLoggingTagTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByCategory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByVerbosity_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByVerbosity_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_ExcludedLogsByVerbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableLayoutSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bEnableCustomCategorySave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_CustomCategoriesToLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleDesktop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleConsole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_UIScaleMobile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bAllowOverlayByInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayDisplayDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayInputMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayInputMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredGameModesForOverlay_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredGameModesForOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredLevelsForOverlay_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_IgnoredLevelsForOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeOverlay_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeAfterOverlayHide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_InputModeAfterOverlayHide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_bShowOverlayBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_OverlayBackgroundBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLSSettings_Statics::NewProp_LogsFontSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLSSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLSSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLSSettings_Statics::ClassParams = {
		&UGLSSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLSSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGLSSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLSSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLSSettings()
	{
		if (!Z_Registration_Info_UClass_UGLSSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLSSettings.OuterSingleton, Z_Construct_UClass_UGLSSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLSSettings.OuterSingleton;
	}
	template<> GLSDEMO_API UClass* StaticClass<UGLSSettings>()
	{
		return UGLSSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLSSettings);
	UGLSSettings::~UGLSSettings() {}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Common_GLSSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Common_GLSSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLSSettings, UGLSSettings::StaticClass, TEXT("UGLSSettings"), &Z_Registration_Info_UClass_UGLSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLSSettings), 3961422833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Common_GLSSettings_h_2844809538(TEXT("/Script/GLSDemo"),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Common_GLSSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Common_GLSSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
