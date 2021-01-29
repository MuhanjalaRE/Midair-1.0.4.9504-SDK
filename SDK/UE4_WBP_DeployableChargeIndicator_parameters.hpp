#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_DeployableChargeIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.GetNewMaterialWithFillValue
struct UWBP_DeployableChargeIndicator_C_GetNewMaterialWithFillValue_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.Construct
struct UWBP_DeployableChargeIndicator_C_Construct_Params
{
};

// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.SetLiteralFillValue
struct UWBP_DeployableChargeIndicator_C_SetLiteralFillValue_Params
{
	float                                              FillPercent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.StartFilling
struct UWBP_DeployableChargeIndicator_C_StartFilling_Params
{
	float                                              From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.UpdateTexture
struct UWBP_DeployableChargeIndicator_C_UpdateTexture_Params
{
};

// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.Redraw
struct UWBP_DeployableChargeIndicator_C_Redraw_Params
{
};

// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.ExecuteUbergraph_WBP_DeployableChargeIndicator
struct UWBP_DeployableChargeIndicator_C_ExecuteUbergraph_WBP_DeployableChargeIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
