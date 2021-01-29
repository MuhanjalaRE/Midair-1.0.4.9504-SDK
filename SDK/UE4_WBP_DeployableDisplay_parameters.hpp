#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_DeployableDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.GetColorAndOpacity_1
struct UWBP_DeployableDisplay_C_GetColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Get_DisplayImage_ColorAndOpacity_1
struct UWBP_DeployableDisplay_C_Get_DisplayImage_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseButtonDown
struct UWBP_DeployableDisplay_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseButtonUp
struct UWBP_DeployableDisplay_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseLeave
struct UWBP_DeployableDisplay_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetBGColor
struct UWBP_DeployableDisplay_C_SetBGColor_Params
{
	struct FLinearColor                                InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Construct
struct UWBP_DeployableDisplay_C_Construct_Params
{
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetFromDeployable
struct UWBP_DeployableDisplay_C_SetFromDeployable_Params
{
	class UClass*                                      Deployable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AEngineerPack*                               Pack;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetNameAndImage
struct UWBP_DeployableDisplay_C_SetNameAndImage_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Set Amount
struct UWBP_DeployableDisplay_C_Set_Amount_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetDescription
struct UWBP_DeployableDisplay_C_SetDescription_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.OnMouseEnter
struct UWBP_DeployableDisplay_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Tick
struct UWBP_DeployableDisplay_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.SetBindName
struct UWBP_DeployableDisplay_C_SetBindName_Params
{
	struct FName                                       Bind_Name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.ExecuteUbergraph_WBP_DeployableDisplay
struct UWBP_DeployableDisplay_C_ExecuteUbergraph_WBP_DeployableDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.MouseUp__DelegateSignature
struct UWBP_DeployableDisplay_C_MouseUp__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DeployableDisplay.WBP_DeployableDisplay_C.Hovered__DelegateSignature
struct UWBP_DeployableDisplay_C_Hovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
