#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_DeployableErrorList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_DeployableErrorList.WBP_DeployableErrorList_C.GetErrorArrayAsTextWithLines
struct UWBP_DeployableErrorList_C_GetErrorArrayAsTextWithLines_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function WBP_DeployableErrorList.WBP_DeployableErrorList_C.Construct
struct UWBP_DeployableErrorList_C_Construct_Params
{
};

// Function WBP_DeployableErrorList.WBP_DeployableErrorList_C.SlowTick
struct UWBP_DeployableErrorList_C_SlowTick_Params
{
};

// Function WBP_DeployableErrorList.WBP_DeployableErrorList_C.ExecuteUbergraph_WBP_DeployableErrorList
struct UWBP_DeployableErrorList_C_ExecuteUbergraph_WBP_DeployableErrorList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
