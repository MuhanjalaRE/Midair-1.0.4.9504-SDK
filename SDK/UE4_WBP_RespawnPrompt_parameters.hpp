#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_RespawnPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetShouldShowSteamSync
struct UWBP_RespawnPrompt_C_GetShouldShowSteamSync_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.Get_SyncTextBox_Visibility_1
struct UWBP_RespawnPrompt_C_Get_SyncTextBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetRespawnLeaderText
struct UWBP_RespawnPrompt_C_GetRespawnLeaderText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetEntireWidgetVisibility
struct UWBP_RespawnPrompt_C_GetEntireWidgetVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetLoadoutName
struct UWBP_RespawnPrompt_C_GetLoadoutName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetQuickSpawnButtonLeadingText
struct UWBP_RespawnPrompt_C_GetQuickSpawnButtonLeadingText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetFullSpawnButtonLeadingText
struct UWBP_RespawnPrompt_C_GetFullSpawnButtonLeadingText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.CommonFloatToText
struct UWBP_RespawnPrompt_C_CommonFloatToText_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetBasicSpawnVisibility
struct UWBP_RespawnPrompt_C_GetBasicSpawnVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetPressSpawnVisibility
struct UWBP_RespawnPrompt_C_GetPressSpawnVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
