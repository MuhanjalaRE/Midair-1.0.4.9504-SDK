#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_HUD2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_HUD2.WBP_HUD2_C.GetGamePaused
struct UWBP_HUD2_C_GetGamePaused_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_HUD2.WBP_HUD2_C.GetVisibility_2
struct UWBP_HUD2_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_HUD2.WBP_HUD2_C.Get_MapInfoBox_Visibility_1
struct UWBP_HUD2_C_Get_MapInfoBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_HUD2.WBP_HUD2_C.Get_ServerNameText_Text_1
struct UWBP_HUD2_C_Get_ServerNameText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD2.WBP_HUD2_C.Get_MapNameText_Text_1
struct UWBP_HUD2_C_Get_MapNameText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD2.WBP_HUD2_C.GetVisibility_1
struct UWBP_HUD2_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_HUD2.WBP_HUD2_C.Get_ChatSlotContainer_Visibility_1
struct UWBP_HUD2_C_Get_ChatSlotContainer_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_HUD2.WBP_HUD2_C.Get_Spectating Player_Text_1
struct UWBP_HUD2_C_Get_Spectating_Player_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD2.WBP_HUD2_C.Construct
struct UWBP_HUD2_C_Construct_Params
{
};

// Function WBP_HUD2.WBP_HUD2_C.OnServerNameReceived_Event_1
struct UWBP_HUD2_C_OnServerNameReceived_Event_1_Params
{
};

// Function WBP_HUD2.WBP_HUD2_C.ExecuteUbergraph_WBP_HUD2
struct UWBP_HUD2_C_ExecuteUbergraph_WBP_HUD2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
