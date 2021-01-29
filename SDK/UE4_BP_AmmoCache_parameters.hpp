#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AmmoCache_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AmmoCache.BP_AmmoCache_C.UserConstructionScript
struct ABP_AmmoCache_C_UserConstructionScript_Params
{
};

// Function BP_AmmoCache.BP_AmmoCache_C.UpdateCachedCharacter
struct ABP_AmmoCache_C_UpdateCachedCharacter_Params
{
	class AMACharacter*                                CachedCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmmoCache.BP_AmmoCache_C.BndEvt__AmmoLeftBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_AmmoCache_C_BndEvt__AmmoLeftBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmmoCache.BP_AmmoCache_C.CheckSpawnAmmo
struct ABP_AmmoCache_C_CheckSpawnAmmo_Params
{
};

// Function BP_AmmoCache.BP_AmmoCache_C.ExecuteUbergraph_BP_AmmoCache
struct ABP_AmmoCache_C_ExecuteUbergraph_BP_AmmoCache_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
