#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayerStats.WBP_PlayerStats_C.Update Stats
struct UWBP_PlayerStats_C_Update_Stats_Params
{
};

// Function WBP_PlayerStats.WBP_PlayerStats_C.OnFail_31A2451E4E1D30D64C94DD86C7CC85D5
struct UWBP_PlayerStats_C_OnFail_31A2451E4E1D30D64C94DD86C7CC85D5_Params
{
	struct FPlayerStats                                PlayerStats;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerStats.WBP_PlayerStats_C.OnSuccess_31A2451E4E1D30D64C94DD86C7CC85D5
struct UWBP_PlayerStats_C_OnSuccess_31A2451E4E1D30D64C94DD86C7CC85D5_Params
{
	struct FPlayerStats                                PlayerStats;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerStats.WBP_PlayerStats_C.Construct
struct UWBP_PlayerStats_C_Construct_Params
{
};

// Function WBP_PlayerStats.WBP_PlayerStats_C.OnGetCurrentUserStats
struct UWBP_PlayerStats_C_OnGetCurrentUserStats_Params
{
};

// Function WBP_PlayerStats.WBP_PlayerStats_C.ExecuteUbergraph_WBP_PlayerStats
struct UWBP_PlayerStats_C_ExecuteUbergraph_WBP_PlayerStats_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
