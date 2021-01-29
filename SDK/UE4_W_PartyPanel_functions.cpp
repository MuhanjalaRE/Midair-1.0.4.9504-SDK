// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_PartyPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartyPanel.W_PartyPanel_C.ExitParty
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyPanel_C::ExitParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.ExitParty");

	UW_PartyPanel_C_ExitParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.Get_TextBlock_9_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_PartyPanel_C::Get_TextBlock_9_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.Get_TextBlock_9_Text_1");

	UW_PartyPanel_C_Get_TextBlock_9_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_PartyPanel.W_PartyPanel_C.ReconnectPartyHost
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyPanel_C::ReconnectPartyHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.ReconnectPartyHost");

	UW_PartyPanel_C_ReconnectPartyHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_PartyPanel_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.GetText_1");

	UW_PartyPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_PartyPanel.W_PartyPanel_C.PartyInviteReceived
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UW_PartyPanel_C::PartyInviteReceived(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.PartyInviteReceived");

	UW_PartyPanel_C_PartyInviteReceived_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.PartyHostConnectionFailure
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyPanel_C::PartyHostConnectionFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.PartyHostConnectionFailure");

	UW_PartyPanel_C_PartyHostConnectionFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.PartyJoiningGame
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyPanel_C::PartyJoiningGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.PartyJoiningGame");

	UW_PartyPanel_C_PartyJoiningGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.UpdateDisplays
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyPanel_C::UpdateDisplays()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.UpdateDisplays");

	UW_PartyPanel_C_UpdateDisplays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.CloseFlyoutMenus
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyPanel_C::CloseFlyoutMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.CloseFlyoutMenus");

	UW_PartyPanel_C_CloseFlyoutMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.StartChat
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyPanel_C::StartChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.StartChat");

	UW_PartyPanel_C_StartChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.PartyStateChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyPanel_C::PartyStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.PartyStateChanged");

	UW_PartyPanel_C_PartyStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.PartyLeaderChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PartyPanel_C::PartyLeaderChanged(const struct FUniqueNetIdRepl& InUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.PartyLeaderChanged");

	UW_PartyPanel_C_PartyLeaderChanged_Params params;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.PlayerStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InSteamBeaconPlayerState       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyPanel_C::PlayerStateChanged(class ASteamBeaconPlayerState* InSteamBeaconPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.PlayerStateChanged");

	UW_PartyPanel_C_PlayerStateChanged_Params params;
	params.InSteamBeaconPlayerState = InSteamBeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.PlayerLeftParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InBeaconPlayerState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyPanel_C::PlayerLeftParty(class ASteamBeaconPlayerState* InBeaconPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.PlayerLeftParty");

	UW_PartyPanel_C_PlayerLeftParty_Params params;
	params.InBeaconPlayerState = InBeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.PlayerJoinedParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InBeaconPlayerState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyPanel_C::PlayerJoinedParty(class ASteamBeaconPlayerState* InBeaconPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.PlayerJoinedParty");

	UW_PartyPanel_C_PlayerJoinedParty_Params params;
	params.InBeaconPlayerState = InBeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.StartPartyHost
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyPanel_C::StartPartyHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.StartPartyHost");

	UW_PartyPanel_C_StartPartyHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.UpdatePartyPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UW_PartyPanel_C::UpdatePartyPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.UpdatePartyPanel");

	UW_PartyPanel_C_UpdatePartyPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.BndEvt__But_InviteAccept_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PartyPanel_C::BndEvt__But_InviteAccept_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.BndEvt__But_InviteAccept_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature");

	UW_PartyPanel_C_BndEvt__But_InviteAccept_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.BndEvt__But_InviteDecline_K2Node_ComponentBoundEvent_191_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PartyPanel_C::BndEvt__But_InviteDecline_K2Node_ComponentBoundEvent_191_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.BndEvt__But_InviteDecline_K2Node_ComponentBoundEvent_191_OnButtonClickedEvent__DelegateSignature");

	UW_PartyPanel_C_BndEvt__But_InviteDecline_K2Node_ComponentBoundEvent_191_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_Leave_K2Node_ComponentBoundEvent_187_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PartyPanel_C::BndEvt__Button_Leave_K2Node_ComponentBoundEvent_187_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_Leave_K2Node_ComponentBoundEvent_187_OnButtonClickedEvent__DelegateSignature");

	UW_PartyPanel_C_BndEvt__Button_Leave_K2Node_ComponentBoundEvent_187_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PartyPanel_C::BndEvt__Button_15_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UW_PartyPanel_C_BndEvt__Button_15_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PartyPanel_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UW_PartyPanel_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.Tick");

	UW_PartyPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_PartyPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.Construct");

	UW_PartyPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.ExecuteUbergraph_W_PartyPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyPanel_C::ExecuteUbergraph_W_PartyPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.ExecuteUbergraph_W_PartyPanel");

	UW_PartyPanel_C_ExecuteUbergraph_W_PartyPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyPanel.W_PartyPanel_C.PartyStatusUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPartyStatus                   OutPartyStatus                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyPanel_C::PartyStatusUpdated__DelegateSignature(EPartyStatus OutPartyStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyPanel.W_PartyPanel_C.PartyStatusUpdated__DelegateSignature");

	UW_PartyPanel_C_PartyStatusUpdated__DelegateSignature_Params params;
	params.OutPartyStatus = OutPartyStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
