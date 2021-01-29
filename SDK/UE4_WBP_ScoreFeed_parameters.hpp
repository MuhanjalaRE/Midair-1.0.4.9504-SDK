#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ScoreFeed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ScoreFeed.WBP_ScoreFeed_C.Add Score Event
struct UWBP_ScoreFeed_C_Add_Score_Event_Params
{
	struct FText                                       Score_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Score_Value;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreFeed.WBP_ScoreFeed_C.Construct
struct UWBP_ScoreFeed_C_Construct_Params
{
};

// Function WBP_ScoreFeed.WBP_ScoreFeed_C.ExecuteUbergraph_WBP_ScoreFeed
struct UWBP_ScoreFeed_C_ExecuteUbergraph_WBP_ScoreFeed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
