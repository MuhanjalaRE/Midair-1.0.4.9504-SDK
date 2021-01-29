#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WeaponSlotInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponSlotInfo.WeaponSlotInfo_C.OnUnlock
struct UWeaponSlotInfo_C_OnUnlock_Params
{
};

// Function WeaponSlotInfo.WeaponSlotInfo_C.ExecuteUbergraph_WeaponSlotInfo
struct UWeaponSlotInfo_C_ExecuteUbergraph_WeaponSlotInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
