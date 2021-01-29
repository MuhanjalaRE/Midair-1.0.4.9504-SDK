// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerLoadout_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.GetVisibility_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_PlayerLoadout_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.GetVisibility_2");

	UWBP_PlayerLoadout_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Get_Backpack_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerLoadout_C::Get_Backpack_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Get_Backpack_Text_1");

	UWBP_PlayerLoadout_C_Get_Backpack_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Get_DeployableClass_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerLoadout_C::Get_DeployableClass_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Get_DeployableClass_Text_1");

	UWBP_PlayerLoadout_C_Get_DeployableClass_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerLoadout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Construct");

	UWBP_PlayerLoadout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Custom Tick
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerLoadout_C::Custom_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Custom Tick");

	UWBP_PlayerLoadout_C_Custom_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.ClearCharges
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerLoadout_C::ClearCharges()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.ClearCharges");

	UWBP_PlayerLoadout_C_ClearCharges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.ExecuteUbergraph_WBP_PlayerLoadout
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerLoadout_C::ExecuteUbergraph_WBP_PlayerLoadout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.ExecuteUbergraph_WBP_PlayerLoadout");

	UWBP_PlayerLoadout_C_ExecuteUbergraph_WBP_PlayerLoadout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
