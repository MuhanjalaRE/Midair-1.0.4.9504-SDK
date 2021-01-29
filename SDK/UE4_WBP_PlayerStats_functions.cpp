// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerStats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerStats.WBP_PlayerStats_C.Update Stats
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStats_C::Update_Stats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStats.WBP_PlayerStats_C.Update Stats");

	UWBP_PlayerStats_C_Update_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStats.WBP_PlayerStats_C.OnFail_31A2451E4E1D30D64C94DD86C7CC85D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerStats            PlayerStats                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerStats_C::OnFail_31A2451E4E1D30D64C94DD86C7CC85D5(const struct FPlayerStats& PlayerStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStats.WBP_PlayerStats_C.OnFail_31A2451E4E1D30D64C94DD86C7CC85D5");

	UWBP_PlayerStats_C_OnFail_31A2451E4E1D30D64C94DD86C7CC85D5_Params params;
	params.PlayerStats = PlayerStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStats.WBP_PlayerStats_C.OnSuccess_31A2451E4E1D30D64C94DD86C7CC85D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerStats            PlayerStats                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerStats_C::OnSuccess_31A2451E4E1D30D64C94DD86C7CC85D5(const struct FPlayerStats& PlayerStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStats.WBP_PlayerStats_C.OnSuccess_31A2451E4E1D30D64C94DD86C7CC85D5");

	UWBP_PlayerStats_C_OnSuccess_31A2451E4E1D30D64C94DD86C7CC85D5_Params params;
	params.PlayerStats = PlayerStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStats.WBP_PlayerStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStats.WBP_PlayerStats_C.Construct");

	UWBP_PlayerStats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStats.WBP_PlayerStats_C.OnGetCurrentUserStats
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStats_C::OnGetCurrentUserStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStats.WBP_PlayerStats_C.OnGetCurrentUserStats");

	UWBP_PlayerStats_C_OnGetCurrentUserStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStats.WBP_PlayerStats_C.ExecuteUbergraph_WBP_PlayerStats
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStats_C::ExecuteUbergraph_WBP_PlayerStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStats.WBP_PlayerStats_C.ExecuteUbergraph_WBP_PlayerStats");

	UWBP_PlayerStats_C_ExecuteUbergraph_WBP_PlayerStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
