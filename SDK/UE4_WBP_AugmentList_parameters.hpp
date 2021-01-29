#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_AugmentList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_AugmentList.WBP_AugmentList_C.Construct
struct UWBP_AugmentList_C_Construct_Params
{
};

// Function WBP_AugmentList.WBP_AugmentList_C.Slow Tick
struct UWBP_AugmentList_C_Slow_Tick_Params
{
};

// Function WBP_AugmentList.WBP_AugmentList_C.ExecuteUbergraph_WBP_AugmentList
struct UWBP_AugmentList_C_ExecuteUbergraph_WBP_AugmentList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
