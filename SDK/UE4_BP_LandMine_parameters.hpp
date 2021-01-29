#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_LandMine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LandMine.BP_LandMine_C.UserConstructionScript
struct ABP_LandMine_C_UserConstructionScript_Params
{
};

// Function BP_LandMine.BP_LandMine_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
struct ABP_LandMine_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_LandMine.BP_LandMine_C.BP_Activate
struct ABP_LandMine_C_BP_Activate_Params
{
};

// Function BP_LandMine.BP_LandMine_C.BP_StartArm
struct ABP_LandMine_C_BP_StartArm_Params
{
};

// Function BP_LandMine.BP_LandMine_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
struct ABP_LandMine_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_LandMine.BP_LandMine_C.BP_FinishedArm
struct ABP_LandMine_C_BP_FinishedArm_Params
{
};

// Function BP_LandMine.BP_LandMine_C.ReceiveDestroyed
struct ABP_LandMine_C_ReceiveDestroyed_Params
{
};

// Function BP_LandMine.BP_LandMine_C.OnRep_TeamID
struct ABP_LandMine_C_OnRep_TeamID_Params
{
};

// Function BP_LandMine.BP_LandMine_C.ExecuteUbergraph_BP_LandMine
struct ABP_LandMine_C_ExecuteUbergraph_BP_LandMine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
