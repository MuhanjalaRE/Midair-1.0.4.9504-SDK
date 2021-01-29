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
//Enums
//---------------------------------------------------------------------------

// Enum AutomationController.EAutomationArtifactType
enum class EAutomationArtifactType : uint8_t
{
	EAutomationArtifactType__None  = 0,
	EAutomationArtifactType__Image = 1,
	EAutomationArtifactType__Comparison = 2,
	EAutomationArtifactType__EAutomationArtifactType_MAX = 3
};


// Enum AutomationController.EAutomationState
enum class EAutomationState : uint8_t
{
	EAutomationState__NotRun       = 0,
	EAutomationState__InProcess    = 1,
	EAutomationState__Fail         = 2,
	EAutomationState__Success      = 3,
	EAutomationState__NotEnoughParticipants = 4,
	EAutomationState__EAutomationState_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutomationController.AutomationArtifact
// 0x00B8
struct FAutomationArtifact
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	EAutomationArtifactType                            Type;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TMap<struct FString, struct FString>               Files;                                                    // 0x0018(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0068(0x0050) MISSED OFFSET
};

// ScriptStruct AutomationController.AutomatedTestResult
// 0x0060
struct FAutomatedTestResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FString                                     TestDisplayName;                                          // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     FullTestPath;                                             // 0x0020(0x0010) (ZeroConstructor)
	EAutomationState                                   State;                                                    // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FAutomationArtifact>                 Artifacts;                                                // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FAutomationEvent>                    Events;                                                   // 0x0048(0x0010) (ZeroConstructor)
	int                                                Warnings;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Errors;                                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AutomationController.AutomatedTestPassResults
// 0x0038
struct FAutomatedTestPassResults
{
	int                                                Succeeded;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SucceededWithWarnings;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Failed;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NotRun;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ComparisonExported;                                       // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     ComparisonExportDirectory;                                // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FAutomatedTestResult>                Tests;                                                    // 0x0028(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
