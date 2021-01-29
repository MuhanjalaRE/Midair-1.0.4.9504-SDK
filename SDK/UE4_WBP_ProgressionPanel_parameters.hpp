#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ProgressionPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.DoesHaveNewItemBadge
struct UWBP_ProgressionPanel_C_DoesHaveNewItemBadge_Params
{
	bool                                               HasNewItemBadge;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_UseProgressionPass_ToolTipText_1
struct UWBP_ProgressionPanel_C_Get_UseProgressionPass_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_UseProgressionPass_bIsEnabled_1
struct UWBP_ProgressionPanel_C_Get_UseProgressionPass_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.GetVisibility_1
struct UWBP_ProgressionPanel_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_BuyProgressionPass_Visibility_1
struct UWBP_ProgressionPanel_C_Get_BuyProgressionPass_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Get_UseProgressionPass_Visibility_1
struct UWBP_ProgressionPanel_C_Get_UseProgressionPass_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.JumpToWeaponSlotForArmor
struct UWBP_ProgressionPanel_C_JumpToWeaponSlotForArmor_Params
{
	class UClass*                                      Armor_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.JumpToObject
struct UWBP_ProgressionPanel_C_JumpToObject_Params
{
	class UClass*                                      Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseWheel
struct UWBP_ProgressionPanel_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseButtonDoubleClick
struct UWBP_ProgressionPanel_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseButtonUp
struct UWBP_ProgressionPanel_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseButtonDown
struct UWBP_ProgressionPanel_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseMove
struct UWBP_ProgressionPanel_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Construct
struct UWBP_ProgressionPanel_C_Construct_Params
{
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnMouseLeave
struct UWBP_ProgressionPanel_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__GraphWidget_K2Node_ComponentBoundEvent_0_On Node Selected__DelegateSignature
struct UWBP_ProgressionPanel_C_BndEvt__GraphWidget_K2Node_ComponentBoundEvent_0_On_Node_Selected__DelegateSignature_Params
{
	class UObjectInfo*                                 Node_Object_Info;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Clear Selection
struct UWBP_ProgressionPanel_C_Clear_Selection_Params
{
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Progression Data Updated
struct UWBP_ProgressionPanel_C_Progression_Data_Updated_Params
{
	class UMALocalPlayer*                              LocalPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Tick
struct UWBP_ProgressionPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__GiveLevel_K2Node_ComponentBoundEvent_342_ButtonClicked__DelegateSignature
struct UWBP_ProgressionPanel_C_BndEvt__GiveLevel_K2Node_ComponentBoundEvent_342_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__MaxLevel_K2Node_ComponentBoundEvent_353_ButtonClicked__DelegateSignature
struct UWBP_ProgressionPanel_C_BndEvt__MaxLevel_K2Node_ComponentBoundEvent_353_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__ResetProgression_K2Node_ComponentBoundEvent_365_ButtonClicked__DelegateSignature
struct UWBP_ProgressionPanel_C_BndEvt__ResetProgression_K2Node_ComponentBoundEvent_365_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Reset Progression
struct UWBP_ProgressionPanel_C_Reset_Progression_Params
{
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_127_ButtonClicked__DelegateSignature
struct UWBP_ProgressionPanel_C_BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_127_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Show Back To Loadouts
struct UWBP_ProgressionPanel_C_Show_Back_To_Loadouts_Params
{
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__ProgressionPass_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature
struct UWBP_ProgressionPanel_C_BndEvt__ProgressionPass_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BndEvt__UseProgressionPass_K2Node_ComponentBoundEvent_105_ButtonClicked__DelegateSignature
struct UWBP_ProgressionPanel_C_BndEvt__UseProgressionPass_K2Node_ComponentBoundEvent_105_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.OnOk
struct UWBP_ProgressionPanel_C_OnOk_Params
{
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.Progression Updated
struct UWBP_ProgressionPanel_C_Progression_Updated_Params
{
	class UMALocalPlayer*                              LocalPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.ExecuteUbergraph_WBP_ProgressionPanel
struct UWBP_ProgressionPanel_C_ExecuteUbergraph_WBP_ProgressionPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ProgressionPanel.WBP_ProgressionPanel_C.BackToLoadouts__DelegateSignature
struct UWBP_ProgressionPanel_C_BackToLoadouts__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
