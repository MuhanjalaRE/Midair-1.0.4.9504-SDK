#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerExpressionPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.AddCategoryBinding
struct UWBP_PlayerExpressionPanel_C_AddCategoryBinding_Params
{
	struct FText                                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Display_Text;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.HandleEntry
struct UWBP_PlayerExpressionPanel_C_HandleEntry_Params
{
	class UWBP_PlayerExpressionEntry_C*                Expression;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.HandleFirstKeyPress
struct UWBP_PlayerExpressionPanel_C_HandleFirstKeyPress_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsAbortKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 Return_Value;                                             // (Parm, OutParm)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.AddChatBinding
struct UWBP_PlayerExpressionPanel_C_AddChatBinding_Params
{
	struct FText                                       DisplayText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ExpressionIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
