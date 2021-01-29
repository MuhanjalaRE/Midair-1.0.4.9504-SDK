#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_MenuPartyPlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.DestroyPartyPanel
struct ABP_MenuPartyPlayerController_C_DestroyPartyPanel_Params
{
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.CreatePartyPanel
struct ABP_MenuPartyPlayerController_C_CreatePartyPanel_Params
{
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.UserConstructionScript
struct ABP_MenuPartyPlayerController_C_UserConstructionScript_Params
{
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.InpActEvt_Enter_K2Node_InputKeyEvent_1
struct ABP_MenuPartyPlayerController_C_InpActEvt_Enter_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PlayerLeftParty
struct ABP_MenuPartyPlayerController_C_BPEvent_PlayerLeftParty_Params
{
	class ASteamBeaconPlayerState**                    InPlayerStateLeft;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PlayerStateChanged
struct ABP_MenuPartyPlayerController_C_BPEvent_PlayerStateChanged_Params
{
	class ASteamBeaconPlayerState**                    InPlayerBeaconStateChanged;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyOwnerChanged
struct ABP_MenuPartyPlayerController_C_BPEvent_PartyOwnerChanged_Params
{
	struct FUniqueNetIdRepl*                           InUniqueId;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyStateChanged
struct ABP_MenuPartyPlayerController_C_BPEvent_PartyStateChanged_Params
{
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyJoiningGame
struct ABP_MenuPartyPlayerController_C_BPEvent_PartyJoiningGame_Params
{
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_ChatMessageReceived
struct ABP_MenuPartyPlayerController_C_BPEvent_ChatMessageReceived_Params
{
	struct FPartyMessage*                              InPartyMessage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyHostConnectionFailure
struct ABP_MenuPartyPlayerController_C_BPEvent_PartyHostConnectionFailure_Params
{
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyInviteReceived
struct ABP_MenuPartyPlayerController_C_BPEvent_PartyInviteReceived_Params
{
	struct FString*                                    FriendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PartyHostReconnecting
struct ABP_MenuPartyPlayerController_C_BPEvent_PartyHostReconnecting_Params
{
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.BPEvent_PlayerJoinedParty
struct ABP_MenuPartyPlayerController_C_BPEvent_PlayerJoinedParty_Params
{
	class ASteamBeaconPlayerState**                    InPlayerStateJoined;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.ReceiveBeginPlay
struct ABP_MenuPartyPlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_MenuPartyPlayerController.BP_MenuPartyPlayerController_C.ExecuteUbergraph_BP_MenuPartyPlayerController
struct ABP_MenuPartyPlayerController_C_ExecuteUbergraph_BP_MenuPartyPlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
