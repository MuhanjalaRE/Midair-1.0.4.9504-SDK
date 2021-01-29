#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerItems_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayerItems.WBP_PlayerItems_C.GetText_1
struct UWBP_PlayerItems_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerItems.WBP_PlayerItems_C.Get_ItemExampleWidget_Visibility_1
struct UWBP_PlayerItems_C_Get_ItemExampleWidget_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerItems.WBP_PlayerItems_C.GetObjectInfo
struct UWBP_PlayerItems_C_GetObjectInfo_Params
{
	class UObjectInfo*                                 Info;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerItems.WBP_PlayerItems_C.GetBrush_1
struct UWBP_PlayerItems_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerItems.WBP_PlayerItems_C.Construct
struct UWBP_PlayerItems_C_Construct_Params
{
};

// Function WBP_PlayerItems.WBP_PlayerItems_C.Slow Tick
struct UWBP_PlayerItems_C_Slow_Tick_Params
{
};

// Function WBP_PlayerItems.WBP_PlayerItems_C.ExecuteUbergraph_WBP_PlayerItems
struct UWBP_PlayerItems_C_ExecuteUbergraph_WBP_PlayerItems_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
