#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameStatus_Arena2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_PlayerIsTeamB_Visibility_1
struct UWBP_GameStatus_Arena2_C_Get_PlayerIsTeamB_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_PlayerIsTeamA_Visibility_1
struct UWBP_GameStatus_Arena2_C_Get_PlayerIsTeamA_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get Team Status Text
struct UWBP_GameStatus_Arena2_C_Get_Team_Status_Text_Params
{
	unsigned char                                      TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_BTeamScoreBar_Percent_1
struct UWBP_GameStatus_Arena2_C_Get_BTeamScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_ATeamScoreBar_Percent_1
struct UWBP_GameStatus_Arena2_C_Get_ATeamScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_TimeLeftText_Text_1
struct UWBP_GameStatus_Arena2_C_Get_TimeLeftText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_BTeamScoreText_Text_1
struct UWBP_GameStatus_Arena2_C_Get_BTeamScoreText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_ATeamScoreText_Text_1
struct UWBP_GameStatus_Arena2_C_Get_ATeamScoreText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get Team B Status Text
struct UWBP_GameStatus_Arena2_C_Get_Team_B_Status_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get Team A Status Text
struct UWBP_GameStatus_Arena2_C_Get_Team_A_Status_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
