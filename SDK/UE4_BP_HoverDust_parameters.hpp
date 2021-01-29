#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_HoverDust_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HoverDust.BP_HoverDust_C.UserConstructionScript
struct ABP_HoverDust_C_UserConstructionScript_Params
{
};

// Function BP_HoverDust.BP_HoverDust_C.ReceiveTick
struct ABP_HoverDust_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverDust.BP_HoverDust_C.ReceiveDestroyed
struct ABP_HoverDust_C_ReceiveDestroyed_Params
{
};

// Function BP_HoverDust.BP_HoverDust_C.ExecuteUbergraph_BP_HoverDust
struct ABP_HoverDust_C_ExecuteUbergraph_BP_HoverDust_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
