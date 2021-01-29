#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MapVoteList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_MapVoteList.WBP_MapVoteList_C.Get_TextBlock_0_Text_1
struct UWBP_MapVoteList_C_Get_TextBlock_0_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.UpdateWinningFlagOnWidgetBox
struct UWBP_MapVoteList_C_UpdateWinningFlagOnWidgetBox_Params
{
	class UPanelWidget*                                self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapVoteOption                                     WinningOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.UpdateWinningFlagOnWidget
struct UWBP_MapVoteList_C_UpdateWinningFlagOnWidget_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapVoteOption                                     WinningOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.Get_VoteNextMapText_Text_1
struct UWBP_MapVoteList_C_Get_VoteNextMapText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.VoteForOption
struct UWBP_MapVoteList_C_VoteForOption_Params
{
	class UWBP_MapVote_C*                              Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.BeginMapVote
struct UWBP_MapVoteList_C_BeginMapVote_Params
{
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.Construct
struct UWBP_MapVoteList_C_Construct_Params
{
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.Tick
struct UWBP_MapVoteList_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.OnWinningVoteUpdated
struct UWBP_MapVoteList_C_OnWinningVoteUpdated_Params
{
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.ExecuteUbergraph_WBP_MapVoteList
struct UWBP_MapVoteList_C_ExecuteUbergraph_WBP_MapVoteList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
