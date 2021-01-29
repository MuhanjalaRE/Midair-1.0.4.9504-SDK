#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AnimatedDoor_Cond_Armor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C.UserConstructionScript
struct ABP_AnimatedDoor_Cond_Armor_C_UserConstructionScript_Params
{
};

// Function BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C.OnBeginOverlapTrigger
struct ABP_AnimatedDoor_Cond_Armor_C_OnBeginOverlapTrigger_Params
{
	class AActor**                                     OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimatedDoor_Cond_Armor.BP_AnimatedDoor_Cond_Armor_C.ExecuteUbergraph_BP_AnimatedDoor_Cond_Armor
struct ABP_AnimatedDoor_Cond_Armor_C_ExecuteUbergraph_BP_AnimatedDoor_Cond_Armor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
