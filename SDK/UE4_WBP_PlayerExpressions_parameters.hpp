#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerExpressions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.ProcessInput
struct UWBP_PlayerExpressions_C_ProcessInput_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsAbortKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FindCategory
struct UWBP_PlayerExpressions_C_FindCategory_Params
{
	struct FText                                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_PlayerExpressionPanel_C*                Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.SwitchToCategory
struct UWBP_PlayerExpressions_C_SwitchToCategory_Params
{
	struct FText                                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.EndKeyHandling
struct UWBP_PlayerExpressions_C_EndKeyHandling_Params
{
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FocusAndBegin
struct UWBP_PlayerExpressions_C_FocusAndBegin_Params
{
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FindOrCreateCategory
struct UWBP_PlayerExpressions_C_FindOrCreateCategory_Params
{
	struct FText                                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_PlayerExpressionPanel_C*                Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.PopulateSelf
struct UWBP_PlayerExpressions_C_PopulateSelf_Params
{
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.Clear
struct UWBP_PlayerExpressions_C_Clear_Params
{
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.OnKeyDown
struct UWBP_PlayerExpressions_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.Construct
struct UWBP_PlayerExpressions_C_Construct_Params
{
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.OnFocusLost
struct UWBP_PlayerExpressions_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.ExecuteUbergraph_WBP_PlayerExpressions
struct UWBP_PlayerExpressions_C_ExecuteUbergraph_WBP_PlayerExpressions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
