#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LoadoutNamingWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.Get_Border_2_Visibility_1
struct UWBP_LoadoutNamingWidget_C_Get_Border_2_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.GetValidityDisplayText
struct UWBP_LoadoutNamingWidget_C_GetValidityDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.GetBrushColor_1
struct UWBP_LoadoutNamingWidget_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.GetToolTipWidget_1
struct UWBP_LoadoutNamingWidget_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_LoadoutNamingWidget_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.SetNameStatus
struct UWBP_LoadoutNamingWidget_C_SetNameStatus_Params
{
	struct FText                                       Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_LoadoutNamingWidget_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_LoadoutNamingWidget_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWBP_LoadoutNamingWidget_C_BndEvt__SubmitButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.TextCommited
struct UWBP_LoadoutNamingWidget_C_TextCommited_Params
{
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.ExecuteUbergraph_WBP_LoadoutNamingWidget
struct UWBP_LoadoutNamingWidget_C_ExecuteUbergraph_WBP_LoadoutNamingWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.OnValidTextCommitted__DelegateSignature
struct UWBP_LoadoutNamingWidget_C_OnValidTextCommitted__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.OnTextCancel__DelegateSignature
struct UWBP_LoadoutNamingWidget_C_OnTextCancel__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
