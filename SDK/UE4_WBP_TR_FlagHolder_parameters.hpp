#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_TR_FlagHolder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_TR_FlagHolder.WBP_TR_FlagHolder_C.GetText_1
struct UWBP_TR_FlagHolder_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_TR_FlagHolder.WBP_TR_FlagHolder_C.Tick
struct UWBP_TR_FlagHolder_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TR_FlagHolder.WBP_TR_FlagHolder_C.ExecuteUbergraph_WBP_TR_FlagHolder
struct UWBP_TR_FlagHolder_C_ExecuteUbergraph_WBP_TR_FlagHolder_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
