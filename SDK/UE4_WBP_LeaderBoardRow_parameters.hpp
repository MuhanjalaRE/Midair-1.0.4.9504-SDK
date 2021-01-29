#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LeaderBoardRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.OnMouseButtonDown
struct UWBP_LeaderBoardRow_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Get_TextScore_Text_1
struct UWBP_LeaderBoardRow_C_Get_TextScore_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Get_TextNo_Text_1
struct UWBP_LeaderBoardRow_C_Get_TextNo_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Get_TextPlayerName_Text_1
struct UWBP_LeaderBoardRow_C_Get_TextPlayerName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Unselect
struct UWBP_LeaderBoardRow_C_Unselect_Params
{
};

// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Construct
struct UWBP_LeaderBoardRow_C_Construct_Params
{
};

// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.OnMouseEnter
struct UWBP_LeaderBoardRow_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.OnMouseLeave
struct UWBP_LeaderBoardRow_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.ExecuteUbergraph_WBP_LeaderBoardRow
struct UWBP_LeaderBoardRow_C_ExecuteUbergraph_WBP_LeaderBoardRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
