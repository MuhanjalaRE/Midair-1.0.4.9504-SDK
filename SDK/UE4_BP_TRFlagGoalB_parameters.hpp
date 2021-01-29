#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_TRFlagGoalB_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.UserConstructionScript
struct ABP_TRFlagGoalB_C_UserConstructionScript_Params
{
};

// Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.ReceiveActorBeginOverlap
struct ABP_TRFlagGoalB_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.ReceiveTick
struct ABP_TRFlagGoalB_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.ExecuteUbergraph_BP_TRFlagGoalB
struct ABP_TRFlagGoalB_C_ExecuteUbergraph_BP_TRFlagGoalB_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
