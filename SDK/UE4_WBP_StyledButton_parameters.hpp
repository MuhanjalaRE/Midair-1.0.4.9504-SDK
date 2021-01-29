#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_StyledButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_StyledButton.WBP_StyledButton_C.Construct
struct UWBP_StyledButton_C_Construct_Params
{
};

// Function WBP_StyledButton.WBP_StyledButton_C.Tick
struct UWBP_StyledButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StyledButton.WBP_StyledButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UWBP_StyledButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StyledButton.WBP_StyledButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StyledButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StyledButton.WBP_StyledButton_C.ExecuteUbergraph_WBP_StyledButton
struct UWBP_StyledButton_C_ExecuteUbergraph_WBP_StyledButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StyledButton.WBP_StyledButton_C.Clicked__DelegateSignature
struct UWBP_StyledButton_C_Clicked__DelegateSignature_Params
{
	int                                                Ident;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
