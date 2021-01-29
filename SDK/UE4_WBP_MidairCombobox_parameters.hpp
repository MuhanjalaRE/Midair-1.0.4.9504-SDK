#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MidairCombobox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.ChildSelected
struct UWBP_MidairCombobox_C_ChildSelected_Params
{
	int                                                Ident;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.RemoveChildAt
struct UWBP_MidairCombobox_C_RemoveChildAt_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.Open
struct UWBP_MidairCombobox_C_Open_Params
{
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.CloseAndClear
struct UWBP_MidairCombobox_C_CloseAndClear_Params
{
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.SetOptions
struct UWBP_MidairCombobox_C_SetOptions_Params
{
	TArray<struct FString>                             Options;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.RemoveChild
struct UWBP_MidairCombobox_C_RemoveChild_Params
{
	class UWidget*                                     Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.AddChild
struct UWBP_MidairCombobox_C_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVerticalBoxSlot*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.OptionSelected__DelegateSignature
struct UWBP_MidairCombobox_C_OptionSelected__DelegateSignature_Params
{
	int                                                Ident;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
