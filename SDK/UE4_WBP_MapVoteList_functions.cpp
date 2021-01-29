// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MapVoteList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MapVoteList.WBP_MapVoteList_C.Get_TextBlock_0_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MapVoteList_C::Get_TextBlock_0_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MapVoteList.WBP_MapVoteList_C.Get_TextBlock_0_Text_1");

	UWBP_MapVoteList_C_Get_TextBlock_0_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MapVoteList.WBP_MapVoteList_C.UpdateWinningFlagOnWidgetBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapVoteOption                 WinningOption                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MapVoteList_C::UpdateWinningFlagOnWidgetBox(class UPanelWidget* self2, EMapVoteOption WinningOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MapVoteList.WBP_MapVoteList_C.UpdateWinningFlagOnWidgetBox");

	UWBP_MapVoteList_C_UpdateWinningFlagOnWidgetBox_Params params;
	params.self2 = self2;
	params.WinningOption = WinningOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MapVoteList.WBP_MapVoteList_C.UpdateWinningFlagOnWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMapVoteOption                 WinningOption                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MapVoteList_C::UpdateWinningFlagOnWidget(class UObject* Object, EMapVoteOption WinningOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MapVoteList.WBP_MapVoteList_C.UpdateWinningFlagOnWidget");

	UWBP_MapVoteList_C_UpdateWinningFlagOnWidget_Params params;
	params.Object = Object;
	params.WinningOption = WinningOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MapVoteList.WBP_MapVoteList_C.Get_VoteNextMapText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MapVoteList_C::Get_VoteNextMapText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MapVoteList.WBP_MapVoteList_C.Get_VoteNextMapText_Text_1");

	UWBP_MapVoteList_C_Get_VoteNextMapText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MapVoteList.WBP_MapVoteList_C.VoteForOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MapVote_C*          Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MapVoteList_C::VoteForOption(class UWBP_MapVote_C* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MapVoteList.WBP_MapVoteList_C.VoteForOption");

	UWBP_MapVoteList_C_VoteForOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MapVoteList.WBP_MapVoteList_C.BeginMapVote
// (BlueprintCallable, BlueprintEvent)

void UWBP_MapVoteList_C::BeginMapVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MapVoteList.WBP_MapVoteList_C.BeginMapVote");

	UWBP_MapVoteList_C_BeginMapVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MapVoteList.WBP_MapVoteList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MapVoteList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MapVoteList.WBP_MapVoteList_C.Construct");

	UWBP_MapVoteList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MapVoteList.WBP_MapVoteList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MapVoteList_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MapVoteList.WBP_MapVoteList_C.Tick");

	UWBP_MapVoteList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MapVoteList.WBP_MapVoteList_C.OnWinningVoteUpdated
// (BlueprintCallable, BlueprintEvent)

void UWBP_MapVoteList_C::OnWinningVoteUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MapVoteList.WBP_MapVoteList_C.OnWinningVoteUpdated");

	UWBP_MapVoteList_C_OnWinningVoteUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MapVoteList.WBP_MapVoteList_C.ExecuteUbergraph_WBP_MapVoteList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MapVoteList_C::ExecuteUbergraph_WBP_MapVoteList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MapVoteList.WBP_MapVoteList_C.ExecuteUbergraph_WBP_MapVoteList");

	UWBP_MapVoteList_C_ExecuteUbergraph_WBP_MapVoteList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
