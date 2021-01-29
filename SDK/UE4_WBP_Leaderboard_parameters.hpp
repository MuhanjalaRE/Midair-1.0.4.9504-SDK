#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Leaderboard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_Leaderboard.WBP_Leaderboard_C.Set Selected Player
struct UWBP_Leaderboard_C_Set_Selected_Player_Params
{
	class UWBP_LeaderBoardRow_C*                       Player_Row;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.SetLeaderboardSeasonAndGameMode
struct UWBP_Leaderboard_C_SetLeaderboardSeasonAndGameMode_Params
{
	struct FName                                       GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMALeaderboardRequest>                 LeaderBoardRequestType;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.GetVisibility_1
struct UWBP_Leaderboard_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.Validate Entry Index
struct UWBP_Leaderboard_C_Validate_Entry_Index_Params
{
	int                                                Entry_Count;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.OnFail_5D0BD61349684A77B1F14281DB4BC02B
struct UWBP_Leaderboard_C_OnFail_5D0BD61349684A77B1F14281DB4BC02B_Params
{
	TArray<struct FSteamLeaderBoard>                   ScoreList;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                EntryCount;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.OnSuccess_5D0BD61349684A77B1F14281DB4BC02B
struct UWBP_Leaderboard_C_OnSuccess_5D0BD61349684A77B1F14281DB4BC02B_Params
{
	TArray<struct FSteamLeaderBoard>                   ScoreList;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                EntryCount;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.Populate
struct UWBP_Leaderboard_C_Populate_Params
{
	struct FName                                       GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMALeaderboardRequest>                 LeaderBoardRequestType;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.PreConstruct
struct UWBP_Leaderboard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.Construct
struct UWBP_Leaderboard_C_Construct_Params
{
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature
struct UWBP_Leaderboard_C_BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_51_OnUserScrolledEvent__DelegateSignature
struct UWBP_Leaderboard_C_BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_51_OnUserScrolledEvent__DelegateSignature_Params
{
	float                                              CurrentOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.Cleanup Loop
struct UWBP_Leaderboard_C_Cleanup_Loop_Params
{
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.ExecuteUbergraph_WBP_Leaderboard
struct UWBP_Leaderboard_C_ExecuteUbergraph_WBP_Leaderboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
