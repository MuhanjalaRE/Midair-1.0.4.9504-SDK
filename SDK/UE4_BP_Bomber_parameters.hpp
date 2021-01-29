#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Bomber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Bomber.BP_Bomber_C.UserConstructionScript
struct ABP_Bomber_C_UserConstructionScript_Params
{
};

// Function BP_Bomber.BP_Bomber_C.ReceiveBeginPlay
struct ABP_Bomber_C_ReceiveBeginPlay_Params
{
};

// Function BP_Bomber.BP_Bomber_C.ReceiveTick
struct ABP_Bomber_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bomber.BP_Bomber_C.CustomEvent_1
struct ABP_Bomber_C_CustomEvent_1_Params
{
};

// Function BP_Bomber.BP_Bomber_C.ExecuteUbergraph_BP_Bomber
struct ABP_Bomber_C_ExecuteUbergraph_BP_Bomber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
