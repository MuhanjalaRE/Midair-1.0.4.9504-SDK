#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutomationMessages.AutomationWorkerPerformanceDataResponse
// 0x0018
struct FAutomationWorkerPerformanceDataResponse
{
	bool                                               bSuccess;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ErrorMessage;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AutomationMessages.AutomationWorkerPerformanceDataRequest
// 0x0040
struct FAutomationWorkerPerformanceDataRequest
{
	struct FString                                     Platform;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Hardware;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     TestName;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<double>                                     DataPoints;                                               // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AutomationMessages.AutomationWorkerTestDataResponse
// 0x0018
struct FAutomationWorkerTestDataResponse
{
	struct FString                                     JsonData;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsNew;                                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerTestDataRequest
// 0x0050
struct FAutomationWorkerTestDataRequest
{
	struct FString                                     DataType;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DataPlatform;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DataTestName;                                             // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DataName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     JsonData;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AutomationMessages.AutomationWorkerImageComparisonResults
// 0x0028
struct FAutomationWorkerImageComparisonResults
{
	bool                                               bNew;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSimilar;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	double                                             MaxLocalDifference;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             GlobalDifference;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorMessage;                                             // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AutomationMessages.AutomationScreenshotMetadata
// 0x0108
struct FAutomationScreenshotMetadata
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Context;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ID;                                                       // 0x0020(0x0010) (Edit, IsPlainOldData)
	struct FString                                     Commit;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
	int                                                Width;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     RHI;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Platform;                                                 // 0x0058(0x0010) (Edit, ZeroConstructor)
	struct FString                                     FeatureLevel;                                             // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsStereo;                                                // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     Vendor;                                                   // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FString                                     AdapterName;                                              // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FString                                     AdapterInternalDriverVersion;                             // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     AdapterUserDriverVersion;                                 // 0x00B0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     UniqueDeviceId;                                           // 0x00C0(0x0010) (Edit, ZeroConstructor)
	float                                              ResolutionQuality;                                        // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ViewDistanceQuality;                                      // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AntiAliasingQuality;                                      // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PostProcessQuality;                                       // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TextureQuality;                                           // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EffectsQuality;                                           // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FoliageQuality;                                           // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasComparisonRules;                                      // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceRed;                                             // 0x00F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceGreen;                                           // 0x00F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceBlue;                                            // 0x00F3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceAlpha;                                           // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceMinBrightness;                                   // 0x00F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToleranceMaxBrightness;                                   // 0x00F6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00F7(0x0001) MISSED OFFSET
	float                                              MaximumLocalError;                                        // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumGlobalError;                                       // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAntiAliasing;                                      // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreColors;                                            // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerScreenImage
// 0x0128
struct FAutomationWorkerScreenImage
{
	TArray<unsigned char>                              ScreenImage;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ScreenShotName;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FAutomationScreenshotMetadata               MetaData;                                                 // 0x0020(0x0108) (Edit)
};

// ScriptStruct AutomationMessages.AutomationWorkerNextNetworkCommandReply
// 0x0001
struct FAutomationWorkerNextNetworkCommandReply
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestNextNetworkCommand
// 0x0004
struct FAutomationWorkerRequestNextNetworkCommand
{
	uint32_t                                           ExecutionCount;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AutomationMessages.AutomationWorkerRunTestsReply
// 0x0038
struct FAutomationWorkerRunTestsReply
{
	struct FString                                     TestName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAutomationEvent>                    Events;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	int                                                WarningTotal;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ErrorTotal;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ExecutionCount;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRunTests
// 0x0030
struct FAutomationWorkerRunTests
{
	uint32_t                                           ExecutionCount;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RoleIndex;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     TestName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     BeautifiedTestName;                                       // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bSendAnalytics;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTestsReplyComplete
// 0x0001
struct FAutomationWorkerRequestTestsReplyComplete
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTestsReply
// 0x0088
struct FAutomationWorkerRequestTestsReply
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     FullTestPath;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     TestName;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     TestParameter;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SourceFile;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)
	int                                                SourceFileLine;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     AssetPath;                                                // 0x0058(0x0010) (Edit, ZeroConstructor)
	struct FString                                     OpenCommand;                                              // 0x0068(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           TestFlags;                                                // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           NumParticipantsRequired;                                  // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TotalNumTests;                                            // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTests
// 0x0008
struct FAutomationWorkerRequestTests
{
	bool                                               DeveloperDirectoryIncluded;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           RequestedTestFlags;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AutomationMessages.AutomationWorkerPong
// 0x0001
struct FAutomationWorkerPong
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerResetTests
// 0x0001
struct FAutomationWorkerResetTests
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerPing
// 0x0001
struct FAutomationWorkerPing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerWorkerOffline
// 0x0001
struct FAutomationWorkerWorkerOffline
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerFindWorkersResponse
// 0x0098
struct FAutomationWorkerFindWorkersResponse
{
	struct FString                                     DeviceName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     InstanceName;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Platform;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     OSVersionName;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ModelName;                                                // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FString                                     GPUName;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CPUModelName;                                             // 0x0060(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           RAMInGB;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     RenderModeName;                                           // 0x0078(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0088(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct AutomationMessages.AutomationWorkerFindWorkers
// 0x0038
struct FAutomationWorkerFindWorkers
{
	int                                                Changelist;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     GameName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ProcessName;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0028(0x0010) (Edit, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
