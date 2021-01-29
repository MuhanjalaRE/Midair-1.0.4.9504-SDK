#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Fighter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Fighter.BP_Fighter_C.UserConstructionScript
struct ABP_Fighter_C_UserConstructionScript_Params
{
};

// Function BP_Fighter.BP_Fighter_C.ReceiveTick
struct ABP_Fighter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fighter.BP_Fighter_C.ReceiveBeginPlay
struct ABP_Fighter_C_ReceiveBeginPlay_Params
{
};

// Function BP_Fighter.BP_Fighter_C.CustomEvent_1
struct ABP_Fighter_C_CustomEvent_1_Params
{
};

// Function BP_Fighter.BP_Fighter_C.ExecuteUbergraph_BP_Fighter
struct ABP_Fighter_C_ExecuteUbergraph_BP_Fighter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
