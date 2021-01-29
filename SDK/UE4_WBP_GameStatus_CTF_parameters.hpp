#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameStatus_CTF_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_PlayerIsTeamA_Visibility_1
struct UWBP_GameStatus_CTF_C_Get_PlayerIsTeamA_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_PlayerIsTeamB_Visibility_1
struct UWBP_GameStatus_CTF_C_Get_PlayerIsTeamB_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_ATeamScoreBar_Percent_1
struct UWBP_GameStatus_CTF_C_Get_ATeamScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_BTeamScoreBar_Percent_1
struct UWBP_GameStatus_CTF_C_Get_BTeamScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_BTeamScoreText_Text_1
struct UWBP_GameStatus_CTF_C_Get_BTeamScoreText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_ATeamScoreText_Text_1
struct UWBP_GameStatus_CTF_C_Get_ATeamScoreText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_TimeLeftText_Text_1
struct UWBP_GameStatus_CTF_C_Get_TimeLeftText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.GetFlagBStatus
struct UWBP_GameStatus_CTF_C_GetFlagBStatus_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.GetFlagAStatus
struct UWBP_GameStatus_CTF_C_GetFlagAStatus_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.GetFlagStatus
struct UWBP_GameStatus_CTF_C_GetFlagStatus_Params
{
	unsigned char                                      TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Construct
struct UWBP_GameStatus_CTF_C_Construct_Params
{
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.ExecuteUbergraph_WBP_GameStatus_CTF
struct UWBP_GameStatus_CTF_C_ExecuteUbergraph_WBP_GameStatus_CTF_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
