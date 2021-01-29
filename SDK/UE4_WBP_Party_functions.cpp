// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Party_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Party.WBP_Party_C.Get_PartyPlayer1_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Party_C::Get_PartyPlayer1_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Party.WBP_Party_C.Get_PartyPlayer1_Visibility_1");

	UWBP_Party_C_Get_PartyPlayer1_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Party.WBP_Party_C.Get_PartyPlayer2_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Party_C::Get_PartyPlayer2_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Party.WBP_Party_C.Get_PartyPlayer2_Visibility_1");

	UWBP_Party_C_Get_PartyPlayer2_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Party.WBP_Party_C.Get_PartyPlayer3_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Party_C::Get_PartyPlayer3_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Party.WBP_Party_C.Get_PartyPlayer3_Visibility_1");

	UWBP_Party_C_Get_PartyPlayer3_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Party.WBP_Party_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Party_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Party.WBP_Party_C.Construct");

	UWBP_Party_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Party.WBP_Party_C.ExecuteUbergraph_WBP_Party
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Party_C::ExecuteUbergraph_WBP_Party(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Party.WBP_Party_C.ExecuteUbergraph_WBP_Party");

	UWBP_Party_C_ExecuteUbergraph_WBP_Party_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
