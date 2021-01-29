#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GeneralSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetVisibility_1
struct UWBP_GeneralSettings_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetBrush_1
struct UWBP_GeneralSettings_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.On_CrosshairType_GenerateWidget_1
struct UWBP_GeneralSettings_C_On_CrosshairType_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Get_SpectatorStickOnePerson_ToolTipWidget
struct UWBP_GeneralSettings_C_Get_SpectatorStickOnePerson_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Apply Settings
struct UWBP_GeneralSettings_C_Apply_Settings_Params
{
	bool                                               Save;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__CrosshairType_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
struct UWBP_GeneralSettings_C_BndEvt__CrosshairType_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Construct
struct UWBP_GeneralSettings_C_Construct_Params
{
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
struct UWBP_GeneralSettings_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UWBP_GeneralSettings_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Reset
struct UWBP_GeneralSettings_C_Reset_Params
{
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__CrosshairColor_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
struct UWBP_GeneralSettings_C_BndEvt__CrosshairColor_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.ExecuteUbergraph_WBP_GeneralSettings
struct UWBP_GeneralSettings_C_ExecuteUbergraph_WBP_GeneralSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
