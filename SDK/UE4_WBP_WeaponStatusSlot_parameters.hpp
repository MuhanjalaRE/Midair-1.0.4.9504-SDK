#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_WeaponStatusSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_WeaponStatusSlot.WBP_WeaponStatusSlot_C.GetForegroundColor_2
struct UWBP_WeaponStatusSlot_C_GetForegroundColor_2_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_WeaponStatusSlot.WBP_WeaponStatusSlot_C.GetVisibility_1
struct UWBP_WeaponStatusSlot_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_WeaponStatusSlot.WBP_WeaponStatusSlot_C.GetForegroundColor_1
struct UWBP_WeaponStatusSlot_C_GetForegroundColor_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_WeaponStatusSlot.WBP_WeaponStatusSlot_C.GetBrushColor_2
struct UWBP_WeaponStatusSlot_C_GetBrushColor_2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_WeaponStatusSlot.WBP_WeaponStatusSlot_C.GetBrushColor_1
struct UWBP_WeaponStatusSlot_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_WeaponStatusSlot.WBP_WeaponStatusSlot_C.GetPercent_1
struct UWBP_WeaponStatusSlot_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_WeaponStatusSlot.WBP_WeaponStatusSlot_C.GetCurrentAmmo
struct UWBP_WeaponStatusSlot_C_GetCurrentAmmo_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_WeaponStatusSlot.WBP_WeaponStatusSlot_C.GetMaxAmmo
struct UWBP_WeaponStatusSlot_C_GetMaxAmmo_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_WeaponStatusSlot.WBP_WeaponStatusSlot_C.UpdateInfo
struct UWBP_WeaponStatusSlot_C_UpdateInfo_Params
{
	int                                                PriorityNumber;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMAWeapon*                                   Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
