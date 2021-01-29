#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LoadoutsPackSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Get_ItemName_ColorAndOpacity_1
struct UWBP_LoadoutsPackSlot_C_Get_ItemName_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.GetBrushColor_1
struct UWBP_LoadoutsPackSlot_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseMove_1
struct UWBP_LoadoutsPackSlot_C_OnMouseMove_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseButtonUp_1
struct UWBP_LoadoutsPackSlot_C_OnMouseButtonUp_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseButtonDown_1
struct UWBP_LoadoutsPackSlot_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Construct
struct UWBP_LoadoutsPackSlot_C_Construct_Params
{
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Update From Class
struct UWBP_LoadoutsPackSlot_C_Update_From_Class_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Tick
struct UWBP_LoadoutsPackSlot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UWBP_LoadoutsPackSlot_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.OnMouseEnter
struct UWBP_LoadoutsPackSlot_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.ExecuteUbergraph_WBP_LoadoutsPackSlot
struct UWBP_LoadoutsPackSlot_C_ExecuteUbergraph_WBP_LoadoutsPackSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C.Jump To Pack__DelegateSignature
struct UWBP_LoadoutsPackSlot_C_Jump_To_Pack__DelegateSignature_Params
{
	class UClass*                                      Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
