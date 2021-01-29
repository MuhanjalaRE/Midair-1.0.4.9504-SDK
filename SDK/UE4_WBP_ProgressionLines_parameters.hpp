#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionLines_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ProgressionLines.WBP_ProgressionLines_C.OnPaint
struct UWBP_ProgressionLines_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ProgressionLines.WBP_ProgressionLines_C.Construct
struct UWBP_ProgressionLines_C_Construct_Params
{
};

// Function WBP_ProgressionLines.WBP_ProgressionLines_C.ExecuteUbergraph_WBP_ProgressionLines
struct UWBP_ProgressionLines_C_ExecuteUbergraph_WBP_ProgressionLines_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
