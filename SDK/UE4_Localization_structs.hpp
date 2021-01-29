#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Localization.ELocalizationTargetLoadingPolicy
enum class ELocalizationTargetLoadingPolicy : uint8_t
{
	ELocalizationTargetLoadingPolicy__Never = 0,
	ELocalizationTargetLoadingPolicy__Always = 1,
	ELocalizationTargetLoadingPolicy__Editor = 2,
	ELocalizationTargetLoadingPolicy__Game = 3,
	ELocalizationTargetLoadingPolicy__PropertyNames = 4,
	ELocalizationTargetLoadingPolicy__ToolTips = 5,
	ELocalizationTargetLoadingPolicy__ELocalizationTargetLoadingPolicy_MAX = 6
};


// Enum Localization.ELocalizationTargetConflictStatus
enum class ELocalizationTargetConflictStatus : uint8_t
{
	ELocalizationTargetConflictStatus__Unknown = 0,
	ELocalizationTargetConflictStatus__ConflictsPresent = 1,
	ELocalizationTargetConflictStatus__Clear = 2,
	ELocalizationTargetConflictStatus__ELocalizationTargetConflictStatus_MAX = 3
};


// Enum Localization.ELocalizedTextCollapseMode
enum class ELocalizedTextCollapseMode : uint8_t
{
	ELocalizedTextCollapseMode__IdenticalTextIdAndSource = 0,
	ELocalizedTextCollapseMode__IdenticalPackageIdTextIdAndSource = 1,
	ELocalizedTextCollapseMode__IdenticalNamespaceAndSource = 2,
	ELocalizedTextCollapseMode__ELocalizedTextCollapseMode_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Localization.GatherTextSearchDirectory
// 0x0010
struct FGatherTextSearchDirectory
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Localization.GatherTextExcludePath
// 0x0010
struct FGatherTextExcludePath
{
	struct FString                                     Pattern;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Localization.GatherTextFileExtension
// 0x0010
struct FGatherTextFileExtension
{
	struct FString                                     Pattern;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Localization.GatherTextFromTextFilesConfiguration
// 0x0040
struct FGatherTextFromTextFilesConfiguration
{
	bool                                               IsEnabled;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FGatherTextSearchDirectory>          SearchDirectories;                                        // 0x0008(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGatherTextExcludePath>              ExcludePathWildcards;                                     // 0x0018(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGatherTextFileExtension>            FileExtensions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               ShouldGatherFromEditorOnlyData;                           // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Localization.GatherTextIncludePath
// 0x0010
struct FGatherTextIncludePath
{
	struct FString                                     Pattern;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Localization.GatherTextFromPackagesConfiguration
// 0x0050
struct FGatherTextFromPackagesConfiguration
{
	bool                                               IsEnabled;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FGatherTextIncludePath>              IncludePathWildcards;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGatherTextExcludePath>              ExcludePathWildcards;                                     // 0x0018(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGatherTextFileExtension>            FileExtensions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               Collections;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               ShouldGatherFromEditorOnlyData;                           // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               SkipGatherCache;                                          // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct Localization.MetaDataKeyName
// 0x0010
struct FMetaDataKeyName
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Localization.MetaDataTextKeyPattern
// 0x0010
struct FMetaDataTextKeyPattern
{
	struct FString                                     Pattern;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Localization.MetaDataKeyGatherSpecification
// 0x0030
struct FMetaDataKeyGatherSpecification
{
	struct FMetaDataKeyName                            MetaDataKey;                                              // 0x0000(0x0010) (Edit, Config)
	struct FString                                     TextNamespace;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	struct FMetaDataTextKeyPattern                     TextKeyPattern;                                           // 0x0020(0x0010) (Edit, Config)
};

// ScriptStruct Localization.GatherTextFromMetaDataConfiguration
// 0x0040
struct FGatherTextFromMetaDataConfiguration
{
	bool                                               IsEnabled;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FGatherTextIncludePath>              IncludePathWildcards;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGatherTextExcludePath>              ExcludePathWildcards;                                     // 0x0018(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FMetaDataKeyGatherSpecification>     KeySpecifications;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               ShouldGatherFromEditorOnlyData;                           // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Localization.LocalizationExportingSettings
// 0x0003
struct FLocalizationExportingSettings
{
	ELocalizedTextCollapseMode                         CollapseMode;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ShouldPersistCommentsOnExport;                            // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ShouldAddSourceLocationsAsComments;                       // 0x0002(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Localization.LocalizationCompilationSettings
// 0x0001
struct FLocalizationCompilationSettings
{
	bool                                               SkipSourceCheck;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Localization.LocalizationImportDialogueSettings
// 0x0028
struct FLocalizationImportDialogueSettings
{
	struct FDirectoryPath                              RawAudioPath;                                             // 0x0000(0x0010) (Edit, Config)
	struct FString                                     ImportedDialogueFolder;                                   // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bImportNativeAsSource;                                    // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Localization.CultureStatistics
// 0x0018
struct FCultureStatistics
{
	struct FString                                     CultureName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	uint32_t                                           WordCount;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Localization.LocalizationTargetSettings
// 0x0170
struct FLocalizationTargetSettings
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FGuid                                       Guid;                                                     // 0x0010(0x0010) (Config, IsPlainOldData)
	ELocalizationTargetConflictStatus                  ConflictStatus;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FGuid>                               TargetDependencies;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FFilePath>                           AdditionalManifestDependencies;                           // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             RequiredModuleNames;                                      // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FGatherTextFromTextFilesConfiguration       GatherFromTextFiles;                                      // 0x0058(0x0040) (Edit, Config)
	struct FGatherTextFromPackagesConfiguration        GatherFromPackages;                                       // 0x0098(0x0050) (Edit, Config)
	struct FGatherTextFromMetaDataConfiguration        GatherFromMetaData;                                       // 0x00E8(0x0040) (Edit, Config)
	struct FLocalizationExportingSettings              ExportSettings;                                           // 0x0128(0x0003) (Edit, Config)
	struct FLocalizationCompilationSettings            CompileSettings;                                          // 0x012B(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FLocalizationImportDialogueSettings         ImportDialogueSettings;                                   // 0x0130(0x0028) (Edit, Config)
	int                                                NativeCultureIndex;                                       // 0x0158(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	TArray<struct FCultureStatistics>                  SupportedCulturesStatistics;                              // 0x0160(0x0010) (Edit, ZeroConstructor, Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
