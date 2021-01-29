#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_SelectPlayerSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.GetAdminBadgeVis
struct UWBP_SelectPlayerSlot_C_GetAdminBadgeVis_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.GetDevBadgeVis
struct UWBP_SelectPlayerSlot_C_GetDevBadgeVis_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.GetVoteButtonVis
struct UWBP_SelectPlayerSlot_C_GetVoteButtonVis_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.Get_PlayerText_ColorAndOpacity_1
struct UWBP_SelectPlayerSlot_C_Get_PlayerText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.GetVisibility_1
struct UWBP_SelectPlayerSlot_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.Construct
struct UWBP_SelectPlayerSlot_C_Construct_Params
{
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.BndEvt__Button_90_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature
struct UWBP_SelectPlayerSlot_C_BndEvt__Button_90_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.BndEvt__BanPlayer_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature
struct UWBP_SelectPlayerSlot_C_BndEvt__BanPlayer_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.Ban
struct UWBP_SelectPlayerSlot_C_Ban_Params
{
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.OnKickReason
struct UWBP_SelectPlayerSlot_C_OnKickReason_Params
{
	struct FText                                       Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.OnBan
struct UWBP_SelectPlayerSlot_C_OnBan_Params
{
	struct FText                                       Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.BndEvt__VoteBanPlayer_K2Node_ComponentBoundEvent_79_OnButtonPressedEvent__DelegateSignature
struct UWBP_SelectPlayerSlot_C_BndEvt__VoteBanPlayer_K2Node_ComponentBoundEvent_79_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.BndEvt__VoteKickPlayer_K2Node_ComponentBoundEvent_98_OnButtonPressedEvent__DelegateSignature
struct UWBP_SelectPlayerSlot_C_BndEvt__VoteKickPlayer_K2Node_ComponentBoundEvent_98_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.BndEvt__ForceSpectate_K2Node_ComponentBoundEvent_203_OnButtonClickedEvent__DelegateSignature
struct UWBP_SelectPlayerSlot_C_BndEvt__ForceSpectate_K2Node_ComponentBoundEvent_203_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.BndEvt__ForceTeamChange_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature
struct UWBP_SelectPlayerSlot_C_BndEvt__ForceTeamChange_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_SelectPlayerSlot.WBP_SelectPlayerSlot_C.ExecuteUbergraph_WBP_SelectPlayerSlot
struct UWBP_SelectPlayerSlot_C_ExecuteUbergraph_WBP_SelectPlayerSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
