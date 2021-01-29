// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ScoreboardList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ScoreboardList.WBP_ScoreboardList_C.Get_Status_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_ScoreboardList_C::Get_Status_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreboardList.WBP_ScoreboardList_C.Get_Status_Text_1");

	UWBP_ScoreboardList_C_Get_Status_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ScoreboardList.WBP_ScoreboardList_C.UpdateVBoxWithPlayers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AMAPlayerState*>  Players                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_ScoreboardList_C::UpdateVBoxWithPlayers(TArray<class AMAPlayerState*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreboardList.WBP_ScoreboardList_C.UpdateVBoxWithPlayers");

	UWBP_ScoreboardList_C_UpdateVBoxWithPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function WBP_ScoreboardList.WBP_ScoreboardList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ScoreboardList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreboardList.WBP_ScoreboardList_C.Construct");

	UWBP_ScoreboardList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScoreboardList.WBP_ScoreboardList_C.Slow Tick
// (BlueprintCallable, BlueprintEvent)

void UWBP_ScoreboardList_C::Slow_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreboardList.WBP_ScoreboardList_C.Slow Tick");

	UWBP_ScoreboardList_C_Slow_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScoreboardList.WBP_ScoreboardList_C.ExecuteUbergraph_WBP_ScoreboardList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScoreboardList_C::ExecuteUbergraph_WBP_ScoreboardList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreboardList.WBP_ScoreboardList_C.ExecuteUbergraph_WBP_ScoreboardList");

	UWBP_ScoreboardList_C_ExecuteUbergraph_WBP_ScoreboardList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
