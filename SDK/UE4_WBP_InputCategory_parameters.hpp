#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_InputCategory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_InputCategory.WBP_InputCategory_C.GetToolTipWidget
struct UWBP_InputCategory_C_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_InputCategory.WBP_InputCategory_C.ClearBinds
struct UWBP_InputCategory_C_ClearBinds_Params
{
};

// Function WBP_InputCategory.WBP_InputCategory_C.Add Bind
struct UWBP_InputCategory_C_Add_Bind_Params
{
	struct FMidairInputMapping                         Mapping;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputCategory.WBP_InputCategory_C.OnKeyBindAttempt
struct UWBP_InputCategory_C_OnKeyBindAttempt_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      NewKey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EMappingPriority                                   Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCategory.WBP_InputCategory_C.OnKeyClearAttempt
struct UWBP_InputCategory_C_OnKeyClearAttempt_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMappingPriority                                   Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCategory.WBP_InputCategory_C.OnKeyResetAttempt
struct UWBP_InputCategory_C_OnKeyResetAttempt_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMappingPriority                                   Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCategory.WBP_InputCategory_C.Construct
struct UWBP_InputCategory_C_Construct_Params
{
};

// Function WBP_InputCategory.WBP_InputCategory_C.Update Binding
struct UWBP_InputCategory_C_Update_Binding_Params
{
	struct FMidairInputMapping                         New_Mapping;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputCategory.WBP_InputCategory_C.BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
struct UWBP_InputCategory_C_BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature_Params
{
	class UExpandableArea*                             Area;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputCategory.WBP_InputCategory_C.OnMouseEnter
struct UWBP_InputCategory_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_InputCategory.WBP_InputCategory_C.ExecuteUbergraph_WBP_InputCategory
struct UWBP_InputCategory_C_ExecuteUbergraph_WBP_InputCategory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
