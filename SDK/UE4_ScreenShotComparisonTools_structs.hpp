#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ScreenShotComparisonTools.ImageTolerance
// 0x0010
struct FImageTolerance
{
	unsigned char                                      Red;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Green;                                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Blue;                                                     // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Alpha;                                                    // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinBrightness;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxBrightness;                                            // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreAntiAliasing;                                       // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreColors;                                             // 0x0007(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumLocalError;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumGlobalError;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ScreenShotComparisonTools.ImageComparisonResult
// 0x0098
struct FImageComparisonResult
{
	struct FString                                     ApprovedFile;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     IncomingFile;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ComparisonFile;                                           // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     ReportApprovedFile;                                       // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     ReportIncomingFile;                                       // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     ReportComparisonFile;                                     // 0x0050(0x0010) (ZeroConstructor)
	double                                             MaxLocalDifference;                                       // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             GlobalDifference;                                         // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorMessage;                                             // 0x0070(0x0018)
	struct FImageTolerance                             Tolerance;                                                // 0x0088(0x0010)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
