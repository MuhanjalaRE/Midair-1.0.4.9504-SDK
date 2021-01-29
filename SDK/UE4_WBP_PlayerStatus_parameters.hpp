#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetValue2_1
struct UWBP_PlayerStatus_C_GetValue2_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetValue1_1
struct UWBP_PlayerStatus_C_GetValue1_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetFillColorAndOpacity_1
struct UWBP_PlayerStatus_C_GetFillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetVisibility_1
struct UWBP_PlayerStatus_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetPlayerEnergyText
struct UWBP_PlayerStatus_C_GetPlayerEnergyText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetPlayerHealthText
struct UWBP_PlayerStatus_C_GetPlayerHealthText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerStatus.WBP_PlayerStatus_C.Construct
struct UWBP_PlayerStatus_C_Construct_Params
{
};

// Function WBP_PlayerStatus.WBP_PlayerStatus_C.CustomEvent_1
struct UWBP_PlayerStatus_C_CustomEvent_1_Params
{
};

// Function WBP_PlayerStatus.WBP_PlayerStatus_C.ExecuteUbergraph_WBP_PlayerStatus
struct UWBP_PlayerStatus_C_ExecuteUbergraph_WBP_PlayerStatus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
