// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PartyMainMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.ShowLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartyMainMenu_C::ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.ShowLoadingScreen");

	UWBP_PartyMainMenu_C_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.UpdatePlayerMenuLocks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPartyStatus                   OutPartyStatus                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyMainMenu_C::UpdatePlayerMenuLocks(EPartyStatus OutPartyStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.UpdatePlayerMenuLocks");

	UWBP_PartyMainMenu_C_UpdatePlayerMenuLocks_Params params;
	params.OutPartyStatus = OutPartyStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PartyMainMenu_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_PartyMainMenu_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PartyMainMenu_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_PartyMainMenu_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.CreateSessionCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyMainMenu_C::CreateSessionCompleted(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.CreateSessionCompleted");

	UWBP_PartyMainMenu_C_CreateSessionCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PartyMainMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.Construct");

	UWBP_PartyMainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PartyMainMenu_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature");

	UWBP_PartyMainMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.ExecuteUbergraph_WBP_PartyMainMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyMainMenu_C::ExecuteUbergraph_WBP_PartyMainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyMainMenu.WBP_PartyMainMenu_C.ExecuteUbergraph_WBP_PartyMainMenu");

	UWBP_PartyMainMenu_C_ExecuteUbergraph_WBP_PartyMainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
