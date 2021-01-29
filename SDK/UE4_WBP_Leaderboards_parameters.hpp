#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Leaderboards_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_Leaderboards.WBP_Leaderboards_C.Populate All
struct UWBP_Leaderboards_C_Populate_All_Params
{
};

// Function WBP_Leaderboards.WBP_Leaderboards_C.OnFocusReceived
struct UWBP_Leaderboards_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Leaderboards.WBP_Leaderboards_C.Construct
struct UWBP_Leaderboards_C_Construct_Params
{
};

// Function WBP_Leaderboards.WBP_Leaderboards_C.BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_179_OnSelectionChangedEvent__DelegateSignature
struct UWBP_Leaderboards_C_BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_179_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Leaderboards.WBP_Leaderboards_C.ExecuteUbergraph_WBP_Leaderboards
struct UWBP_Leaderboards_C_ExecuteUbergraph_WBP_Leaderboards_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
