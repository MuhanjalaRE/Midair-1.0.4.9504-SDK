#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_StatDisplay_Scoreboard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.Get_ScoreDisplay_Text_1
struct UWBP_StatDisplay_Scoreboard_C_Get_ScoreDisplay_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.PreConstruct
struct UWBP_StatDisplay_Scoreboard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.ExecuteUbergraph_WBP_StatDisplay_Scoreboard
struct UWBP_StatDisplay_Scoreboard_C_ExecuteUbergraph_WBP_StatDisplay_Scoreboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
