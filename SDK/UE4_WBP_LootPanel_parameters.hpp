#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LootPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_LootPanel.WBP_LootPanel_C.DoesHaveNewItemBadge
struct UWBP_LootPanel_C_DoesHaveNewItemBadge_Params
{
	bool                                               HasNewItemBadge;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LootPanel.WBP_LootPanel_C.GetText_2
struct UWBP_LootPanel_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LootPanel.WBP_LootPanel_C.GetText_1
struct UWBP_LootPanel_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LootPanel.WBP_LootPanel_C.OnMouseButtonDown
struct UWBP_LootPanel_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LootPanel.WBP_LootPanel_C.OnMouseMove
struct UWBP_LootPanel_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LootPanel.WBP_LootPanel_C.Get_OpenButton_bIsEnabled_1
struct UWBP_LootPanel_C_Get_OpenButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_LootPanel.WBP_LootPanel_C.Get_NextLootButton_bIsEnabled_1
struct UWBP_LootPanel_C_Get_NextLootButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_LootPanel.WBP_LootPanel_C.Get_PreviousLootButton_bIsEnabled_1
struct UWBP_LootPanel_C_Get_PreviousLootButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_LootPanel.WBP_LootPanel_C.Show
struct UWBP_LootPanel_C_Show_Params
{
};

// Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature
struct UWBP_LootPanel_C_BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_64_ButtonClicked__DelegateSignature
struct UWBP_LootPanel_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_64_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LootPanel.WBP_LootPanel_C.Show Lootbox
struct UWBP_LootPanel_C_Show_Lootbox_Params
{
};

// Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__PreviousLootButton_K2Node_ComponentBoundEvent_200_ButtonClicked__DelegateSignature
struct UWBP_LootPanel_C_BndEvt__PreviousLootButton_K2Node_ComponentBoundEvent_200_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LootPanel.WBP_LootPanel_C.BndEvt__NextLootButton_K2Node_ComponentBoundEvent_211_ButtonClicked__DelegateSignature
struct UWBP_LootPanel_C_BndEvt__NextLootButton_K2Node_ComponentBoundEvent_211_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LootPanel.WBP_LootPanel_C.Show Loot
struct UWBP_LootPanel_C_Show_Loot_Params
{
};

// Function WBP_LootPanel.WBP_LootPanel_C.Crate Materialized
struct UWBP_LootPanel_C_Crate_Materialized_Params
{
};

// Function WBP_LootPanel.WBP_LootPanel_C.Crate Opened
struct UWBP_LootPanel_C_Crate_Opened_Params
{
};

// Function WBP_LootPanel.WBP_LootPanel_C.Crate Vanished
struct UWBP_LootPanel_C_Crate_Vanished_Params
{
};

// Function WBP_LootPanel.WBP_LootPanel_C.On Given New Items
struct UWBP_LootPanel_C_On_Given_New_Items_Params
{
	TArray<class UClass*>                              NewItems;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_LootPanel.WBP_LootPanel_C.Construct
struct UWBP_LootPanel_C_Construct_Params
{
};

// Function WBP_LootPanel.WBP_LootPanel_C.ExecuteUbergraph_WBP_LootPanel
struct UWBP_LootPanel_C_ExecuteUbergraph_WBP_LootPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
