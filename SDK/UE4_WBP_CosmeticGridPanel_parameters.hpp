#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_CosmeticGridPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Update Equipped Class
struct UWBP_CosmeticGridPanel_C_Update_Equipped_Class_Params
{
	class UClass*                                      Cosmetic_Class;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.DispatchSelectionAttempt
struct UWBP_CosmeticGridPanel_C_DispatchSelectionAttempt_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_CosmeticGridPanelItem_C*                Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Update
struct UWBP_CosmeticGridPanel_C_Update_Params
{
	TArray<class UClass*>                              Cosmetics;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Set Num Slots
struct UWBP_CosmeticGridPanel_C_Set_Num_Slots_Params
{
	int                                                Desired_Num;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Remove Item Slot
struct UWBP_CosmeticGridPanel_C_Remove_Item_Slot_Params
{
};

// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Add Item Slot
struct UWBP_CosmeticGridPanel_C_Add_Item_Slot_Params
{
	class UWBP_CosmeticGridPanelItem_C*                Item_Widget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Locked Item Selected__DelegateSignature
struct UWBP_CosmeticGridPanel_C_Locked_Item_Selected__DelegateSignature_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C.Unlocked Item Selected__DelegateSignature
struct UWBP_CosmeticGridPanel_C_Unlocked_Item_Selected__DelegateSignature_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObjectInfo*                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
