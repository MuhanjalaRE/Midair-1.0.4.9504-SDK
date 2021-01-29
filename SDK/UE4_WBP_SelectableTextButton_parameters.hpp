#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_SelectableTextButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_SelectableTextButton.WBP_SelectableTextButton_C.GetBrushColor_1
struct UWBP_SelectableTextButton_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_SelectableTextButton.WBP_SelectableTextButton_C.OnMouseMove_1
struct UWBP_SelectableTextButton_C_OnMouseMove_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_SelectableTextButton.WBP_SelectableTextButton_C.OnMouseButtonUp_1
struct UWBP_SelectableTextButton_C_OnMouseButtonUp_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_SelectableTextButton.WBP_SelectableTextButton_C.OnMouseButtonDown_1
struct UWBP_SelectableTextButton_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_SelectableTextButton.WBP_SelectableTextButton_C.Get_ItemName_ColorAndOpacity_1
struct UWBP_SelectableTextButton_C_Get_ItemName_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_SelectableTextButton.WBP_SelectableTextButton_C.Construct
struct UWBP_SelectableTextButton_C_Construct_Params
{
};

// Function WBP_SelectableTextButton.WBP_SelectableTextButton_C.Tick
struct UWBP_SelectableTextButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SelectableTextButton.WBP_SelectableTextButton_C.PreConstruct
struct UWBP_SelectableTextButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SelectableTextButton.WBP_SelectableTextButton_C.OnMouseEnter
struct UWBP_SelectableTextButton_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SelectableTextButton.WBP_SelectableTextButton_C.ExecuteUbergraph_WBP_SelectableTextButton
struct UWBP_SelectableTextButton_C_ExecuteUbergraph_WBP_SelectableTextButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
