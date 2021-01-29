#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.Get_UnlockButton_bIsEnabled_1
struct UWBP_ProgressionSelection_C_Get_UnlockButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.UnlockTextColorAndOpacity
struct UWBP_ProgressionSelection_C_UnlockTextColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.OnMouseWheel
struct UWBP_ProgressionSelection_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.OnMouseButtonDoubleClick
struct UWBP_ProgressionSelection_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.OnMouseButtonDown
struct UWBP_ProgressionSelection_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.Updated Selection Info
struct UWBP_ProgressionSelection_C_Updated_Selection_Info_Params
{
	class UObjectInfo*                                 Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
struct UWBP_ProgressionSelection_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.ExecuteUbergraph_WBP_ProgressionSelection
struct UWBP_ProgressionSelection_C_ExecuteUbergraph_WBP_ProgressionSelection_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionSelection.WBP_ProgressionSelection_C.Unlock Clicked__DelegateSignature
struct UWBP_ProgressionSelection_C_Unlock_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
