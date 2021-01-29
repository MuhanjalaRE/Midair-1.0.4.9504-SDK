// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_MenuPartyPlayerController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.DestroyPartyPanel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuPartyPlayerController_C::DestroyPartyPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.DestroyPartyPanel");

	ABP_MenuPartyPlayerController_C_DestroyPartyPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.CreatePartyPanel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuPartyPlayerController_C::CreatePartyPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.CreatePartyPanel");

	ABP_MenuPartyPlayerController_C_CreatePartyPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuPartyPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.UserConstructionScript");

	ABP_MenuPartyPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MenuPartyPlayerController_C::InpActEvt_Enter_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_1");

	ABP_MenuPartyPlayerController_C_InpActEvt_Enter_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PlayerLeftParty
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState** InPlayerStateLeft              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuPartyPlayerController_C::BPEvent_PlayerLeftParty(class ASteamBeaconPlayerState** InPlayerStateLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PlayerLeftParty");

	ABP_MenuPartyPlayerController_C_BPEvent_PlayerLeftParty_Params params;
	params.InPlayerStateLeft = InPlayerStateLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PlayerStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState** InPlayerBeaconStateChanged     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuPartyPlayerController_C::BPEvent_PlayerStateChanged(class ASteamBeaconPlayerState** InPlayerBeaconStateChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PlayerStateChanged");

	ABP_MenuPartyPlayerController_C_BPEvent_PlayerStateChanged_Params params;
	params.InPlayerBeaconStateChanged = InPlayerBeaconStateChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyOwnerChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl*       InUniqueId                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MenuPartyPlayerController_C::BPEvent_PartyOwnerChanged(struct FUniqueNetIdRepl* InUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyOwnerChanged");

	ABP_MenuPartyPlayerController_C_BPEvent_PartyOwnerChanged_Params params;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyStateChanged
// (Event, Public, BlueprintEvent)

void ABP_MenuPartyPlayerController_C::BPEvent_PartyStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyStateChanged");

	ABP_MenuPartyPlayerController_C_BPEvent_PartyStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyJoiningGame
// (Event, Public, BlueprintEvent)

void ABP_MenuPartyPlayerController_C::BPEvent_PartyJoiningGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyJoiningGame");

	ABP_MenuPartyPlayerController_C_BPEvent_PartyJoiningGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_ChatMessageReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPartyMessage*          InPartyMessage                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MenuPartyPlayerController_C::BPEvent_ChatMessageReceived(struct FPartyMessage* InPartyMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_ChatMessageReceived");

	ABP_MenuPartyPlayerController_C_BPEvent_ChatMessageReceived_Params params;
	params.InPartyMessage = InPartyMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyHostConnectionFailure
// (Event, Public, BlueprintEvent)

void ABP_MenuPartyPlayerController_C::BPEvent_PartyHostConnectionFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyHostConnectionFailure");

	ABP_MenuPartyPlayerController_C_BPEvent_PartyHostConnectionFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyInviteReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                FriendName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MenuPartyPlayerController_C::BPEvent_PartyInviteReceived(struct FString* FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyInviteReceived");

	ABP_MenuPartyPlayerController_C_BPEvent_PartyInviteReceived_Params params;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyHostReconnecting
// (Event, Public, BlueprintEvent)

void ABP_MenuPartyPlayerController_C::BPEvent_PartyHostReconnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyHostReconnecting");

	ABP_MenuPartyPlayerController_C_BPEvent_PartyHostReconnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PlayerJoinedParty
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState** InPlayerStateJoined            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuPartyPlayerController_C::BPEvent_PlayerJoinedParty(class ASteamBeaconPlayerState** InPlayerStateJoined)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PlayerJoinedParty");

	ABP_MenuPartyPlayerController_C_BPEvent_PlayerJoinedParty_Params params;
	params.InPlayerStateJoined = InPlayerStateJoined;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuPartyPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.ReceiveBeginPlay");

	ABP_MenuPartyPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.ExecuteUbergraph_BP_MenuPartyPlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuPartyPlayerController_C::ExecuteUbergraph_BP_MenuPartyPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.ExecuteUbergraph_BP_MenuPartyPlayerController");

	ABP_MenuPartyPlayerController_C_ExecuteUbergraph_BP_MenuPartyPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
