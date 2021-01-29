#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_StatsPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_StatsPanel.WBP_StatsPanel_C.Switch To Player Stats
struct UWBP_StatsPanel_C_Switch_To_Player_Stats_Params
{
};

// Function WBP_StatsPanel.WBP_StatsPanel_C.Refresh
struct UWBP_StatsPanel_C_Refresh_Params
{
};

// Function WBP_StatsPanel.WBP_StatsPanel_C.Switch to Match History
struct UWBP_StatsPanel_C_Switch_to_Match_History_Params
{
};

// Function WBP_StatsPanel.WBP_StatsPanel_C.Switch To Leaderboards
struct UWBP_StatsPanel_C_Switch_To_Leaderboards_Params
{
};

// Function WBP_StatsPanel.WBP_StatsPanel_C.OnFocusReceived
struct UWBP_StatsPanel_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
