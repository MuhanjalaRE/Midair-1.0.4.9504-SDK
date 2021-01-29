#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_VehicleInfo.WBP_VehicleInfo_C.Get_VehicleIcon_ColorAndOpacity_1
struct UWBP_VehicleInfo_C_Get_VehicleIcon_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleInfo.WBP_VehicleInfo_C.CanSpawn
struct UWBP_VehicleInfo_C_CanSpawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleInfo.WBP_VehicleInfo_C.Get_VehicleIcon_Brush_1
struct UWBP_VehicleInfo_C_Get_VehicleIcon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VehicleInfo.WBP_VehicleInfo_C.GetNumSeats
struct UWBP_VehicleInfo_C_GetNumSeats_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VehicleInfo.WBP_VehicleInfo_C.GetDeployedCount
struct UWBP_VehicleInfo_C_GetDeployedCount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VehicleInfo.WBP_VehicleInfo_C.GetMaxArmorIcon
struct UWBP_VehicleInfo_C_GetMaxArmorIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VehicleInfo.WBP_VehicleInfo_C.Construct
struct UWBP_VehicleInfo_C_Construct_Params
{
};

// Function WBP_VehicleInfo.WBP_VehicleInfo_C.ExecuteUbergraph_WBP_VehicleInfo
struct UWBP_VehicleInfo_C_ExecuteUbergraph_WBP_VehicleInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
