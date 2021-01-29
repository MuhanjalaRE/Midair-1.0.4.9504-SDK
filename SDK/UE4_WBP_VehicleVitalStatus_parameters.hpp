#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleVitalStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetFillColorAndOpacity_1
struct UWBP_VehicleVitalStatus_C_GetFillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetVisibility_1
struct UWBP_VehicleVitalStatus_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetPlayerEnergyText
struct UWBP_VehicleVitalStatus_C_GetPlayerEnergyText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetPlayerHealthText
struct UWBP_VehicleVitalStatus_C_GetPlayerHealthText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.Construct
struct UWBP_VehicleVitalStatus_C_Construct_Params
{
};

// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.CustomEvent_1
struct UWBP_VehicleVitalStatus_C_CustomEvent_1_Params
{
};

// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.ExecuteUbergraph_WBP_VehicleVitalStatus
struct UWBP_VehicleVitalStatus_C_ExecuteUbergraph_WBP_VehicleVitalStatus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
