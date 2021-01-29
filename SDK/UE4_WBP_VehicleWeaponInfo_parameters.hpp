#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleWeaponInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetCurrentRoundDisplayVisibility
struct UWBP_VehicleWeaponInfo_C_GetCurrentRoundDisplayVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.Get_TextBlock_0_Text_1
struct UWBP_VehicleWeaponInfo_C_Get_TextBlock_0_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetVisibility_1
struct UWBP_VehicleWeaponInfo_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetForegroundColor_1
struct UWBP_VehicleWeaponInfo_C_GetForegroundColor_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetBrushColor_2
struct UWBP_VehicleWeaponInfo_C_GetBrushColor_2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetBrushColor_1
struct UWBP_VehicleWeaponInfo_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetPercent_1
struct UWBP_VehicleWeaponInfo_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.UpdateInfo
struct UWBP_VehicleWeaponInfo_C_UpdateInfo_Params
{
	class UVehicleSeatComponent*                       AssociatedSeat;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleWeaponComponent*                     Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.Construct
struct UWBP_VehicleWeaponInfo_C_Construct_Params
{
};

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.Slow Tick
struct UWBP_VehicleWeaponInfo_C_Slow_Tick_Params
{
};

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.ExecuteUbergraph_WBP_VehicleWeaponInfo
struct UWBP_VehicleWeaponInfo_C_ExecuteUbergraph_WBP_VehicleWeaponInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
