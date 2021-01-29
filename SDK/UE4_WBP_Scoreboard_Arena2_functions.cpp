// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Scoreboard_Arena2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Scoreboard_Arena2.WBP_Scoreboard_Arena2_C.InitCustomPinnedStats
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Scoreboard_Arena2_C::InitCustomPinnedStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_Arena2.WBP_Scoreboard_Arena2_C.InitCustomPinnedStats");

	UWBP_Scoreboard_Arena2_C_InitCustomPinnedStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Scoreboard_Arena2.WBP_Scoreboard_Arena2_C.UpdatePlayerStatBox
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Scoreboard_Arena2_C::UpdatePlayerStatBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_Arena2.WBP_Scoreboard_Arena2_C.UpdatePlayerStatBox");

	UWBP_Scoreboard_Arena2_C_UpdatePlayerStatBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Scoreboard_Arena2.WBP_Scoreboard_Arena2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Scoreboard_Arena2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_Arena2.WBP_Scoreboard_Arena2_C.Construct");

	UWBP_Scoreboard_Arena2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Scoreboard_Arena2.WBP_Scoreboard_Arena2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Scoreboard_Arena2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_Arena2.WBP_Scoreboard_Arena2_C.Tick");

	UWBP_Scoreboard_Arena2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Scoreboard_Arena2.WBP_Scoreboard_Arena2_C.ExecuteUbergraph_WBP_Scoreboard_Arena2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Scoreboard_Arena2_C::ExecuteUbergraph_WBP_Scoreboard_Arena2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_Arena2.WBP_Scoreboard_Arena2_C.ExecuteUbergraph_WBP_Scoreboard_Arena2");

	UWBP_Scoreboard_Arena2_C_ExecuteUbergraph_WBP_Scoreboard_Arena2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
