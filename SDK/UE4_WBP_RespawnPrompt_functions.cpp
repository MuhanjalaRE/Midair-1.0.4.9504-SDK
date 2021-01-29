// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_RespawnPrompt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetShouldShowSteamSync
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_RespawnPrompt_C::GetShouldShowSteamSync(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetShouldShowSteamSync");

	UWBP_RespawnPrompt_C_GetShouldShowSteamSync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.Get_SyncTextBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_RespawnPrompt_C::Get_SyncTextBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.Get_SyncTextBox_Visibility_1");

	UWBP_RespawnPrompt_C_Get_SyncTextBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetRespawnLeaderText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_RespawnPrompt_C::GetRespawnLeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetRespawnLeaderText");

	UWBP_RespawnPrompt_C_GetRespawnLeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetEntireWidgetVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_RespawnPrompt_C::GetEntireWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetEntireWidgetVisibility");

	UWBP_RespawnPrompt_C_GetEntireWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetLoadoutName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_RespawnPrompt_C::GetLoadoutName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetLoadoutName");

	UWBP_RespawnPrompt_C_GetLoadoutName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetQuickSpawnButtonLeadingText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_RespawnPrompt_C::GetQuickSpawnButtonLeadingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetQuickSpawnButtonLeadingText");

	UWBP_RespawnPrompt_C_GetQuickSpawnButtonLeadingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetFullSpawnButtonLeadingText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_RespawnPrompt_C::GetFullSpawnButtonLeadingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetFullSpawnButtonLeadingText");

	UWBP_RespawnPrompt_C_GetFullSpawnButtonLeadingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.CommonFloatToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_RespawnPrompt_C::CommonFloatToText(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.CommonFloatToText");

	UWBP_RespawnPrompt_C_CommonFloatToText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetBasicSpawnVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_RespawnPrompt_C::GetBasicSpawnVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetBasicSpawnVisibility");

	UWBP_RespawnPrompt_C_GetBasicSpawnVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetPressSpawnVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_RespawnPrompt_C::GetPressSpawnVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetPressSpawnVisibility");

	UWBP_RespawnPrompt_C_GetPressSpawnVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
