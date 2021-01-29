#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_InputBinding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_InputBinding.WBP_InputBinding_C.GetToolTipWidget
struct UWBP_InputBinding_C_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_InputBinding.WBP_InputBinding_C.Construct
struct UWBP_InputBinding_C_Construct_Params
{
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_0_TryClearKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_0_TryClearKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_8_TryBindKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_8_TryBindKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      NewBind;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_14_TryResetKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_14_TryResetKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_18_TryClearKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_18_TryClearKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_29_TryBindKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_29_TryBindKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      NewBind;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_38_TryResetKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_38_TryResetKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputBinding.WBP_InputBinding_C.Update
struct UWBP_InputBinding_C_Update_Params
{
	struct FMidairInputMapping                         New_Mapping;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputBinding.WBP_InputBinding_C.ExecuteUbergraph_WBP_InputBinding
struct UWBP_InputBinding_C_ExecuteUbergraph_WBP_InputBinding_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputBinding.WBP_InputBinding_C.TryResetKey__DelegateSignature
struct UWBP_InputBinding_C_TryResetKey__DelegateSignature_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMappingPriority                                   Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputBinding.WBP_InputBinding_C.TryBindKey__DelegateSignature
struct UWBP_InputBinding_C_TryBindKey__DelegateSignature_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      NewKey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EMappingPriority                                   Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputBinding.WBP_InputBinding_C.TryClearKey__DelegateSignature
struct UWBP_InputBinding_C_TryClearKey__DelegateSignature_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMappingPriority                                   Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
