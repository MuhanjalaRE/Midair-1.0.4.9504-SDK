#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_TRFlagGoalR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.UserConstructionScript
struct ABP_TRFlagGoalR_C_UserConstructionScript_Params
{
};

// Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.ReceiveActorBeginOverlap
struct ABP_TRFlagGoalR_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.ReceiveTick
struct ABP_TRFlagGoalR_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.ExecuteUbergraph_BP_TRFlagGoalR
struct ABP_TRFlagGoalR_C_ExecuteUbergraph_BP_TRFlagGoalR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
