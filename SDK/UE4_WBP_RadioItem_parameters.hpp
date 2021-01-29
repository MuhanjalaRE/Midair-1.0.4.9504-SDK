#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_RadioItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_RadioItem.WBP_RadioItem_C.GetSelectedValue
struct UWBP_RadioItem_C_GetSelectedValue_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadioItem.WBP_RadioItem_C.SelectLiteralValueIfPossible
struct UWBP_RadioItem_C_SelectLiteralValueIfPossible_Params
{
	float                                              LiteralValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadioItem.WBP_RadioItem_C.Option Selected
struct UWBP_RadioItem_C_Option_Selected_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadioItem.WBP_RadioItem_C.PreConstruct
struct UWBP_RadioItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadioItem.WBP_RadioItem_C.ExecuteUbergraph_WBP_RadioItem
struct UWBP_RadioItem_C_ExecuteUbergraph_WBP_RadioItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadioItem.WBP_RadioItem_C.ValueApplied__DelegateSignature
struct UWBP_RadioItem_C_ValueApplied__DelegateSignature_Params
{
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
