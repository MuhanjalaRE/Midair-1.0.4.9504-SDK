// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_ScoreFeed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ScoreFeed.WBP_ScoreFeed_C.Add Score Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Score_Name                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Score_Value                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScoreFeed_C::Add_Score_Event(const struct FText& Score_Name, float Score_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeed.WBP_ScoreFeed_C.Add Score Event");

	UWBP_ScoreFeed_C_Add_Score_Event_Params params;
	params.Score_Name = Score_Name;
	params.Score_Value = Score_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScoreFeed.WBP_ScoreFeed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ScoreFeed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeed.WBP_ScoreFeed_C.Construct");

	UWBP_ScoreFeed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScoreFeed.WBP_ScoreFeed_C.ExecuteUbergraph_WBP_ScoreFeed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ScoreFeed_C::ExecuteUbergraph_WBP_ScoreFeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeed.WBP_ScoreFeed_C.ExecuteUbergraph_WBP_ScoreFeed");

	UWBP_ScoreFeed_C_ExecuteUbergraph_WBP_ScoreFeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
