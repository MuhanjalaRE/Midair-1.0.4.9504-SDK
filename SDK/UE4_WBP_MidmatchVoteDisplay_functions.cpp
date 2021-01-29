// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MidmatchVoteDisplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Get_VoteOptionNo_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MidmatchVoteDisplay_C::Get_VoteOptionNo_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Get_VoteOptionNo_Text_1");

	UWBP_MidmatchVoteDisplay_C_Get_VoteOptionNo_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Get_VoteOptionYes_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MidmatchVoteDisplay_C::Get_VoteOptionYes_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Get_VoteOptionYes_Text_1");

	UWBP_MidmatchVoteDisplay_C_Get_VoteOptionYes_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Get_VoteDisplayNameText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MidmatchVoteDisplay_C::Get_VoteDisplayNameText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Get_VoteDisplayNameText_Text_1");

	UWBP_MidmatchVoteDisplay_C_Get_VoteDisplayNameText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MidmatchVoteDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Construct");

	UWBP_MidmatchVoteDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MidmatchVoteDisplay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.Tick");

	UWBP_MidmatchVoteDisplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.ConditionallyContinueAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_MidmatchVoteDisplay_C::ConditionallyContinueAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.ConditionallyContinueAnimation");

	UWBP_MidmatchVoteDisplay_C_ConditionallyContinueAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.ExecuteUbergraph_WBP_MidmatchVoteDisplay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MidmatchVoteDisplay_C::ExecuteUbergraph_WBP_MidmatchVoteDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MidmatchVoteDisplay.WBP_MidmatchVoteDisplay_C.ExecuteUbergraph_WBP_MidmatchVoteDisplay");

	UWBP_MidmatchVoteDisplay_C_ExecuteUbergraph_WBP_MidmatchVoteDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
