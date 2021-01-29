#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ScoreboardList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ScoreboardList.WBP_ScoreboardList_C.Get_Status_Text_1
struct UWBP_ScoreboardList_C_Get_Status_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ScoreboardList.WBP_ScoreboardList_C.UpdateVBoxWithPlayers
struct UWBP_ScoreboardList_C_UpdateVBoxWithPlayers_Params
{
	TArray<class AMAPlayerState*>                      Players;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_ScoreboardList.WBP_ScoreboardList_C.Construct
struct UWBP_ScoreboardList_C_Construct_Params
{
};

// Function WBP_ScoreboardList.WBP_ScoreboardList_C.Slow Tick
struct UWBP_ScoreboardList_C_Slow_Tick_Params
{
};

// Function WBP_ScoreboardList.WBP_ScoreboardList_C.ExecuteUbergraph_WBP_ScoreboardList
struct UWBP_ScoreboardList_C_ExecuteUbergraph_WBP_ScoreboardList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
