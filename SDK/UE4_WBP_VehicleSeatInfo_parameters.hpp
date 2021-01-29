#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleSeatInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetVisibility_1
struct UWBP_VehicleSeatInfo_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetForegroundColor_1
struct UWBP_VehicleSeatInfo_C_GetForegroundColor_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetBrushColor_2
struct UWBP_VehicleSeatInfo_C_GetBrushColor_2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetBrushColor_1
struct UWBP_VehicleSeatInfo_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetPercent_1
struct UWBP_VehicleSeatInfo_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.UpdateInfo
struct UWBP_VehicleSeatInfo_C_UpdateInfo_Params
{
	int                                                SeatOrdinal;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatComponent*                       Seat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.Construct
struct UWBP_VehicleSeatInfo_C_Construct_Params
{
};

// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.Slow Tick
struct UWBP_VehicleSeatInfo_C_Slow_Tick_Params
{
};

// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.ExecuteUbergraph_WBP_VehicleSeatInfo
struct UWBP_VehicleSeatInfo_C_ExecuteUbergraph_WBP_VehicleSeatInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
