#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ModalMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_ModalMenu.WBP_ModalMenu_C.HandleDirectNamedHotkey
struct UWBP_ModalMenu_C_HandleDirectNamedHotkey_Params
{
	struct FString                                     Hotkey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ModalMenu.WBP_ModalMenu_C.HandleNamedHotkeyWithInt
struct UWBP_ModalMenu_C_HandleNamedHotkeyWithInt_Params
{
	struct FString                                     Hotkey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_ModalMenu.WBP_ModalMenu_C.Remove
struct UWBP_ModalMenu_C_Remove_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
