#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ServerBrowserRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.Update Visibility
struct UWBP_ServerBrowserRow_C_Update_Visibility_Params
{
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.SetOfficialOnly
struct UWBP_ServerBrowserRow_C_SetOfficialOnly_Params
{
	bool                                               OfficialOnly;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.SetHidePassworded
struct UWBP_ServerBrowserRow_C_SetHidePassworded_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.SetHideFull
struct UWBP_ServerBrowserRow_C_SetHideFull_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.Get_OfficialIcon_Visibility_1
struct UWBP_ServerBrowserRow_C_Get_OfficialIcon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.GetText_4
struct UWBP_ServerBrowserRow_C_GetText_4_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.GetVisibility_1
struct UWBP_ServerBrowserRow_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.GetText_3
struct UWBP_ServerBrowserRow_C_GetText_3_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.GetText_2
struct UWBP_ServerBrowserRow_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.GetText_1
struct UWBP_ServerBrowserRow_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.OnMouseButtonDoubleClick
struct UWBP_ServerBrowserRow_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.Unselect
struct UWBP_ServerBrowserRow_C_Unselect_Params
{
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.OnMouseButtonDown
struct UWBP_ServerBrowserRow_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.Construct
struct UWBP_ServerBrowserRow_C_Construct_Params
{
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.OnMouseEnter
struct UWBP_ServerBrowserRow_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.OnMouseLeave
struct UWBP_ServerBrowserRow_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ServerBrowserRow.WBP_ServerBrowserRow_C.ExecuteUbergraph_WBP_ServerBrowserRow
struct UWBP_ServerBrowserRow_C_ExecuteUbergraph_WBP_ServerBrowserRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
