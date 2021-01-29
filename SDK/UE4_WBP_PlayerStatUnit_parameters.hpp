#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerStatUnit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.GetTotal
struct UWBP_PlayerStatUnit_C_GetTotal_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.GetAverage
struct UWBP_PlayerStatUnit_C_GetAverage_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.GetBest
struct UWBP_PlayerStatUnit_C_GetBest_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.PreConstruct
struct UWBP_PlayerStatUnit_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.ExecuteUbergraph_WBP_PlayerStatUnit
struct UWBP_PlayerStatUnit_C_ExecuteUbergraph_WBP_PlayerStatUnit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
