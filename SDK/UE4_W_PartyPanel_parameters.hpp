#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_PartyPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_PartyPanel.W_PartyPanel_C.ExitParty
struct UW_PartyPanel_C_ExitParty_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.Get_TextBlock_9_Text_1
struct UW_PartyPanel_C_Get_TextBlock_9_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_PartyPanel.W_PartyPanel_C.ReconnectPartyHost
struct UW_PartyPanel_C_ReconnectPartyHost_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.GetText_1
struct UW_PartyPanel_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_PartyPanel.W_PartyPanel_C.PartyInviteReceived
struct UW_PartyPanel_C_PartyInviteReceived_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function W_PartyPanel.W_PartyPanel_C.PartyHostConnectionFailure
struct UW_PartyPanel_C_PartyHostConnectionFailure_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.PartyJoiningGame
struct UW_PartyPanel_C_PartyJoiningGame_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.UpdateDisplays
struct UW_PartyPanel_C_UpdateDisplays_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.CloseFlyoutMenus
struct UW_PartyPanel_C_CloseFlyoutMenus_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.StartChat
struct UW_PartyPanel_C_StartChat_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.PartyStateChanged
struct UW_PartyPanel_C_PartyStateChanged_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.PartyLeaderChanged
struct UW_PartyPanel_C_PartyLeaderChanged_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_PartyPanel.W_PartyPanel_C.PlayerStateChanged
struct UW_PartyPanel_C_PlayerStateChanged_Params
{
	class ASteamBeaconPlayerState*                     InSteamBeaconPlayerState;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PartyPanel.W_PartyPanel_C.PlayerLeftParty
struct UW_PartyPanel_C_PlayerLeftParty_Params
{
	class ASteamBeaconPlayerState*                     InBeaconPlayerState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PartyPanel.W_PartyPanel_C.PlayerJoinedParty
struct UW_PartyPanel_C_PlayerJoinedParty_Params
{
	class ASteamBeaconPlayerState*                     InBeaconPlayerState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PartyPanel.W_PartyPanel_C.StartPartyHost
struct UW_PartyPanel_C_StartPartyHost_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.UpdatePartyPanel
struct UW_PartyPanel_C_UpdatePartyPanel_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.BndEvt__But_InviteAccept_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature
struct UW_PartyPanel_C_BndEvt__But_InviteAccept_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.BndEvt__But_InviteDecline_K2Node_ComponentBoundEvent_191_OnButtonClickedEvent__DelegateSignature
struct UW_PartyPanel_C_BndEvt__But_InviteDecline_K2Node_ComponentBoundEvent_191_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_Leave_K2Node_ComponentBoundEvent_187_OnButtonClickedEvent__DelegateSignature
struct UW_PartyPanel_C_BndEvt__Button_Leave_K2Node_ComponentBoundEvent_187_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UW_PartyPanel_C_BndEvt__Button_15_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UW_PartyPanel_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.Tick
struct UW_PartyPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PartyPanel.W_PartyPanel_C.Construct
struct UW_PartyPanel_C_Construct_Params
{
};

// Function W_PartyPanel.W_PartyPanel_C.ExecuteUbergraph_W_PartyPanel
struct UW_PartyPanel_C_ExecuteUbergraph_W_PartyPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_PartyPanel.W_PartyPanel_C.PartyStatusUpdated__DelegateSignature
struct UW_PartyPanel_C_PartyStatusUpdated__DelegateSignature_Params
{
	EPartyStatus                                       OutPartyStatus;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
