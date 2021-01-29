// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerStatUnit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.GetTotal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerStatUnit_C::GetTotal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.GetTotal");

	UWBP_PlayerStatUnit_C_GetTotal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.GetAverage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerStatUnit_C::GetAverage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.GetAverage");

	UWBP_PlayerStatUnit_C_GetAverage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.GetBest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerStatUnit_C::GetBest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.GetBest");

	UWBP_PlayerStatUnit_C_GetBest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatUnit_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.PreConstruct");

	UWBP_PlayerStatUnit_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.ExecuteUbergraph_WBP_PlayerStatUnit
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatUnit_C::ExecuteUbergraph_WBP_PlayerStatUnit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatUnit.WBP_PlayerStatUnit_C.ExecuteUbergraph_WBP_PlayerStatUnit");

	UWBP_PlayerStatUnit_C_ExecuteUbergraph_WBP_PlayerStatUnit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
