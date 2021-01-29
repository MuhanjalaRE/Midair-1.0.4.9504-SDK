#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BaseCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetWeaponByIndex
struct ABP_BaseCharacter_C_GetWeaponByIndex_Params
{
	int                                                WeaponIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMAWeapon*                                   Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript
struct ABP_BaseCharacter_C_UserConstructionScript_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_OnRep_PlayerState
struct ABP_BaseCharacter_C_BP_OnRep_PlayerState_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick
struct ABP_BaseCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_PlayTakeHitEffects
struct ABP_BaseCharacter_C_BP_PlayTakeHitEffects_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_StartPurchaseVehicle
struct ABP_BaseCharacter_C_BP_StartPurchaseVehicle_Params
{
	class AVehicleSpawnPad**                           SpawnPad;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_EndPurchaseVehicle
struct ABP_BaseCharacter_C_BP_EndPurchaseVehicle_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_ShowEngineerWidget
struct ABP_BaseCharacter_C_BP_ShowEngineerWidget_Params
{
	class AEngineerPack**                              Pack;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged
struct ABP_BaseCharacter_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter
struct ABP_BaseCharacter_C_ExecuteUbergraph_BP_BaseCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
