#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerLoadout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.GetVisibility_2
struct UWBP_PlayerLoadout_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Get_Backpack_Text_1
struct UWBP_PlayerLoadout_C_Get_Backpack_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Get_DeployableClass_Text_1
struct UWBP_PlayerLoadout_C_Get_DeployableClass_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Construct
struct UWBP_PlayerLoadout_C_Construct_Params
{
};

// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Custom Tick
struct UWBP_PlayerLoadout_C_Custom_Tick_Params
{
};

// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.ClearCharges
struct UWBP_PlayerLoadout_C_ClearCharges_Params
{
};

// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.ExecuteUbergraph_WBP_PlayerLoadout
struct UWBP_PlayerLoadout_C_ExecuteUbergraph_WBP_PlayerLoadout_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
