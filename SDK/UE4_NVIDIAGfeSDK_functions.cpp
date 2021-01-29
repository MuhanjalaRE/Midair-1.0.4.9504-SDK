// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_NVIDIAGfeSDK_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll
// (Final, Native, Static, Public, BlueprintCallable)

void UHighlightsFunctionLibrary::STATIC_Poll()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll");

	UHighlightsFunctionLibrary_Poll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGfeSDKCreateResponse   InitProperties                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           VideoGranted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ScreenshotsGranted             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGfeSDKPermission              Video                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGfeSDKPermission              Screenshots                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHighlightsFunctionLibrary::STATIC_ChekIfHighlightsAvailable(const struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, EGfeSDKPermission* Video, EGfeSDKPermission* Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable");

	UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Params params;
	params.InitProperties = InitProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VideoGranted != nullptr)
		*VideoGranted = params.VideoGranted;
	if (ScreenshotsGranted != nullptr)
		*ScreenshotsGranted = params.ScreenshotsGranted;
	if (Video != nullptr)
		*Video = params.Video;
	if (Screenshots != nullptr)
		*Screenshots = params.Screenshots;
}


// Function NVIDIAGfeSDK.InitHighlights.InitHighlights
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InGameName                     (ConstParm, Parm, ZeroConstructor)
// bool                           Video                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Screenshots                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInitHighlights*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInitHighlights* UInitHighlights::STATIC_InitHighlights(class UObject* WorldContextObject, const struct FString& InGameName, bool Video, bool Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.InitHighlights.InitHighlights");

	UInitHighlights_InitHighlights_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InGameName = InGameName;
	params.Video = Video;
	params.Screenshots = Screenshots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGfeSDKHighlightConfigParams ConfigParams                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UHighlightsConfigureAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHighlightsConfigureAsync* UHighlightsConfigureAsync::STATIC_HighlightsConfigure(class UObject* WorldContextObject, const struct FGfeSDKHighlightConfigParams& ConfigParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure");

	UHighlightsConfigureAsync_HighlightsConfigure_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ConfigParams = ConfigParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGfeSDKHighlightOpenGroupParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UHighlightsOpenGroupAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHighlightsOpenGroupAsync* UHighlightsOpenGroupAsync::STATIC_HighlightsOpenGroup(class UObject* WorldContextObject, const struct FGfeSDKHighlightOpenGroupParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup");

	UHighlightsOpenGroupAsync_HighlightsOpenGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GroupId                        (Parm, ZeroConstructor)
// bool                           DestroyHighlights              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UHighlightsCloseGroupAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHighlightsCloseGroupAsync* UHighlightsCloseGroupAsync::STATIC_HighlightsCloseGroup(class UObject* WorldContextObject, const struct FString& GroupId, bool DestroyHighlights)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup");

	UHighlightsCloseGroupAsync_HighlightsCloseGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.DestroyHighlights = DestroyHighlights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GroupId                        (Parm, ZeroConstructor)
// struct FString                 HighlightId                    (Parm, ZeroConstructor)
// class UHighlightsSetScreenshotAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHighlightsSetScreenshotAsync* UHighlightsSetScreenshotAsync::STATIC_HighlightsSetScreenshot(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot");

	UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.HighlightId = HighlightId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GroupId                        (Parm, ZeroConstructor)
// struct FString                 HighlightId                    (Parm, ZeroConstructor)
// int                            StartDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            EndDelta                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UHighlightsSetVideoAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHighlightsSetVideoAsync* UHighlightsSetVideoAsync::STATIC_HighlightsSetVideo(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId, int StartDelta, int EndDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo");

	UHighlightsSetVideoAsync_HighlightsSetVideo_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.HighlightId = HighlightId;
	params.StartDelta = StartDelta;
	params.EndDelta = EndDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGfeSDKHighlightSummaryParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UHighlightsSummaryAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHighlightsSummaryAsync* UHighlightsSummaryAsync::STATIC_HighlightsOpenSummary(class UObject* WorldContextObject, const struct FGfeSDKHighlightSummaryParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary");

	UHighlightsSummaryAsync_HighlightsOpenSummary_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GroupId                        (Parm, ZeroConstructor)
// EGfeSDKHighlightType           TagFilter                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EGfeSDKHighlightSignificance   SignificanceFilter             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UHighlightsGetNumberAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHighlightsGetNumberAsync* UHighlightsGetNumberAsync::STATIC_HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const struct FString& GroupId, EGfeSDKHighlightType TagFilter, EGfeSDKHighlightSignificance SignificanceFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights");

	UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.TagFilter = TagFilter;
	params.SignificanceFilter = SignificanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Video                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Screenshots                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class URequestPermissionsAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URequestPermissionsAsync* URequestPermissionsAsync::STATIC_GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions");

	URequestPermissionsAsync_GFERequestPermissions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Video = Video;
	params.Screenshots = Screenshots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
