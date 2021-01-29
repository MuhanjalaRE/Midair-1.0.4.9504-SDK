#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LoadoutPackConfiguration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.GetLockedClass
struct UWBP_LoadoutPackConfiguration_C_GetLockedClass_Params
{
	class UClass*                                      MostRelevantLockedClass;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PostGeneratePrimaries
struct UWBP_LoadoutPackConfiguration_C_PostGeneratePrimaries_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PostGenerateSecondaries
struct UWBP_LoadoutPackConfiguration_C_PostGenerateSecondaries_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.NotifyPrimaryChange
struct UWBP_LoadoutPackConfiguration_C_NotifyPrimaryChange_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.NotifySecondaryChange
struct UWBP_LoadoutPackConfiguration_C_NotifySecondaryChange_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CheckPackSlot
struct UWBP_LoadoutPackConfiguration_C_CheckPackSlot_Params
{
	class UWBP_LoadoutsPackSlot_C*                     PackSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CheckAugmentSlot
struct UWBP_LoadoutPackConfiguration_C_CheckAugmentSlot_Params
{
	class UWBP_Loadouts_SimpleListItem_C*              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexAt;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.GetMostRelevantError
struct UWBP_LoadoutPackConfiguration_C_GetMostRelevantError_Params
{
	struct FText                                       Error_Text;                                               // (Parm, OutParm)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Hacky Get Packs
struct UWBP_LoadoutPackConfiguration_C_Hacky_Get_Packs_Params
{
	TArray<class UClass*>                              Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CosmeticSelected
struct UWBP_LoadoutPackConfiguration_C_CosmeticSelected_Params
{
	class UClass*                                      Cosmetic;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Update
struct UWBP_LoadoutPackConfiguration_C_Update_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Pack Clicked
struct UWBP_LoadoutPackConfiguration_C_Pack_Clicked_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Primary Augment Clicked
struct UWBP_LoadoutPackConfiguration_C_Primary_Augment_Clicked_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Secondary Augment Clicked
struct UWBP_LoadoutPackConfiguration_C_Secondary_Augment_Clicked_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Regenerate Augs
struct UWBP_LoadoutPackConfiguration_C_Regenerate_Augs_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Check Secondaries for error
struct UWBP_LoadoutPackConfiguration_C_Check_Secondaries_for_error_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Jump To Object
struct UWBP_LoadoutPackConfiguration_C_Jump_To_Object_Params
{
	class UClass*                                      Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Confirm Selection
struct UWBP_LoadoutPackConfiguration_C_Confirm_Selection_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.ExecuteUbergraph_WBP_LoadoutPackConfiguration
struct UWBP_LoadoutPackConfiguration_C_ExecuteUbergraph_WBP_LoadoutPackConfiguration_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PackEquipped__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_PackEquipped__DelegateSignature_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.JumpToObject__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_JumpToObject__DelegateSignature_Params
{
	class UClass*                                      Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.InvalidAugmentToast__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_InvalidAugmentToast__DelegateSignature_Params
{
	struct FText                                       Error_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdateSecondaryAugment__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_UpdateSecondaryAugment__DelegateSignature_Params
{
	class UClass*                                      Augment;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Suffix_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Error_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.DismissToast__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_DismissToast__DelegateSignature_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.InvalidPackToast__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_InvalidPackToast__DelegateSignature_Params
{
	struct FText                                       Error_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdatePack__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_UpdatePack__DelegateSignature_Params
{
	class UClass*                                      New_Pack;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Suffix_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdatePrimaryAugment__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_UpdatePrimaryAugment__DelegateSignature_Params
{
	class UClass*                                      Augment;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Suffix_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Error_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
