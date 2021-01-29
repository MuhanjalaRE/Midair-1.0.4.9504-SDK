// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_HUD2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_HUD2.WBP_HUD2_C.GetGamePaused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_HUD2_C::GetGamePaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.GetGamePaused");

	UWBP_HUD2_C_GetGamePaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_HUD2.WBP_HUD2_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_HUD2_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.GetVisibility_2");

	UWBP_HUD2_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_HUD2.WBP_HUD2_C.Get_MapInfoBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_HUD2_C::Get_MapInfoBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.Get_MapInfoBox_Visibility_1");

	UWBP_HUD2_C_Get_MapInfoBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_HUD2.WBP_HUD2_C.Get_ServerNameText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_HUD2_C::Get_ServerNameText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.Get_ServerNameText_Text_1");

	UWBP_HUD2_C_Get_ServerNameText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_HUD2.WBP_HUD2_C.Get_MapNameText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_HUD2_C::Get_MapNameText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.Get_MapNameText_Text_1");

	UWBP_HUD2_C_Get_MapNameText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_HUD2.WBP_HUD2_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_HUD2_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.GetVisibility_1");

	UWBP_HUD2_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_HUD2.WBP_HUD2_C.Get_ChatSlotContainer_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_HUD2_C::Get_ChatSlotContainer_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.Get_ChatSlotContainer_Visibility_1");

	UWBP_HUD2_C_Get_ChatSlotContainer_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_HUD2.WBP_HUD2_C.Get_Spectating Player_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_HUD2_C::Get_Spectating_Player_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.Get_Spectating Player_Text_1");

	UWBP_HUD2_C_Get_Spectating_Player_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_HUD2.WBP_HUD2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HUD2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.Construct");

	UWBP_HUD2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HUD2.WBP_HUD2_C.OnServerNameReceived_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUD2_C::OnServerNameReceived_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.OnServerNameReceived_Event_1");

	UWBP_HUD2_C_OnServerNameReceived_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_HUD2.WBP_HUD2_C.ExecuteUbergraph_WBP_HUD2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HUD2_C::ExecuteUbergraph_WBP_HUD2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HUD2.WBP_HUD2_C.ExecuteUbergraph_WBP_HUD2");

	UWBP_HUD2_C_ExecuteUbergraph_WBP_HUD2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
