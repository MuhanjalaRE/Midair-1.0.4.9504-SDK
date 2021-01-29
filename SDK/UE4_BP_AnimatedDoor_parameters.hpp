#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AnimatedDoor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AnimatedDoor.BP_AnimatedDoor_C.Update Door Position
struct ABP_AnimatedDoor_C_Update_Door_Position_Params
{
};

// Function BP_AnimatedDoor.BP_AnimatedDoor_C.UserConstructionScript
struct ABP_AnimatedDoor_C_UserConstructionScript_Params
{
};

// Function BP_AnimatedDoor.BP_AnimatedDoor_C.ReceiveBeginPlay
struct ABP_AnimatedDoor_C_ReceiveBeginPlay_Params
{
};

// Function BP_AnimatedDoor.BP_AnimatedDoor_C.ReceiveTick
struct ABP_AnimatedDoor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimatedDoor.BP_AnimatedDoor_C.OnBeginOverlapTrigger
struct ABP_AnimatedDoor_C_OnBeginOverlapTrigger_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimatedDoor.BP_AnimatedDoor_C.Open Door
struct ABP_AnimatedDoor_C_Open_Door_Params
{
};

// Function BP_AnimatedDoor.BP_AnimatedDoor_C.ExecuteUbergraph_BP_AnimatedDoor
struct ABP_AnimatedDoor_C_ExecuteUbergraph_BP_AnimatedDoor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
