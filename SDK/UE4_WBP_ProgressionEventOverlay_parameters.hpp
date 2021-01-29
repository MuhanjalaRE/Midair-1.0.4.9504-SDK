#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionEventOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.GetMaxValue2_1
struct UWBP_ProgressionEventOverlay_C_GetMaxValue2_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.GetMaxValue1_1
struct UWBP_ProgressionEventOverlay_C_GetMaxValue1_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.GetValue2_1
struct UWBP_ProgressionEventOverlay_C_GetValue2_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.GetValue1_1
struct UWBP_ProgressionEventOverlay_C_GetValue1_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Get_XPProgressText_Text_1
struct UWBP_ProgressionEventOverlay_C_Get_XPProgressText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Get_NextLevelText_Text_1
struct UWBP_ProgressionEventOverlay_C_Get_NextLevelText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Get_CurrentLevelText_Text_1
struct UWBP_ProgressionEventOverlay_C_Get_CurrentLevelText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Tick
struct UWBP_ProgressionEventOverlay_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Start
struct UWBP_ProgressionEventOverlay_C_Start_Params
{
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Construct
struct UWBP_ProgressionEventOverlay_C_Construct_Params
{
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.OnXPGiven
struct UWBP_ProgressionEventOverlay_C_OnXPGiven_Params
{
	int                                                StartingLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartingXP;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPAdded;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPForNextLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Start Next Level
struct UWBP_ProgressionEventOverlay_C_Start_Next_Level_Params
{
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.NewItemGiven
struct UWBP_ProgressionEventOverlay_C_NewItemGiven_Params
{
	class UClass*                                      LootClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Destruct
struct UWBP_ProgressionEventOverlay_C_Destruct_Params
{
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.ExecuteUbergraph_WBP_ProgressionEventOverlay
struct UWBP_ProgressionEventOverlay_C_ExecuteUbergraph_WBP_ProgressionEventOverlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
