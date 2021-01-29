#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PartyPlayerRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Get_TxtInviteFriend_Text_1
struct UWBP_PartyPlayerRow_C_Get_TxtInviteFriend_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Get_ButtonGiveLeader_bIsEnabled_1
struct UWBP_PartyPlayerRow_C_Get_ButtonGiveLeader_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Get_ButtonKickOrAdd_bIsEnabled_1
struct UWBP_PartyPlayerRow_C_Get_ButtonKickOrAdd_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.EnableUI
struct UWBP_PartyPlayerRow_C_EnableUI_Params
{
	TEnumAsByte<E_PartyPlayerState>                    Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsEmpty
struct UWBP_PartyPlayerRow_C_IsEmpty_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsInvited
struct UWBP_PartyPlayerRow_C_IsInvited_Params
{
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.CheckEmptySlot
struct UWBP_PartyPlayerRow_C_CheckEmptySlot_Params
{
	bool                                               IsLeader;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.UpdatePlayerState
struct UWBP_PartyPlayerRow_C_UpdatePlayerState_Params
{
	class ASteamBeaconPlayerState*                     SteamBeaconPlayerState;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.LeavePlayer
struct UWBP_PartyPlayerRow_C_LeavePlayer_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.CreateKickPlayerWidget
struct UWBP_PartyPlayerRow_C_CreateKickPlayerWidget_Params
{
	class UWBP_KickPlayer_C*                           WBP_KickPlayer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.ReserveSlot
struct UWBP_PartyPlayerRow_C_ReserveSlot_Params
{
	struct FSteamFriendInfo                            SteamFriendInfo;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.HideAllPartyFriendWidget
struct UWBP_PartyPlayerRow_C_HideAllPartyFriendWidget_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.HideParyFriendWidget
struct UWBP_PartyPlayerRow_C_HideParyFriendWidget_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.SetPlayerState
struct UWBP_PartyPlayerRow_C_SetPlayerState_Params
{
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Clear
struct UWBP_PartyPlayerRow_C_Clear_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.KickPlayer
struct UWBP_PartyPlayerRow_C_KickPlayer_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseButtonDoubleClick
struct UWBP_PartyPlayerRow_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Unselect
struct UWBP_PartyPlayerRow_C_Unselect_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseButtonDown
struct UWBP_PartyPlayerRow_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Construct
struct UWBP_PartyPlayerRow_C_Construct_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseEnter
struct UWBP_PartyPlayerRow_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnMouseLeave
struct UWBP_PartyPlayerRow_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.BndEvt__ButtonKickOrAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_PartyPlayerRow_C_BndEvt__ButtonKickOrAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnKick
struct UWBP_PartyPlayerRow_C_OnKick_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnKickOrAdd
struct UWBP_PartyPlayerRow_C_OnKickOrAdd_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.OnLeave
struct UWBP_PartyPlayerRow_C_OnLeave_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.ExecuteUbergraph_WBP_PartyPlayerRow
struct UWBP_PartyPlayerRow_C_ExecuteUbergraph_WBP_PartyPlayerRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
