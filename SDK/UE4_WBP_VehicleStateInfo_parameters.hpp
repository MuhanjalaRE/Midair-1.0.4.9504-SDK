#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleStateInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Hide Vehicle Abilities
struct UWBP_VehicleStateInfo_C_Hide_Vehicle_Abilities_Params
{
};

// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.CreateAbilityInfoWidget
struct UWBP_VehicleStateInfo_C_CreateAbilityInfoWidget_Params
{
	class UWBP_VehicleAbilityInfo_C*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Update
struct UWBP_VehicleStateInfo_C_Update_Params
{
};

// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.GetVisibility_2
struct UWBP_VehicleStateInfo_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Construct
struct UWBP_VehicleStateInfo_C_Construct_Params
{
};

// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Custom Tick
struct UWBP_VehicleStateInfo_C_Custom_Tick_Params
{
};

// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.ExecuteUbergraph_WBP_VehicleStateInfo
struct UWBP_VehicleStateInfo_C_ExecuteUbergraph_WBP_VehicleStateInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
