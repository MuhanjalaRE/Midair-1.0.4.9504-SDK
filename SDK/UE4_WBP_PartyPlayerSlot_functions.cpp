// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PartyPlayerSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Get_LeaderIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_PartyPlayerSlot_C::Get_LeaderIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Get_LeaderIcon_Visibility_1");

	UWBP_PartyPlayerSlot_C_Get_LeaderIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Update Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* Steam_Player_State             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerSlot_C::Update_Slot(class ASteamBeaconPlayerState* Steam_Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Update Slot");

	UWBP_PartyPlayerSlot_C_Update_Slot_Params params;
	params.Steam_Player_State = Steam_Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerSlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.PreConstruct");

	UWBP_PartyPlayerSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PartyPlayerSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Construct");

	UWBP_PartyPlayerSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.ExecuteUbergraph_WBP_PartyPlayerSlot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerSlot_C::ExecuteUbergraph_WBP_PartyPlayerSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.ExecuteUbergraph_WBP_PartyPlayerSlot");

	UWBP_PartyPlayerSlot_C_ExecuteUbergraph_WBP_PartyPlayerSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
