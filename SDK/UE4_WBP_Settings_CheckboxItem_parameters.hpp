#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Settings_CheckboxItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.GetIsChecked
struct UWBP_Settings_CheckboxItem_C_GetIsChecked_Params
{
	bool                                               IsChecked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.SetValueFromBool
struct UWBP_Settings_CheckboxItem_C_SetValueFromBool_Params
{
	bool                                               InChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.GetText_1
struct UWBP_Settings_CheckboxItem_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.BndEvt__CheckBox_123_K2Node_ComponentBoundEvent_134_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_Settings_CheckboxItem_C_BndEvt__CheckBox_123_K2Node_ComponentBoundEvent_134_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.PreConstruct
struct UWBP_Settings_CheckboxItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C.ExecuteUbergraph_WBP_Settings_CheckboxItem
struct UWBP_Settings_CheckboxItem_C_ExecuteUbergraph_WBP_Settings_CheckboxItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
