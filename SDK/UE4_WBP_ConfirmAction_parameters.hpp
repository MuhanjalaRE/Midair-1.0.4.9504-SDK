#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ConfirmAction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.GetDynamicText
struct UWBP_ConfirmAction_C_GetDynamicText_Params
{
	struct FText                                       PromptText;                                               // (Parm, OutParm)
};

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.PreConstruct
struct UWBP_ConfirmAction_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.Remove
struct UWBP_ConfirmAction_C_Remove_Params
{
};

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.Construct
struct UWBP_ConfirmAction_C_Construct_Params
{
};

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.Slow Tick
struct UWBP_ConfirmAction_C_Slow_Tick_Params
{
};

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_41_ButtonClicked__DelegateSignature
struct UWBP_ConfirmAction_C_BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_41_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.BndEvt__WBP_SelectableButtonWithText_C_0_K2Node_ComponentBoundEvent_52_ButtonClicked__DelegateSignature
struct UWBP_ConfirmAction_C_BndEvt__WBP_SelectableButtonWithText_C_0_K2Node_ComponentBoundEvent_52_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.ExecuteUbergraph_WBP_ConfirmAction
struct UWBP_ConfirmAction_C_ExecuteUbergraph_WBP_ConfirmAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.OnRemoved__DelegateSignature
struct UWBP_ConfirmAction_C_OnRemoved__DelegateSignature_Params
{
};

// Function WBP_ConfirmAction.WBP_ConfirmAction_C.OnActionAccepted__DelegateSignature
struct UWBP_ConfirmAction_C_OnActionAccepted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
