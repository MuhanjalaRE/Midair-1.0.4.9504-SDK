#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ScoreFeedItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.GetColorForValue
struct UWBP_ScoreFeedItem_C_GetColorForValue_Params
{
	struct FSlateColor                                 SlateColor;                                               // (Parm, OutParm)
};

// Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.Construct
struct UWBP_ScoreFeedItem_C_Construct_Params
{
};

// Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.PreConstruct
struct UWBP_ScoreFeedItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.Wrap It Up
struct UWBP_ScoreFeedItem_C_Wrap_It_Up_Params
{
};

// Function WBP_ScoreFeedItem.WBP_ScoreFeedItem_C.ExecuteUbergraph_WBP_ScoreFeedItem
struct UWBP_ScoreFeedItem_C_ExecuteUbergraph_WBP_ScoreFeedItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
