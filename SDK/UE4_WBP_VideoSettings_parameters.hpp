#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VideoSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_VideoSettings.WBP_VideoSettings_C.Get_ResolutionBox_bIsEnabled_1
struct UWBP_VideoSettings_C_Get_ResolutionBox_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.On_ResolutionBox_GenerateWidget_1
struct UWBP_VideoSettings_C_On_ResolutionBox_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.Apply Settings
struct UWBP_VideoSettings_C_Apply_Settings_Params
{
	bool                                               Save;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.Construct
struct UWBP_VideoSettings_C_Construct_Params
{
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_36_ValueAdjusted__DelegateSignature
struct UWBP_VideoSettings_C_BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_36_ValueAdjusted__DelegateSignature_Params
{
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_41_ValueApplied__DelegateSignature
struct UWBP_VideoSettings_C_BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_41_ValueApplied__DelegateSignature_Params
{
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Value
struct UWBP_VideoSettings_C_FOV_Value_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.Reset
struct UWBP_VideoSettings_C_Reset_Params
{
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.Set Radio Option to Default
struct UWBP_VideoSettings_C_Set_Radio_Option_to_Default_Params
{
	class UWBP_RadioItem_C*                            Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UWBP_VideoSettings_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
struct UWBP_VideoSettings_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_VideoSettings.WBP_VideoSettings_C.ExecuteUbergraph_WBP_VideoSettings
struct UWBP_VideoSettings_C_ExecuteUbergraph_WBP_VideoSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
