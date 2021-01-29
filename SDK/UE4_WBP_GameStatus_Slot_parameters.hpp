#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameStatus_Slot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Update
struct UWBP_GameStatus_Slot_C_Update_Params
{
	class APlayerState*                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScorePct;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocalPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_ATeamScoreText_Text_1
struct UWBP_GameStatus_Slot_C_Get_ATeamScoreText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.GetVisibility_1
struct UWBP_GameStatus_Slot_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_TopPlayerIsLocalIcon_Visibility_1
struct UWBP_GameStatus_Slot_C_Get_TopPlayerIsLocalIcon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_TopPlayerHasFlagIcon_Visibility_1
struct UWBP_GameStatus_Slot_C_Get_TopPlayerHasFlagIcon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
