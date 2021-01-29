#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LoadoutWeaponConfiguration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.GetLockedClass
struct UWBP_LoadoutWeaponConfiguration_C_GetLockedClass_Params
{
	class UClass*                                      Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.AddNoneWeapon
struct UWBP_LoadoutWeaponConfiguration_C_AddNoneWeapon_Params
{
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.CheckWeaponSlot
struct UWBP_LoadoutWeaponConfiguration_C_CheckWeaponSlot_Params
{
	class UWBP_Loadouts_ItemSlot_C*                    InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.GetMostRelevantError
struct UWBP_LoadoutWeaponConfiguration_C_GetMostRelevantError_Params
{
	struct FText                                       Error_Text;                                               // (Parm, OutParm)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.HackyGetAllWeapons
struct UWBP_LoadoutWeaponConfiguration_C_HackyGetAllWeapons_Params
{
	TArray<class UClass*>                              Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Weapon Selected
struct UWBP_LoadoutWeaponConfiguration_C_Weapon_Selected_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.OnNewButtonSelected
struct UWBP_LoadoutWeaponConfiguration_C_OnNewButtonSelected_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Update Weapon List
struct UWBP_LoadoutWeaponConfiguration_C_Update_Weapon_List_Params
{
	int                                                Weapon_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Jump to Weapon
struct UWBP_LoadoutWeaponConfiguration_C_Jump_to_Weapon_Params
{
	class UClass*                                      Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Confirm Selection
struct UWBP_LoadoutWeaponConfiguration_C_Confirm_Selection_Params
{
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.CosmeticSelected
struct UWBP_LoadoutWeaponConfiguration_C_CosmeticSelected_Params
{
	class UClass*                                      Cosmetic;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.ExecuteUbergraph_WBP_LoadoutWeaponConfiguration
struct UWBP_LoadoutWeaponConfiguration_C_ExecuteUbergraph_WBP_LoadoutWeaponConfiguration_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Jump to Object__DelegateSignature
struct UWBP_LoadoutWeaponConfiguration_C_Jump_to_Object__DelegateSignature_Params
{
	class UClass*                                      Object_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.ConfiguratorApplied__DelegateSignature
struct UWBP_LoadoutWeaponConfiguration_C_ConfiguratorApplied__DelegateSignature_Params
{
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.DismissToast__DelegateSignature
struct UWBP_LoadoutWeaponConfiguration_C_DismissToast__DelegateSignature_Params
{
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.InvalidWeaponToast__DelegateSignature
struct UWBP_LoadoutWeaponConfiguration_C_InvalidWeaponToast__DelegateSignature_Params
{
	struct FText                                       Error_Message;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.UpdateWeaponInfo__DelegateSignature
struct UWBP_LoadoutWeaponConfiguration_C_UpdateWeaponInfo__DelegateSignature_Params
{
	class UClass*                                      Object_Info_Class;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Skin_Configuration;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name_Suffix;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
