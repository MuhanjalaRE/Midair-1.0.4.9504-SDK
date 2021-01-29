// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_KickPlayer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_KickPlayer.WBP_KickPlayer_C.SetPlayerData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueNetIdRepl                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_KickPlayer_C::SetPlayerData(const struct FUniqueNetIdRepl& UniqueNetIdRepl, const struct FText& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.SetPlayerData");

	UWBP_KickPlayer_C_SetPlayerData_Params params;
	params.UniqueNetIdRepl = UniqueNetIdRepl;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KickPlayer.WBP_KickPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KickPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.Construct");

	UWBP_KickPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KickPlayer.WBP_KickPlayer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_KickPlayer_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature");

	UWBP_KickPlayer_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KickPlayer.WBP_KickPlayer_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_KickPlayer_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature");

	UWBP_KickPlayer_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KickPlayer.WBP_KickPlayer_C.ExecuteUbergraph_WBP_KickPlayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KickPlayer_C::ExecuteUbergraph_WBP_KickPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.ExecuteUbergraph_WBP_KickPlayer");

	UWBP_KickPlayer_C_ExecuteUbergraph_WBP_KickPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KickPlayer.WBP_KickPlayer_C.OnLeave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_KickPlayer_C::OnLeave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.OnLeave__DelegateSignature");

	UWBP_KickPlayer_C_OnLeave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KickPlayer.WBP_KickPlayer_C.OnKick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_KickPlayer_C::OnKick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.OnKick__DelegateSignature");

	UWBP_KickPlayer_C_OnKick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
