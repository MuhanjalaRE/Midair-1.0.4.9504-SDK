#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_NVIDIAGfeSDK_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll
struct UHighlightsFunctionLibrary_Poll_Params
{
};

// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable
struct UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Params
{
	struct FGfeSDKCreateResponse                       InitProperties;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               VideoGranted;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ScreenshotsGranted;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGfeSDKPermission                                  Video;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGfeSDKPermission                                  Screenshots;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NVIDIAGfeSDK.InitHighlights.InitHighlights
struct UInitHighlights_InitHighlights_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InGameName;                                               // (ConstParm, Parm, ZeroConstructor)
	bool                                               Video;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Screenshots;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInitHighlights*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure
struct UHighlightsConfigureAsync_HighlightsConfigure_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGfeSDKHighlightConfigParams                ConfigParams;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UHighlightsConfigureAsync*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup
struct UHighlightsOpenGroupAsync_HighlightsOpenGroup_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGfeSDKHighlightOpenGroupParams             Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UHighlightsOpenGroupAsync*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup
struct UHighlightsCloseGroupAsync_HighlightsCloseGroup_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupId;                                                  // (Parm, ZeroConstructor)
	bool                                               DestroyHighlights;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UHighlightsCloseGroupAsync*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot
struct UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     HighlightId;                                              // (Parm, ZeroConstructor)
	class UHighlightsSetScreenshotAsync*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo
struct UHighlightsSetVideoAsync_HighlightsSetVideo_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     HighlightId;                                              // (Parm, ZeroConstructor)
	int                                                StartDelta;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                EndDelta;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UHighlightsSetVideoAsync*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary
struct UHighlightsSummaryAsync_HighlightsOpenSummary_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGfeSDKHighlightSummaryParams               Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UHighlightsSummaryAsync*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights
struct UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupId;                                                  // (Parm, ZeroConstructor)
	EGfeSDKHighlightType                               TagFilter;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EGfeSDKHighlightSignificance                       SignificanceFilter;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UHighlightsGetNumberAsync*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions
struct URequestPermissionsAsync_GFERequestPermissions_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Video;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Screenshots;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class URequestPermissionsAsync*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
