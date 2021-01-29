#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MidmatchVoteDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Get_VoteOptionNo_Text_1
struct UWBP_MidmatchVoteDisplay_C_Get_VoteOptionNo_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Get_VoteOptionYes_Text_1
struct UWBP_MidmatchVoteDisplay_C_Get_VoteOptionYes_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Get_VoteDisplayNameText_Text_1
struct UWBP_MidmatchVoteDisplay_C_Get_VoteDisplayNameText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Construct
struct UWBP_MidmatchVoteDisplay_C_Construct_Params
{
};

// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Tick
struct UWBP_MidmatchVoteDisplay_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.ConditionallyContinueAnimation
struct UWBP_MidmatchVoteDisplay_C_ConditionallyContinueAnimation_Params
{
};

// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.ExecuteUbergraph_WBP_MidmatchVoteDisplay
struct UWBP_MidmatchVoteDisplay_C_ExecuteUbergraph_WBP_MidmatchVoteDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
