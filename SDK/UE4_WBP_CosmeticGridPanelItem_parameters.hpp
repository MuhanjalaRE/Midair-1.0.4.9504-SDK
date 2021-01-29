#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_CosmeticGridPanelItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.GetVisibility_1
struct UWBP_CosmeticGridPanelItem_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.SetDisplayMode
struct UWBP_CosmeticGridPanelItem_C_SetDisplayMode_Params
{
	bool                                               bShowMain;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.Setup For Cosmetic
struct UWBP_CosmeticGridPanelItem_C_Setup_For_Cosmetic_Params
{
	class UClass*                                      In_Cosmetic;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_22_ButtonClicked__DelegateSignature
struct UWBP_CosmeticGridPanelItem_C_BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_22_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.PreConstruct
struct UWBP_CosmeticGridPanelItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.SetSelected
struct UWBP_CosmeticGridPanelItem_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.Set Equipped
struct UWBP_CosmeticGridPanelItem_C_Set_Equipped_Params
{
	bool                                               Equipped;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.ExecuteUbergraph_WBP_CosmeticGridPanelItem
struct UWBP_CosmeticGridPanelItem_C_ExecuteUbergraph_WBP_CosmeticGridPanelItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C.Selected__DelegateSignature
struct UWBP_CosmeticGridPanelItem_C_Selected__DelegateSignature_Params
{
	class UClass*                                      Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_CosmeticGridPanelItem_C*                Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
