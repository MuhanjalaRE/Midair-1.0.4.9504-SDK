#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_KickPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_KickPlayer.WBP_KickPlayer_C.SetPlayerData
struct UWBP_KickPlayer_C_SetPlayerData_Params
{
	struct FUniqueNetIdRepl                            UniqueNetIdRepl;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_KickPlayer.WBP_KickPlayer_C.Construct
struct UWBP_KickPlayer_C_Construct_Params
{
};

// Function WBP_KickPlayer.WBP_KickPlayer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature
struct UWBP_KickPlayer_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_KickPlayer.WBP_KickPlayer_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
struct UWBP_KickPlayer_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_KickPlayer.WBP_KickPlayer_C.ExecuteUbergraph_WBP_KickPlayer
struct UWBP_KickPlayer_C_ExecuteUbergraph_WBP_KickPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KickPlayer.WBP_KickPlayer_C.OnLeave__DelegateSignature
struct UWBP_KickPlayer_C_OnLeave__DelegateSignature_Params
{
};

// Function WBP_KickPlayer.WBP_KickPlayer_C.OnKick__DelegateSignature
struct UWBP_KickPlayer_C_OnKick__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
