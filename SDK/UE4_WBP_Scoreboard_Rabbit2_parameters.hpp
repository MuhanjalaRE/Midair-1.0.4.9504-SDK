#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Scoreboard_Rabbit2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_Scoreboard_Rabbit2.WBP_Scoreboard_Rabbit2_C.Tick
struct UWBP_Scoreboard_Rabbit2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Scoreboard_Rabbit2.WBP_Scoreboard_Rabbit2_C.ExecuteUbergraph_WBP_Scoreboard_Rabbit2
struct UWBP_Scoreboard_Rabbit2_C_ExecuteUbergraph_WBP_Scoreboard_Rabbit2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
