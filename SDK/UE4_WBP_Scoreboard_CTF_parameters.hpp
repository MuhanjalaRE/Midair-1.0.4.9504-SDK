#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Scoreboard_CTF_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.InitCustomPinnedStats
struct UWBP_Scoreboard_CTF_C_InitCustomPinnedStats_Params
{
};

// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.UpdatePlayerStatBox
struct UWBP_Scoreboard_CTF_C_UpdatePlayerStatBox_Params
{
};

// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.Construct
struct UWBP_Scoreboard_CTF_C_Construct_Params
{
};

// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.Tick
struct UWBP_Scoreboard_CTF_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.ExecuteUbergraph_WBP_Scoreboard_CTF
struct UWBP_Scoreboard_CTF_C_ExecuteUbergraph_WBP_Scoreboard_CTF_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
