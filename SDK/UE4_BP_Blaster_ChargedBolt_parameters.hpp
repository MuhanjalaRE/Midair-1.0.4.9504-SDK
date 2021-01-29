#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Blaster_ChargedBolt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Blaster_ChargedBolt.BP_Blaster_ChargedBolt_C.UserConstructionScript
struct ABP_Blaster_ChargedBolt_C_UserConstructionScript_Params
{
};

// Function BP_Blaster_ChargedBolt.BP_Blaster_ChargedBolt_C.ReceiveBeginPlay
struct ABP_Blaster_ChargedBolt_C_ReceiveBeginPlay_Params
{
};

// Function BP_Blaster_ChargedBolt.BP_Blaster_ChargedBolt_C.ReceiveHit
struct ABP_Blaster_ChargedBolt_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Blaster_ChargedBolt.BP_Blaster_ChargedBolt_C.ExecuteUbergraph_BP_Blaster_ChargedBolt
struct ABP_Blaster_ChargedBolt_C_ExecuteUbergraph_BP_Blaster_ChargedBolt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
