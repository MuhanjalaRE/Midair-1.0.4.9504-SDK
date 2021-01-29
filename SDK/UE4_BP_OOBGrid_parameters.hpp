#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_OOBGrid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_OOBGrid.BP_OOBGrid_C.ApplyFadeSetting
struct ABP_OOBGrid_C_ApplyFadeSetting_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeDistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OOBGrid.BP_OOBGrid_C.UserConstructionScript
struct ABP_OOBGrid_C_UserConstructionScript_Params
{
};

// Function BP_OOBGrid.BP_OOBGrid_C.BP_PlayOOBEffects
struct ABP_OOBGrid_C_BP_PlayOOBEffects_Params
{
	class AActor**                                     ActorExiting;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    WallNormal;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_OOBGrid.BP_OOBGrid_C.ExecuteUbergraph_BP_OOBGrid
struct ABP_OOBGrid_C_ExecuteUbergraph_BP_OOBGrid_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
