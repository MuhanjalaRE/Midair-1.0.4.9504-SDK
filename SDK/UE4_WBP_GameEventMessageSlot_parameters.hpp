#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameEventMessageSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.Construct
struct UWBP_GameEventMessageSlot_C_Construct_Params
{
};

// Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.Tick
struct UWBP_GameEventMessageSlot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.ExecuteUbergraph_WBP_GameEventMessageSlot
struct UWBP_GameEventMessageSlot_C_ExecuteUbergraph_WBP_GameEventMessageSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
