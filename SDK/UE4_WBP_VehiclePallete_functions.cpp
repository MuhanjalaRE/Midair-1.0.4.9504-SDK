// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehiclePallete_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VehiclePallete.WBP_VehiclePallete_C.HandleDirectNamedHotkey
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_VehiclePallete_C::HandleDirectNamedHotkey(const struct FString& Hotkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehiclePallete.WBP_VehiclePallete_C.HandleDirectNamedHotkey");

	UWBP_VehiclePallete_C_HandleDirectNamedHotkey_Params params;
	params.Hotkey = Hotkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehiclePallete.WBP_VehiclePallete_C.HandleNamedHotkeyWithInt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_VehiclePallete_C::HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehiclePallete.WBP_VehiclePallete_C.HandleNamedHotkeyWithInt");

	UWBP_VehiclePallete_C_HandleNamedHotkeyWithInt_Params params;
	params.Hotkey = Hotkey;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehiclePallete.WBP_VehiclePallete_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VehiclePallete_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehiclePallete.WBP_VehiclePallete_C.Construct");

	UWBP_VehiclePallete_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehiclePallete.WBP_VehiclePallete_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VehiclePallete_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehiclePallete.WBP_VehiclePallete_C.Destruct");

	UWBP_VehiclePallete_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehiclePallete.WBP_VehiclePallete_C.ExecuteUbergraph_WBP_VehiclePallete
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VehiclePallete_C::ExecuteUbergraph_WBP_VehiclePallete(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehiclePallete.WBP_VehiclePallete_C.ExecuteUbergraph_WBP_VehiclePallete");

	UWBP_VehiclePallete_C_ExecuteUbergraph_WBP_VehiclePallete_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
