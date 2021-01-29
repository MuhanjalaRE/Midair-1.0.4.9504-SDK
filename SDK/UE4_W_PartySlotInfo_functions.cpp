// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_PartySlotInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartySlotInfo.W_PartySlotInfo_C.UpdatePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_PartySlotInfo_C::UpdatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartySlotInfo.W_PartySlotInfo_C.UpdatePosition");

	UW_PartySlotInfo_C_UpdatePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.UpdateTalkingDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartySlotInfo_C::UpdateTalkingDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartySlotInfo.W_PartySlotInfo_C.UpdateTalkingDisplay");

	UW_PartySlotInfo_C_UpdateTalkingDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.Get_Txt_Level_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_PartySlotInfo_C::Get_Txt_Level_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartySlotInfo.W_PartySlotInfo_C.Get_Txt_Level_Text_1");

	UW_PartySlotInfo_C_Get_Txt_Level_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.Get_Button_Slot_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UW_PartySlotInfo_C::Get_Button_Slot_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartySlotInfo.W_PartySlotInfo_C.Get_Button_Slot_ToolTipWidget_1");

	UW_PartySlotInfo_C_Get_Button_Slot_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_PartySlotInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartySlotInfo.W_PartySlotInfo_C.Construct");

	UW_PartySlotInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PartySlotInfo_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartySlotInfo.W_PartySlotInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_PartySlotInfo_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.OnPlayerTalkingStateChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartySlotInfo_C::OnPlayerTalkingStateChanged_Event_1(bool IsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartySlotInfo.W_PartySlotInfo_C.OnPlayerTalkingStateChanged_Event_1");

	UW_PartySlotInfo_C_OnPlayerTalkingStateChanged_Event_1_Params params;
	params.IsTalking = IsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartySlotInfo.W_PartySlotInfo_C.ExecuteUbergraph_W_PartySlotInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartySlotInfo_C::ExecuteUbergraph_W_PartySlotInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartySlotInfo.W_PartySlotInfo_C.ExecuteUbergraph_W_PartySlotInfo");

	UW_PartySlotInfo_C_ExecuteUbergraph_W_PartySlotInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
