#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Loadouts_SimpleListItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.GetHasValidColor
struct UWBP_Loadouts_SimpleListItem_C_GetHasValidColor_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.GetBrushColor_1
struct UWBP_Loadouts_SimpleListItem_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.OnMouseMove_1
struct UWBP_Loadouts_SimpleListItem_C_OnMouseMove_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.OnMouseButtonUp_1
struct UWBP_Loadouts_SimpleListItem_C_OnMouseButtonUp_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.OnMouseButtonDown_1
struct UWBP_Loadouts_SimpleListItem_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.Get_ItemName_ColorAndOpacity_1
struct UWBP_Loadouts_SimpleListItem_C_Get_ItemName_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.Update Item Info
struct UWBP_Loadouts_SimpleListItem_C_Update_Item_Info_Params
{
	class UClass*                                      Item_Info_Class;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.Construct
struct UWBP_Loadouts_SimpleListItem_C_Construct_Params
{
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.Tick
struct UWBP_Loadouts_SimpleListItem_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
struct UWBP_Loadouts_SimpleListItem_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.OnMouseEnter
struct UWBP_Loadouts_SimpleListItem_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.ExecuteUbergraph_WBP_Loadouts_SimpleListItem
struct UWBP_Loadouts_SimpleListItem_C_ExecuteUbergraph_WBP_Loadouts_SimpleListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadouts_SimpleListItem.WBP_Loadouts_SimpleListItem_C.JumpToAugment__DelegateSignature
struct UWBP_Loadouts_SimpleListItem_C_JumpToAugment__DelegateSignature_Params
{
	class UClass*                                      Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
