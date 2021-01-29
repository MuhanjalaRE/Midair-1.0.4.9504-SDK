#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_DetectedStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_DetectedStatus.WBP_DetectedStatus_C.SetDetectedState
struct UWBP_DetectedStatus_C_SetDetectedState_Params
{
	EDetectedState                                     NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DetectedStatus.WBP_DetectedStatus_C.Construct
struct UWBP_DetectedStatus_C_Construct_Params
{
};

// Function WBP_DetectedStatus.WBP_DetectedStatus_C.CustomEvent_1
struct UWBP_DetectedStatus_C_CustomEvent_1_Params
{
};

// Function WBP_DetectedStatus.WBP_DetectedStatus_C.ExecuteUbergraph_WBP_DetectedStatus
struct UWBP_DetectedStatus_C_ExecuteUbergraph_WBP_DetectedStatus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
