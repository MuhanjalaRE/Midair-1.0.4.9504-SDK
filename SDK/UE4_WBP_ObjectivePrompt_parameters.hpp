#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ObjectivePrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.UpdateDisplay
struct UWBP_ObjectivePrompt_C_UpdateDisplay_Params
{
};

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ObjectiveNotEmpty
struct UWBP_ObjectivePrompt_C_ObjectiveNotEmpty_Params
{
	struct FMidairObjectiveInfo                        MidairObjectiveInfo;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnPromptChanged
struct UWBP_ObjectivePrompt_C_OnPromptChanged_Params
{
};

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnObjectiveCompleted
struct UWBP_ObjectivePrompt_C_OnObjectiveCompleted_Params
{
};

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ExecuteUbergraph_WBP_ObjectivePrompt
struct UWBP_ObjectivePrompt_C_ExecuteUbergraph_WBP_ObjectivePrompt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
