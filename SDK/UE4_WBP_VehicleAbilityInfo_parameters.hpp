#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleAbilityInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetVisibility_1
struct UWBP_VehicleAbilityInfo_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetForegroundColor_1
struct UWBP_VehicleAbilityInfo_C_GetForegroundColor_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetBrushColor_2
struct UWBP_VehicleAbilityInfo_C_GetBrushColor_2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetBrushColor_1
struct UWBP_VehicleAbilityInfo_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetPercent_1
struct UWBP_VehicleAbilityInfo_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.UpdateInfo
struct UWBP_VehicleAbilityInfo_C_UpdateInfo_Params
{
	struct FName                                       AbilityBind;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       AbilityName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
