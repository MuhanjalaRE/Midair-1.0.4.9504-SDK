// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ModalMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ModalMenu.WBP_ModalMenu_C.HandleDirectNamedHotkey
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ModalMenu_C::HandleDirectNamedHotkey(const struct FString& Hotkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ModalMenu.WBP_ModalMenu_C.HandleDirectNamedHotkey");

	UWBP_ModalMenu_C_HandleDirectNamedHotkey_Params params;
	params.Hotkey = Hotkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ModalMenu.WBP_ModalMenu_C.HandleNamedHotkeyWithInt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ModalMenu_C::HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ModalMenu.WBP_ModalMenu_C.HandleNamedHotkeyWithInt");

	UWBP_ModalMenu_C_HandleNamedHotkeyWithInt_Params params;
	params.Hotkey = Hotkey;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ModalMenu.WBP_ModalMenu_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModalMenu_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ModalMenu.WBP_ModalMenu_C.Remove");

	UWBP_ModalMenu_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
