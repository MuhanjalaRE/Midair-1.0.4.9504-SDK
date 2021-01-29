#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameStatus_TR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.GetFlagStatus
struct UWBP_GameStatus_TR_C_GetFlagStatus_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_ATeamSco
struct UWBP_GameStatus_TR_C_Get_ATeamSco_Params
{
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.GetText_1
struct UWBP_GameStatus_TR_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_PlayerIsTeamA_Visibility_1
struct UWBP_GameStatus_TR_C_Get_PlayerIsTeamA_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_PlayerIsTeamB_Visibility_1
struct UWBP_GameStatus_TR_C_Get_PlayerIsTeamB_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_ATeamScoreBar_Percent_1
struct UWBP_GameStatus_TR_C_Get_ATeamScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_BTeamScoreBar_Percent_1
struct UWBP_GameStatus_TR_C_Get_BTeamScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_BTeamScoreText_Text_1
struct UWBP_GameStatus_TR_C_Get_BTeamScoreText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_ATeamScoreText_Text_1
struct UWBP_GameStatus_TR_C_Get_ATeamScoreText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_TimeLeftText_Text_1
struct UWBP_GameStatus_TR_C_Get_TimeLeftText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Construct
struct UWBP_GameStatus_TR_C_Construct_Params
{
};

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.ExecuteUbergraph_WBP_GameStatus_TR
struct UWBP_GameStatus_TR_C_ExecuteUbergraph_WBP_GameStatus_TR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
