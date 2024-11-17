// Copyright (c) 2024 Fergius Engineering.

#pragma once

#include <CoreMinimal.h>
#include <Logging/LogVerbosity.h>
#include <Misc/TextFilterExpressionEvaluator.h>

#include "GLS.h"

#include "GLSTypes.generated.h"

UENUM(BlueprintType)
enum class EGLSInputModeOverlay : uint8
{
    None = 0b0 UMETA(Hide),
    GameOnly,
    UIOnly,
    GameAndUI
};

UENUM(BlueprintType, Meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EGLSTagsDefaultTypes : uint8
{
    None = 0b0 UMETA(Hide),
    Pie = 0b1,
    Role = 0b10,
    Function = 0b100,
    PlayerName = 0b10000
};
ENUM_CLASS_FLAGS(EGLSTagsDefaultTypes);

UENUM(BlueprintType, Meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EGLSCustomCategoriesTypes : uint8
{
    None = 0b0 UMETA(Hide),
    Categories = 0b1,
    Classes = 0b10,
    Objects = 0b100,
    Tags = 0b1000
};
ENUM_CLASS_FLAGS(EGLSCustomCategoriesTypes);

UENUM(BlueprintType)
enum class EGLSLogType : uint8
{
    Display = ELogVerbosity::Display,
    Log = ELogVerbosity::Log,
    Warning = ELogVerbosity::Warning,
    Error = ELogVerbosity::Error,
    Verbose = ELogVerbosity::Verbose,
    VeryVerbose = ELogVerbosity::VeryVerbose,
    Fatal = ELogVerbosity::Fatal UMETA(Hidden),
    NoLogging = ELogVerbosity::NoLogging
};
ENUM_CLASS_FLAGS(EGLSLogType);

USTRUCT(BlueprintType)
struct GLSDEMO_API FGLSCategoryWithVerbosities
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "/Script/GLS.EGLSLogType", Category = GLS))
    FName Category;

    /** If the array is empty, then all logs of the selected category will be ignored and not added to the GLS editor. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GLS)
    TArray<EGLSLogType> Verbosities;
};

//TODO: init default from ini
struct FGLSLogSettings
{
    bool bLogsWithTime = false;

    bool bLogsWithFrame = false;

    bool bLogsWithCategory = false;

    bool bLogsWithVerbosity = false;

    bool bLogsWithObjectName = false;

    bool bLogsWithClassName = false;

    bool bLogsWithTags = false;

    bool bLogsDuplicates = true;
};

USTRUCT(BlueprintType)
struct GLSDEMO_API FGLSLogInfo
{
    GENERATED_BODY()

    FGLSLogInfo() = default;

    FGLSLogInfo(UObject* Context);

    FGLSLogInfo(const FString& LogStr);

    FGLSLogInfo(const FDateTime& Time, const int32 Frame, const FName Category, const EGLSLogType Verbosity, const FString& LogStr);

    UPROPERTY(BlueprintReadOnly, Category = GLS)
    FName Category;

    UPROPERTY(BlueprintReadOnly, Category = GLS)
    EGLSLogType Verbosity = EGLSLogType::VeryVerbose;

    UPROPERTY(BlueprintReadOnly, Category = GLS)
    FString LogText;

    UPROPERTY(BlueprintReadOnly, Category = GLS)
    TArray<FName> Tags;

    UPROPERTY()
    uint64 LogNum = 0;

    UPROPERTY()
    int32 FrameNumber = 0;

    bool operator==(const FGLSLogInfo& Other) { return this->ID == Other.ID; }

    const FGuid& GetID() const { return ID; }

    const FName& GetClassName() const { return ClassName; }

    const FName& GetObjectName() const { return ObjectName; }

    const FDateTime& GetTime() const { return Time; }

    const TCHAR* GetVerbosityStr() const { return ToString(static_cast<ELogVerbosity::Type>(Verbosity)); }

    bool IsContextValid() const { return ClassName.IsValid(); }

protected:
    UPROPERTY(BlueprintReadOnly, Category = GLS)
    FGuid ID;

    UPROPERTY(BlueprintReadOnly, Category = GLS)
    FDateTime Time = FDateTime::MinValue();

    UPROPERTY(BlueprintReadOnly, Category = GLS)
    FName ClassName;

    UPROPERTY(BlueprintReadOnly, Category = GLS)
    FName ObjectName;
};

USTRUCT(BlueprintType)
struct GLSDEMO_API FGLSJsonLogInfo
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<FGLSLogInfo> Logs;
};

UENUM(BlueprintType)
enum class EGLSCustomCetegorySortType : uint8
{
    Newest,
    Oldest,
    AZ UMETA(displayname = "A-Z"),
};

UENUM(BlueprintType)
enum class EGLSCustomCetegoryEditableModeType : uint8
{
    None,
    Favorite,
    Hidden,
};

USTRUCT()
struct GLSDEMO_API FFilteredLog
{
    GENERATED_BODY()

    bool bEnabled = true;

    UPROPERTY(Transient)
    TObjectPtr<class UGLSLogInfoObject> ListObjectPtr;

    //TODO: disabled mechanic
    int32 DuplicateNumber = 1;
};

USTRUCT()
struct GLSDEMO_API FGLSFilterLog
{
    GENERATED_BODY()

    FGLSFilterLog()
        : ExpressionEvaluator(ETextFilterExpressionEvaluatorMode::BasicString)
    {
    }

    EGLSLogType Verbosity = EGLSLogType::NoLogging;

    FName Category;

    FName ClassName;

    FName ObjectName;

    FName Tag;

    FTextFilterExpressionEvaluator ExpressionEvaluator;
};

struct FContainerFilters
{
    FContainerFilters(const TArray<FGLSFilterLog>& Filters)
    {
        CategoryFilters = Filters.FilterByPredicate([](const FGLSFilterLog& It)
            {
                return !It.Category.IsNone();
            });

        ClassNameFilters = Filters.FilterByPredicate([](const FGLSFilterLog& It)
            {
                return !It.ClassName.IsNone();
            });

        ObjectNameFilters = Filters.FilterByPredicate([](const FGLSFilterLog& It)
            {
                return !It.ObjectName.IsNone();
            });

        TagFilters = Filters.FilterByPredicate([](const FGLSFilterLog& It)
            {
                return !It.Tag.IsNone();
            });

        VerbosityFilters = Filters.FilterByPredicate([](const FGLSFilterLog& It)
            {
                return It.Verbosity != EGLSLogType::NoLogging;
            });

        TextFilters = Filters.FilterByPredicate([](const FGLSFilterLog& It)
            {
                return !It.ExpressionEvaluator.GetFilterText().IsEmpty();
            });
    }

    TArray<FGLSFilterLog> CategoryFilters;
    TArray<FGLSFilterLog> ClassNameFilters;
    TArray<FGLSFilterLog> ObjectNameFilters;
    TArray<FGLSFilterLog> TagFilters;
    TArray<FGLSFilterLog> VerbosityFilters;
    TArray<FGLSFilterLog> TextFilters;

    FDateTime LastClearOnPIE;

private:
    FContainerFilters() = default;
};

/** Uses to store all information from UE about received logs, categories etc */
struct FLogsFullData
{
public:
    TArray<TSharedPtr<FGLSLogInfo>> RecievedLogs;

    TSet<FName> ReceivedCategories;

    TSet<EGLSLogType> ReceivedLogTypes;

    TSet<FName> ReceivedClassNames;

    TSet<FName> ReceivedObjectNames;

    TSet<FName> ReceivedLogTags;

public:
    TSharedPtr<FGLSLogInfo>& AddLogData(TUniquePtr<FGLSLogInfo>&& NewLog, bool& OutCategoryRecieved, bool& OutVerboseRecieved, bool& OutClassNameRecieved, bool& OutObjectNameRecieved, bool& OutTagsRecieved, TArray<FName>& OutNewTags);
};

DECLARE_MULTICAST_DELEGATE_OneParam(FOnLogReceivedDelegate, const TSharedPtr<FGLSLogInfo>&);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLogCategoryReceivedDelegate, const FName&, Category);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLogClassNameReceivedDelegate, const FName&, ClassName);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLogObjectNameReceivedDelegate, const FName&, ObjectName);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLogTagsReceivedDelegate, const TArray<FName>&, Tags);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLogVerboseReceivedDelegate, const EGLSLogType, Verbose);