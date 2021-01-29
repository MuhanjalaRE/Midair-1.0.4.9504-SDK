#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_CosmeticPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.Get_AcceptButton_Visibility_1
struct UWBP_CosmeticPanel_C_Get_AcceptButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.Update Grid
struct UWBP_CosmeticPanel_C_Update_Grid_Params
{
	TArray<class UClass*>                              Cosmetics;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_32_Unlocked Item Selected__DelegateSignature
struct UWBP_CosmeticPanel_C_BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_32_Unlocked_Item_Selected__DelegateSignature_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_37_Locked Item Selected__DelegateSignature
struct UWBP_CosmeticPanel_C_BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_37_Locked_Item_Selected__DelegateSignature_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_60_ButtonClicked__DelegateSignature
struct UWBP_CosmeticPanel_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_60_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticPanel.WBP_CosmeticPanel_C.ExecuteUbergraph_WBP_CosmeticPanel
struct UWBP_CosmeticPanel_C_ExecuteUbergraph_WBP_CosmeticPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
