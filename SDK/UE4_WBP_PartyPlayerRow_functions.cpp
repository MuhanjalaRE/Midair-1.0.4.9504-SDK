// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PartyPlayerRow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Get_TxtInviteFriend_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PartyPlayerRow_C::Get_TxtInviteFriend_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Get_TxtInviteFriend_Text_1");

	UWBP_PartyPlayerRow_C_Get_TxtInviteFriend_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Get_ButtonGiveLeader_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PartyPlayerRow_C::Get_ButtonGiveLeader_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Get_ButtonGiveLeader_bIsEnabled_1");

	UWBP_PartyPlayerRow_C_Get_ButtonGiveLeader_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Get_ButtonKickOrAdd_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PartyPlayerRow_C::Get_ButtonKickOrAdd_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Get_ButtonKickOrAdd_bIsEnabled_1");

	UWBP_PartyPlayerRow_C_Get_ButtonKickOrAdd_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.EnableUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PartyPlayerState> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerRow_C::EnableUI(TEnumAsByte<E_PartyPlayerState> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.EnableUI");

	UWBP_PartyPlayerRow_C_EnableUI_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerRow_C::IsEmpty(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsEmpty");

	UWBP_PartyPlayerRow_C_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsInvited
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* BeaconPlayerState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerRow_C::IsInvited(class ASteamBeaconPlayerState* BeaconPlayerState, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsInvited");

	UWBP_PartyPlayerRow_C_IsInvited_Params params;
	params.BeaconPlayerState = BeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.CheckEmptySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLeader                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerRow_C::CheckEmptySlot(bool IsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.CheckEmptySlot");

	UWBP_PartyPlayerRow_C_CheckEmptySlot_Params params;
	params.IsLeader = IsLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.UpdatePlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* SteamBeaconPlayerState         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerRow_C::UpdatePlayerState(class ASteamBeaconPlayerState* SteamBeaconPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.UpdatePlayerState");

	UWBP_PartyPlayerRow_C_UpdatePlayerState_Params params;
	params.SteamBeaconPlayerState = SteamBeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.LeavePlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartyPlayerRow_C::LeavePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.LeavePlayer");

	UWBP_PartyPlayerRow_C_LeavePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.CreateKickPlayerWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KickPlayer_C*       WBP_KickPlayer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerRow_C::CreateKickPlayerWidget(class UWBP_KickPlayer_C** WBP_KickPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.CreateKickPlayerWidget");

	UWBP_PartyPlayerRow_C_CreateKickPlayerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WBP_KickPlayer != nullptr)
		*WBP_KickPlayer = params.WBP_KickPlayer;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.ReserveSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamFriendInfo        SteamFriendInfo                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PartyPlayerRow_C::ReserveSlot(const struct FSteamFriendInfo& SteamFriendInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.ReserveSlot");

	UWBP_PartyPlayerRow_C_ReserveSlot_Params params;
	params.SteamFriendInfo = SteamFriendInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.HideAllPartyFriendWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartyPlayerRow_C::HideAllPartyFriendWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.HideAllPartyFriendWidget");

	UWBP_PartyPlayerRow_C_HideAllPartyFriendWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.HideParyFriendWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartyPlayerRow_C::HideParyFriendWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.HideParyFriendWidget");

	UWBP_PartyPlayerRow_C_HideParyFriendWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.SetPlayerState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* BeaconPlayerState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerRow_C::SetPlayerState(class ASteamBeaconPlayerState* BeaconPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.SetPlayerState");

	UWBP_PartyPlayerRow_C_SetPlayerState_Params params;
	params.BeaconPlayerState = BeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartyPlayerRow_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Clear");

	UWBP_PartyPlayerRow_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.KickPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartyPlayerRow_C::KickPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.KickPlayer");

	UWBP_PartyPlayerRow_C_KickPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PartyPlayerRow_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseButtonDoubleClick");

	UWBP_PartyPlayerRow_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMouseEvent != nullptr)
		*InMouseEvent = params.InMouseEvent;

	return params.ReturnValue;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Unselect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PartyPlayerRow_C::Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Unselect");

	UWBP_PartyPlayerRow_C_Unselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PartyPlayerRow_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseButtonDown");

	UWBP_PartyPlayerRow_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PartyPlayerRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Construct");

	UWBP_PartyPlayerRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PartyPlayerRow_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseEnter");

	UWBP_PartyPlayerRow_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PartyPlayerRow_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseLeave");

	UWBP_PartyPlayerRow_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.BndEvt__ButtonKickOrAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_PartyPlayerRow_C::BndEvt__ButtonKickOrAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.BndEvt__ButtonKickOrAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_PartyPlayerRow_C_BndEvt__ButtonKickOrAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnKick
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartyPlayerRow_C::OnKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnKick");

	UWBP_PartyPlayerRow_C_OnKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnKickOrAdd
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartyPlayerRow_C::OnKickOrAdd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnKickOrAdd");

	UWBP_PartyPlayerRow_C_OnKickOrAdd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnLeave
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartyPlayerRow_C::OnLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnLeave");

	UWBP_PartyPlayerRow_C_OnLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.ExecuteUbergraph_WBP_PartyPlayerRow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyPlayerRow_C::ExecuteUbergraph_WBP_PartyPlayerRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.ExecuteUbergraph_WBP_PartyPlayerRow");

	UWBP_PartyPlayerRow_C_ExecuteUbergraph_WBP_PartyPlayerRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
