#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_HeavyCharacter_3P_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ABP_HeavyCharacter_3P.ABP_HeavyCharacter_3P_C.Get Weapon Scale
struct UABP_HeavyCharacter_3P_C_Get_Weapon_Scale_Params
{
	class AMAWeaponAttachment**                        Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weapon_Scale;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_HeavyCharacter_3P.ABP_HeavyCharacter_3P_C.BlueprintInitializeAnimation
struct UABP_HeavyCharacter_3P_C_BlueprintInitializeAnimation_Params
{
};

// Function ABP_HeavyCharacter_3P.ABP_HeavyCharacter_3P_C.ExecuteUbergraph_ABP_HeavyCharacter_3P
struct UABP_HeavyCharacter_3P_C_ExecuteUbergraph_ABP_HeavyCharacter_3P_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
