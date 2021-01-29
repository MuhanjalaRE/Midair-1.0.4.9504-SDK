#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ControlSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ControlSettings.WBP_ControlSettings_C.Find Category Widget by Name
struct UWBP_ControlSettings_C_Find_Category_Widget_by_Name_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_InputCategory_C*                        Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.Reset
struct UWBP_ControlSettings_C_Reset_Params
{
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.Save
struct UWBP_ControlSettings_C_Save_Params
{
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.Load
struct UWBP_ControlSettings_C_Load_Params
{
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.Construct
struct UWBP_ControlSettings_C_Construct_Params
{
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.OnAttemptResolve
struct UWBP_ControlSettings_C_OnAttemptResolve_Params
{
	EMappingConflictResolution                         Resolution;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__VehicleMouseSensitivity_K2Node_ComponentBoundEvent_84_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_ControlSettings_C_BndEvt__VehicleMouseSensitivity_K2Node_ComponentBoundEvent_84_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__VehicleMouseSensitivity_K2Node_ComponentBoundEvent_97_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UWBP_ControlSettings_C_BndEvt__VehicleMouseSensitivity_K2Node_ComponentBoundEvent_97_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_110_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_ControlSettings_C_BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_110_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_125_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UWBP_ControlSettings_C_BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_125_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_188_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_ControlSettings_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_188_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_58_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_ControlSettings_C_BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_58_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UWBP_ControlSettings_C_BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_ControlSettings_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.BindingChanged
struct UWBP_ControlSettings_C_BindingChanged_Params
{
	struct FName                                       CategoryName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMidairInputMapping                         NewMapping;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.OnBindsConflict_Event_1
struct UWBP_ControlSettings_C_OnBindsConflict_Event_1_Params
{
	TArray<struct FName>                               ConflictingBindNames;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FInputActionKeyMapping                      Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__ToggleSkate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_ControlSettings_C_BndEvt__ToggleSkate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ControlSettings.WBP_ControlSettings_C.ExecuteUbergraph_WBP_ControlSettings
struct UWBP_ControlSettings_C_ExecuteUbergraph_WBP_ControlSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
