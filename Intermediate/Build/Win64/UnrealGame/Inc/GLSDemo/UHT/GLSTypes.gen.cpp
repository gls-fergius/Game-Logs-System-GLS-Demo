// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Types/GLSTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLSTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	GLSDEMO_API UClass* Z_Construct_UClass_UGLSLogInfoObject_NoRegister();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSLogType();
	GLSDEMO_API UEnum* Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature();
	GLSDEMO_API UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FFilteredLog();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSFilterLog();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSJsonLogInfo();
	GLSDEMO_API UScriptStruct* Z_Construct_UScriptStruct_FGLSLogInfo();
	UPackage* Z_Construct_UPackage__Script_GLSDemo();
// End Cross Module References
	static_assert(!int64(EGLSInputModeOverlay::None)||!int64(EGLSInputModeOverlay::GameOnly)||!int64(EGLSInputModeOverlay::UIOnly)||!int64(EGLSInputModeOverlay::GameAndUI), "'EGLSInputModeOverlay' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLSInputModeOverlay;
	static UEnum* EGLSInputModeOverlay_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLSInputModeOverlay.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLSInputModeOverlay.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("EGLSInputModeOverlay"));
		}
		return Z_Registration_Info_UEnum_EGLSInputModeOverlay.OuterSingleton;
	}
	template<> GLSDEMO_API UEnum* StaticEnum<EGLSInputModeOverlay>()
	{
		return EGLSInputModeOverlay_StaticEnum();
	}
	struct Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay_Statics::Enumerators[] = {
		{ "EGLSInputModeOverlay::None", (int64)EGLSInputModeOverlay::None },
		{ "EGLSInputModeOverlay::GameOnly", (int64)EGLSInputModeOverlay::GameOnly },
		{ "EGLSInputModeOverlay::UIOnly", (int64)EGLSInputModeOverlay::UIOnly },
		{ "EGLSInputModeOverlay::GameAndUI", (int64)EGLSInputModeOverlay::GameAndUI },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GameAndUI.Name", "EGLSInputModeOverlay::GameAndUI" },
		{ "GameOnly.Name", "EGLSInputModeOverlay::GameOnly" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
		{ "None.Hide", "" },
		{ "None.Name", "EGLSInputModeOverlay::None" },
		{ "UIOnly.Name", "EGLSInputModeOverlay::UIOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		"EGLSInputModeOverlay",
		"EGLSInputModeOverlay",
		Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay()
	{
		if (!Z_Registration_Info_UEnum_EGLSInputModeOverlay.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLSInputModeOverlay.InnerSingleton, Z_Construct_UEnum_GLSDemo_EGLSInputModeOverlay_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLSInputModeOverlay.InnerSingleton;
	}
	static_assert(!int64(EGLSTagsDefaultTypes::None)||!int64(EGLSTagsDefaultTypes::Pie)||!int64(EGLSTagsDefaultTypes::Role)||!int64(EGLSTagsDefaultTypes::Function)||!int64(EGLSTagsDefaultTypes::PlayerName), "'EGLSTagsDefaultTypes' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLSTagsDefaultTypes;
	static UEnum* EGLSTagsDefaultTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLSTagsDefaultTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLSTagsDefaultTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("EGLSTagsDefaultTypes"));
		}
		return Z_Registration_Info_UEnum_EGLSTagsDefaultTypes.OuterSingleton;
	}
	template<> GLSDEMO_API UEnum* StaticEnum<EGLSTagsDefaultTypes>()
	{
		return EGLSTagsDefaultTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes_Statics::Enumerators[] = {
		{ "EGLSTagsDefaultTypes::None", (int64)EGLSTagsDefaultTypes::None },
		{ "EGLSTagsDefaultTypes::Pie", (int64)EGLSTagsDefaultTypes::Pie },
		{ "EGLSTagsDefaultTypes::Role", (int64)EGLSTagsDefaultTypes::Role },
		{ "EGLSTagsDefaultTypes::Function", (int64)EGLSTagsDefaultTypes::Function },
		{ "EGLSTagsDefaultTypes::PlayerName", (int64)EGLSTagsDefaultTypes::PlayerName },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Function.Name", "EGLSTagsDefaultTypes::Function" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
		{ "None.Hide", "" },
		{ "None.Name", "EGLSTagsDefaultTypes::None" },
		{ "Pie.Name", "EGLSTagsDefaultTypes::Pie" },
		{ "PlayerName.Name", "EGLSTagsDefaultTypes::PlayerName" },
		{ "Role.Name", "EGLSTagsDefaultTypes::Role" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		"EGLSTagsDefaultTypes",
		"EGLSTagsDefaultTypes",
		Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes()
	{
		if (!Z_Registration_Info_UEnum_EGLSTagsDefaultTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLSTagsDefaultTypes.InnerSingleton, Z_Construct_UEnum_GLSDemo_EGLSTagsDefaultTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLSTagsDefaultTypes.InnerSingleton;
	}
	static_assert(!int64(EGLSCustomCategoriesTypes::None)||!int64(EGLSCustomCategoriesTypes::Categories)||!int64(EGLSCustomCategoriesTypes::Classes)||!int64(EGLSCustomCategoriesTypes::Objects)||!int64(EGLSCustomCategoriesTypes::Tags), "'EGLSCustomCategoriesTypes' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLSCustomCategoriesTypes;
	static UEnum* EGLSCustomCategoriesTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLSCustomCategoriesTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLSCustomCategoriesTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("EGLSCustomCategoriesTypes"));
		}
		return Z_Registration_Info_UEnum_EGLSCustomCategoriesTypes.OuterSingleton;
	}
	template<> GLSDEMO_API UEnum* StaticEnum<EGLSCustomCategoriesTypes>()
	{
		return EGLSCustomCategoriesTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes_Statics::Enumerators[] = {
		{ "EGLSCustomCategoriesTypes::None", (int64)EGLSCustomCategoriesTypes::None },
		{ "EGLSCustomCategoriesTypes::Categories", (int64)EGLSCustomCategoriesTypes::Categories },
		{ "EGLSCustomCategoriesTypes::Classes", (int64)EGLSCustomCategoriesTypes::Classes },
		{ "EGLSCustomCategoriesTypes::Objects", (int64)EGLSCustomCategoriesTypes::Objects },
		{ "EGLSCustomCategoriesTypes::Tags", (int64)EGLSCustomCategoriesTypes::Tags },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Categories.Name", "EGLSCustomCategoriesTypes::Categories" },
		{ "Classes.Name", "EGLSCustomCategoriesTypes::Classes" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
		{ "None.Hide", "" },
		{ "None.Name", "EGLSCustomCategoriesTypes::None" },
		{ "Objects.Name", "EGLSCustomCategoriesTypes::Objects" },
		{ "Tags.Name", "EGLSCustomCategoriesTypes::Tags" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		"EGLSCustomCategoriesTypes",
		"EGLSCustomCategoriesTypes",
		Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes()
	{
		if (!Z_Registration_Info_UEnum_EGLSCustomCategoriesTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLSCustomCategoriesTypes.InnerSingleton, Z_Construct_UEnum_GLSDemo_EGLSCustomCategoriesTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLSCustomCategoriesTypes.InnerSingleton;
	}
	static_assert(!int64(EGLSLogType::Display)||!int64(EGLSLogType::Log)||!int64(EGLSLogType::Warning)||!int64(EGLSLogType::Error)||!int64(EGLSLogType::Verbose)||!int64(EGLSLogType::VeryVerbose)||!int64(EGLSLogType::Fatal)||!int64(EGLSLogType::NoLogging), "'EGLSLogType' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLSLogType;
	static UEnum* EGLSLogType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLSLogType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLSLogType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLSDemo_EGLSLogType, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("EGLSLogType"));
		}
		return Z_Registration_Info_UEnum_EGLSLogType.OuterSingleton;
	}
	template<> GLSDEMO_API UEnum* StaticEnum<EGLSLogType>()
	{
		return EGLSLogType_StaticEnum();
	}
	struct Z_Construct_UEnum_GLSDemo_EGLSLogType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLSDemo_EGLSLogType_Statics::Enumerators[] = {
		{ "EGLSLogType::Display", (int64)EGLSLogType::Display },
		{ "EGLSLogType::Log", (int64)EGLSLogType::Log },
		{ "EGLSLogType::Warning", (int64)EGLSLogType::Warning },
		{ "EGLSLogType::Error", (int64)EGLSLogType::Error },
		{ "EGLSLogType::Verbose", (int64)EGLSLogType::Verbose },
		{ "EGLSLogType::VeryVerbose", (int64)EGLSLogType::VeryVerbose },
		{ "EGLSLogType::Fatal", (int64)EGLSLogType::Fatal },
		{ "EGLSLogType::NoLogging", (int64)EGLSLogType::NoLogging },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLSDemo_EGLSLogType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Display.Name", "EGLSLogType::Display" },
		{ "Error.Name", "EGLSLogType::Error" },
		{ "Fatal.Hidden", "" },
		{ "Fatal.Name", "EGLSLogType::Fatal" },
		{ "Log.Name", "EGLSLogType::Log" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
		{ "NoLogging.Name", "EGLSLogType::NoLogging" },
		{ "Verbose.Name", "EGLSLogType::Verbose" },
		{ "VeryVerbose.Name", "EGLSLogType::VeryVerbose" },
		{ "Warning.Name", "EGLSLogType::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLSDemo_EGLSLogType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		"EGLSLogType",
		"EGLSLogType",
		Z_Construct_UEnum_GLSDemo_EGLSLogType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSLogType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLSDemo_EGLSLogType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSLogType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLSDemo_EGLSLogType()
	{
		if (!Z_Registration_Info_UEnum_EGLSLogType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLSLogType.InnerSingleton, Z_Construct_UEnum_GLSDemo_EGLSLogType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLSLogType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLSCategoryWithVerbosities;
class UScriptStruct* FGLSCategoryWithVerbosities::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLSCategoryWithVerbosities.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLSCategoryWithVerbosities.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("GLSCategoryWithVerbosities"));
	}
	return Z_Registration_Info_UScriptStruct_GLSCategoryWithVerbosities.OuterSingleton;
}
template<> GLSDEMO_API UScriptStruct* StaticStruct<FGLSCategoryWithVerbosities>()
{
	return FGLSCategoryWithVerbosities::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosities_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verbosities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Verbosities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLSCategoryWithVerbosities>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Category_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/GLS.EGLSLogType" },
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSCategoryWithVerbosities, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Verbosities_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Verbosities_Inner = { "Verbosities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GLSDemo_EGLSLogType, METADATA_PARAMS(nullptr, 0) }; // 3770678327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Verbosities_MetaData[] = {
		{ "Category", "GLS" },
		{ "Comment", "/** If the array is empty, then all logs of the selected category will be ignored and not added to the GLS editor. */" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
		{ "ToolTip", "If the array is empty, then all logs of the selected category will be ignored and not added to the GLS editor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Verbosities = { "Verbosities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSCategoryWithVerbosities, Verbosities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Verbosities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Verbosities_MetaData)) }; // 3770678327
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Verbosities_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Verbosities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewProp_Verbosities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		&NewStructOps,
		"GLSCategoryWithVerbosities",
		sizeof(FGLSCategoryWithVerbosities),
		alignof(FGLSCategoryWithVerbosities),
		Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities()
	{
		if (!Z_Registration_Info_UScriptStruct_GLSCategoryWithVerbosities.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLSCategoryWithVerbosities.InnerSingleton, Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GLSCategoryWithVerbosities.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLSLogInfo;
class UScriptStruct* FGLSLogInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLSLogInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLSLogInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLSLogInfo, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("GLSLogInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GLSLogInfo.OuterSingleton;
}
template<> GLSDEMO_API UScriptStruct* StaticStruct<FGLSLogInfo>()
{
	return FGLSLogInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGLSLogInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LogText;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogNum_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_LogNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLSLogInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSLogInfo, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Verbosity_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSLogInfo, Verbosity), Z_Construct_UEnum_GLSDemo_EGLSLogType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Verbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Verbosity_MetaData)) }; // 3770678327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_LogText_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_LogText = { "LogText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSLogInfo, LogText), METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_LogText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_LogText_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSLogInfo, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_LogNum_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_LogNum = { "LogNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSLogInfo, LogNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_LogNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_LogNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_FrameNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSLogInfo, FrameNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_FrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_FrameNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSLogInfo, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSLogInfo, Time), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSLogInfo, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "GLS" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSLogInfo, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ObjectName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLSLogInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Verbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Verbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_LogText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_LogNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_FrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewProp_ObjectName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLSLogInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		&NewStructOps,
		"GLSLogInfo",
		sizeof(FGLSLogInfo),
		alignof(FGLSLogInfo),
		Z_Construct_UScriptStruct_FGLSLogInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSLogInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGLSLogInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GLSLogInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLSLogInfo.InnerSingleton, Z_Construct_UScriptStruct_FGLSLogInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GLSLogInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLSJsonLogInfo;
class UScriptStruct* FGLSJsonLogInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLSJsonLogInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLSJsonLogInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLSJsonLogInfo, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("GLSJsonLogInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GLSJsonLogInfo.OuterSingleton;
}
template<> GLSDEMO_API UScriptStruct* StaticStruct<FGLSJsonLogInfo>()
{
	return FGLSJsonLogInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Logs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Logs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Logs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLSJsonLogInfo>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::NewProp_Logs_Inner = { "Logs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGLSLogInfo, METADATA_PARAMS(nullptr, 0) }; // 397973701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::NewProp_Logs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::NewProp_Logs = { "Logs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLSJsonLogInfo, Logs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::NewProp_Logs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::NewProp_Logs_MetaData)) }; // 397973701
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::NewProp_Logs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::NewProp_Logs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		&NewStructOps,
		"GLSJsonLogInfo",
		sizeof(FGLSJsonLogInfo),
		alignof(FGLSJsonLogInfo),
		Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGLSJsonLogInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GLSJsonLogInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLSJsonLogInfo.InnerSingleton, Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GLSJsonLogInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLSCustomCetegorySortType;
	static UEnum* EGLSCustomCetegorySortType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLSCustomCetegorySortType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLSCustomCetegorySortType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("EGLSCustomCetegorySortType"));
		}
		return Z_Registration_Info_UEnum_EGLSCustomCetegorySortType.OuterSingleton;
	}
	template<> GLSDEMO_API UEnum* StaticEnum<EGLSCustomCetegorySortType>()
	{
		return EGLSCustomCetegorySortType_StaticEnum();
	}
	struct Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType_Statics::Enumerators[] = {
		{ "EGLSCustomCetegorySortType::Newest", (int64)EGLSCustomCetegorySortType::Newest },
		{ "EGLSCustomCetegorySortType::Oldest", (int64)EGLSCustomCetegorySortType::Oldest },
		{ "EGLSCustomCetegorySortType::AZ", (int64)EGLSCustomCetegorySortType::AZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType_Statics::Enum_MetaDataParams[] = {
		{ "AZ.displayname", "A-Z" },
		{ "AZ.Name", "EGLSCustomCetegorySortType::AZ" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
		{ "Newest.Name", "EGLSCustomCetegorySortType::Newest" },
		{ "Oldest.Name", "EGLSCustomCetegorySortType::Oldest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		"EGLSCustomCetegorySortType",
		"EGLSCustomCetegorySortType",
		Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType()
	{
		if (!Z_Registration_Info_UEnum_EGLSCustomCetegorySortType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLSCustomCetegorySortType.InnerSingleton, Z_Construct_UEnum_GLSDemo_EGLSCustomCetegorySortType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLSCustomCetegorySortType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLSCustomCetegoryEditableModeType;
	static UEnum* EGLSCustomCetegoryEditableModeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLSCustomCetegoryEditableModeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLSCustomCetegoryEditableModeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("EGLSCustomCetegoryEditableModeType"));
		}
		return Z_Registration_Info_UEnum_EGLSCustomCetegoryEditableModeType.OuterSingleton;
	}
	template<> GLSDEMO_API UEnum* StaticEnum<EGLSCustomCetegoryEditableModeType>()
	{
		return EGLSCustomCetegoryEditableModeType_StaticEnum();
	}
	struct Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType_Statics::Enumerators[] = {
		{ "EGLSCustomCetegoryEditableModeType::None", (int64)EGLSCustomCetegoryEditableModeType::None },
		{ "EGLSCustomCetegoryEditableModeType::Favorite", (int64)EGLSCustomCetegoryEditableModeType::Favorite },
		{ "EGLSCustomCetegoryEditableModeType::Hidden", (int64)EGLSCustomCetegoryEditableModeType::Hidden },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Favorite.Name", "EGLSCustomCetegoryEditableModeType::Favorite" },
		{ "Hidden.Name", "EGLSCustomCetegoryEditableModeType::Hidden" },
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
		{ "None.Name", "EGLSCustomCetegoryEditableModeType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		"EGLSCustomCetegoryEditableModeType",
		"EGLSCustomCetegoryEditableModeType",
		Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType()
	{
		if (!Z_Registration_Info_UEnum_EGLSCustomCetegoryEditableModeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLSCustomCetegoryEditableModeType.InnerSingleton, Z_Construct_UEnum_GLSDemo_EGLSCustomCetegoryEditableModeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLSCustomCetegoryEditableModeType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FilteredLog;
class UScriptStruct* FFilteredLog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FilteredLog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FilteredLog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilteredLog, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("FilteredLog"));
	}
	return Z_Registration_Info_UScriptStruct_FilteredLog.OuterSingleton;
}
template<> GLSDEMO_API UScriptStruct* StaticStruct<FFilteredLog>()
{
	return FFilteredLog::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFilteredLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ListObjectPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilteredLog_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilteredLog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilteredLog>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilteredLog_Statics::NewProp_ListObjectPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FFilteredLog_Statics::NewProp_ListObjectPtr = { "ListObjectPtr", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilteredLog, ListObjectPtr), Z_Construct_UClass_UGLSLogInfoObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilteredLog_Statics::NewProp_ListObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilteredLog_Statics::NewProp_ListObjectPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilteredLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilteredLog_Statics::NewProp_ListObjectPtr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilteredLog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		&NewStructOps,
		"FilteredLog",
		sizeof(FFilteredLog),
		alignof(FFilteredLog),
		Z_Construct_UScriptStruct_FFilteredLog_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilteredLog_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFilteredLog_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilteredLog_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFilteredLog()
	{
		if (!Z_Registration_Info_UScriptStruct_FilteredLog.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FilteredLog.InnerSingleton, Z_Construct_UScriptStruct_FFilteredLog_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FilteredLog.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLSFilterLog;
class UScriptStruct* FGLSFilterLog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLSFilterLog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLSFilterLog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLSFilterLog, (UObject*)Z_Construct_UPackage__Script_GLSDemo(), TEXT("GLSFilterLog"));
	}
	return Z_Registration_Info_UScriptStruct_GLSFilterLog.OuterSingleton;
}
template<> GLSDEMO_API UScriptStruct* StaticStruct<FGLSFilterLog>()
{
	return FGLSFilterLog::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGLSFilterLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLSFilterLog_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGLSFilterLog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLSFilterLog>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLSFilterLog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLSDemo,
		nullptr,
		&NewStructOps,
		"GLSFilterLog",
		sizeof(FGLSFilterLog),
		alignof(FGLSFilterLog),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGLSFilterLog_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLSFilterLog_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGLSFilterLog()
	{
		if (!Z_Registration_Info_UScriptStruct_GLSFilterLog.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLSFilterLog.InnerSingleton, Z_Construct_UScriptStruct_FGLSFilterLog_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GLSFilterLog.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_GLSDemo_eventOnLogCategoryReceivedDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GLSDemo_eventOnLogCategoryReceivedDelegate_Parms, Category), METADATA_PARAMS(Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GLSDemo, nullptr, "OnLogCategoryReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::_Script_GLSDemo_eventOnLogCategoryReceivedDelegate_Parms), Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GLSDemo_OnLogCategoryReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLogCategoryReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLogCategoryReceivedDelegate, FName const& Category)
{
	struct _Script_GLSDemo_eventOnLogCategoryReceivedDelegate_Parms
	{
		FName Category;
	};
	_Script_GLSDemo_eventOnLogCategoryReceivedDelegate_Parms Parms;
	Parms.Category=Category;
	OnLogCategoryReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_GLSDemo_eventOnLogClassNameReceivedDelegate_Parms
		{
			FName ClassName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GLSDemo_eventOnLogClassNameReceivedDelegate_Parms, ClassName), METADATA_PARAMS(Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::NewProp_ClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::NewProp_ClassName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GLSDemo, nullptr, "OnLogClassNameReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::_Script_GLSDemo_eventOnLogClassNameReceivedDelegate_Parms), Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GLSDemo_OnLogClassNameReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLogClassNameReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLogClassNameReceivedDelegate, FName const& ClassName)
{
	struct _Script_GLSDemo_eventOnLogClassNameReceivedDelegate_Parms
	{
		FName ClassName;
	};
	_Script_GLSDemo_eventOnLogClassNameReceivedDelegate_Parms Parms;
	Parms.ClassName=ClassName;
	OnLogClassNameReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_GLSDemo_eventOnLogObjectNameReceivedDelegate_Parms
		{
			FName ObjectName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::NewProp_ObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GLSDemo_eventOnLogObjectNameReceivedDelegate_Parms, ObjectName), METADATA_PARAMS(Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::NewProp_ObjectName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::NewProp_ObjectName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GLSDemo, nullptr, "OnLogObjectNameReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::_Script_GLSDemo_eventOnLogObjectNameReceivedDelegate_Parms), Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GLSDemo_OnLogObjectNameReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLogObjectNameReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLogObjectNameReceivedDelegate, FName const& ObjectName)
{
	struct _Script_GLSDemo_eventOnLogObjectNameReceivedDelegate_Parms
	{
		FName ObjectName;
	};
	_Script_GLSDemo_eventOnLogObjectNameReceivedDelegate_Parms Parms;
	Parms.ObjectName=ObjectName;
	OnLogObjectNameReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_GLSDemo_eventOnLogTagsReceivedDelegate_Parms
		{
			TArray<FName> Tags;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GLSDemo_eventOnLogTagsReceivedDelegate_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::NewProp_Tags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::NewProp_Tags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GLSDemo, nullptr, "OnLogTagsReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::_Script_GLSDemo_eventOnLogTagsReceivedDelegate_Parms), Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GLSDemo_OnLogTagsReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLogTagsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLogTagsReceivedDelegate, TArray<FName> const& Tags)
{
	struct _Script_GLSDemo_eventOnLogTagsReceivedDelegate_Parms
	{
		TArray<FName> Tags;
	};
	_Script_GLSDemo_eventOnLogTagsReceivedDelegate_Parms Parms;
	Parms.Tags=Tags;
	OnLogTagsReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_GLSDemo_eventOnLogVerboseReceivedDelegate_Parms
		{
			EGLSLogType Verbose;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verbose_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verbose_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::NewProp_Verbose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::NewProp_Verbose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::NewProp_Verbose = { "Verbose", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GLSDemo_eventOnLogVerboseReceivedDelegate_Parms, Verbose), Z_Construct_UEnum_GLSDemo_EGLSLogType, METADATA_PARAMS(Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::NewProp_Verbose_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::NewProp_Verbose_MetaData)) }; // 3770678327
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::NewProp_Verbose_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::NewProp_Verbose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/GLSTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GLSDemo, nullptr, "OnLogVerboseReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::_Script_GLSDemo_eventOnLogVerboseReceivedDelegate_Parms), Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GLSDemo_OnLogVerboseReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLogVerboseReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLogVerboseReceivedDelegate, const EGLSLogType Verbose)
{
	struct _Script_GLSDemo_eventOnLogVerboseReceivedDelegate_Parms
	{
		EGLSLogType Verbose;
	};
	_Script_GLSDemo_eventOnLogVerboseReceivedDelegate_Parms Parms;
	Parms.Verbose=Verbose;
	OnLogVerboseReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_Statics::EnumInfo[] = {
		{ EGLSInputModeOverlay_StaticEnum, TEXT("EGLSInputModeOverlay"), &Z_Registration_Info_UEnum_EGLSInputModeOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4159124974U) },
		{ EGLSTagsDefaultTypes_StaticEnum, TEXT("EGLSTagsDefaultTypes"), &Z_Registration_Info_UEnum_EGLSTagsDefaultTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 334274507U) },
		{ EGLSCustomCategoriesTypes_StaticEnum, TEXT("EGLSCustomCategoriesTypes"), &Z_Registration_Info_UEnum_EGLSCustomCategoriesTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1771450913U) },
		{ EGLSLogType_StaticEnum, TEXT("EGLSLogType"), &Z_Registration_Info_UEnum_EGLSLogType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3770678327U) },
		{ EGLSCustomCetegorySortType_StaticEnum, TEXT("EGLSCustomCetegorySortType"), &Z_Registration_Info_UEnum_EGLSCustomCetegorySortType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4051814957U) },
		{ EGLSCustomCetegoryEditableModeType_StaticEnum, TEXT("EGLSCustomCetegoryEditableModeType"), &Z_Registration_Info_UEnum_EGLSCustomCetegoryEditableModeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 616603167U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_Statics::ScriptStructInfo[] = {
		{ FGLSCategoryWithVerbosities::StaticStruct, Z_Construct_UScriptStruct_FGLSCategoryWithVerbosities_Statics::NewStructOps, TEXT("GLSCategoryWithVerbosities"), &Z_Registration_Info_UScriptStruct_GLSCategoryWithVerbosities, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLSCategoryWithVerbosities), 644546727U) },
		{ FGLSLogInfo::StaticStruct, Z_Construct_UScriptStruct_FGLSLogInfo_Statics::NewStructOps, TEXT("GLSLogInfo"), &Z_Registration_Info_UScriptStruct_GLSLogInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLSLogInfo), 397973701U) },
		{ FGLSJsonLogInfo::StaticStruct, Z_Construct_UScriptStruct_FGLSJsonLogInfo_Statics::NewStructOps, TEXT("GLSJsonLogInfo"), &Z_Registration_Info_UScriptStruct_GLSJsonLogInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLSJsonLogInfo), 2977418569U) },
		{ FFilteredLog::StaticStruct, Z_Construct_UScriptStruct_FFilteredLog_Statics::NewStructOps, TEXT("FilteredLog"), &Z_Registration_Info_UScriptStruct_FilteredLog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFilteredLog), 1122193809U) },
		{ FGLSFilterLog::StaticStruct, Z_Construct_UScriptStruct_FGLSFilterLog_Statics::NewStructOps, TEXT("GLSFilterLog"), &Z_Registration_Info_UScriptStruct_GLSFilterLog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLSFilterLog), 622376838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_3383084920(TEXT("/Script/GLSDemo"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_builds_gls_demo_6_5_2_HostProject_Plugins_GameLogsSystemDemo_Source_GLSDemo_Public_Types_GLSTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
