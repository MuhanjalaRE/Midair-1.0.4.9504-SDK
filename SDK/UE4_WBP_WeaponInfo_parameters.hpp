#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_WeaponInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_WeaponInfo.WBP_WeaponInfo_C.Update Weapon Stats
struct UWBP_WeaponInfo_C_Update_Weapon_Stats_Params
{
	struct FWeaponStatDetails                          Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WBP_WeaponInfo.WBP_WeaponInfo_C.ExecuteUbergraph_WBP_WeaponInfo
struct UWBP_WeaponInfo_C_ExecuteUbergraph_WBP_WeaponInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
