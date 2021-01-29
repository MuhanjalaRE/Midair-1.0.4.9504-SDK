#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FlagForcefield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FlagForcefield.BP_FlagForcefield_C.UserConstructionScript
struct ABP_FlagForcefield_C_UserConstructionScript_Params
{
};

// Function BP_FlagForcefield.BP_FlagForcefield_C.ReceiveBeginPlay
struct ABP_FlagForcefield_C_ReceiveBeginPlay_Params
{
};

// Function BP_FlagForcefield.BP_FlagForcefield_C.ReceiveTick
struct ABP_FlagForcefield_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlagForcefield.BP_FlagForcefield_C.ReceiveActorBeginOverlap
struct ABP_FlagForcefield_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlagForcefield.BP_FlagForcefield_C.ExecuteUbergraph_BP_FlagForcefield
struct ABP_FlagForcefield_C_ExecuteUbergraph_BP_FlagForcefield_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
