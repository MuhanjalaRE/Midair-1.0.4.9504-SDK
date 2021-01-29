#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Server List
struct UWBP_PlayPanel_C_Switch_To_Server_List_Params
{
};

// Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Match Making
struct UWBP_PlayPanel_C_Switch_To_Match_Making_Params
{
};

// Function WBP_PlayPanel.WBP_PlayPanel_C.Switch to Tutorials
struct UWBP_PlayPanel_C_Switch_to_Tutorials_Params
{
};

// Function WBP_PlayPanel.WBP_PlayPanel_C.Construct
struct UWBP_PlayPanel_C_Construct_Params
{
};

// Function WBP_PlayPanel.WBP_PlayPanel_C.ExecuteUbergraph_WBP_PlayPanel
struct UWBP_PlayPanel_C_ExecuteUbergraph_WBP_PlayPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
