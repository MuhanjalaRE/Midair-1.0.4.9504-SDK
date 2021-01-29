// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_Leaderboard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Leaderboard.WBP_Leaderboard_C.Set Selected Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LeaderBoardRow_C*   Player_Row                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboard_C::Set_Selected_Player(class UWBP_LeaderBoardRow_C* Player_Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.Set Selected Player");

	UWBP_Leaderboard_C_Set_Selected_Player_Params params;
	params.Player_Row = Player_Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.SetLeaderboardSeasonAndGameMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMALeaderboardRequest> LeaderBoardRequestType         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboard_C::SetLeaderboardSeasonAndGameMode(const struct FName& GameMode, TEnumAsByte<EMALeaderboardRequest> LeaderBoardRequestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.SetLeaderboardSeasonAndGameMode");

	UWBP_Leaderboard_C_SetLeaderboardSeasonAndGameMode_Params params;
	params.GameMode = GameMode;
	params.LeaderBoardRequestType = LeaderBoardRequestType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Leaderboard_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.GetVisibility_1");

	UWBP_Leaderboard_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.Validate Entry Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Entry_Count                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboard_C::Validate_Entry_Index(int Entry_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.Validate Entry Index");

	UWBP_Leaderboard_C_Validate_Entry_Index_Params params;
	params.Entry_Count = Entry_Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.OnFail_5D0BD61349684A77B1F14281DB4BC02B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamLeaderBoard> ScoreList                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            EntryCount                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboard_C::OnFail_5D0BD61349684A77B1F14281DB4BC02B(TArray<struct FSteamLeaderBoard> ScoreList, int EntryCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.OnFail_5D0BD61349684A77B1F14281DB4BC02B");

	UWBP_Leaderboard_C_OnFail_5D0BD61349684A77B1F14281DB4BC02B_Params params;
	params.ScoreList = ScoreList;
	params.EntryCount = EntryCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.OnSuccess_5D0BD61349684A77B1F14281DB4BC02B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamLeaderBoard> ScoreList                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            EntryCount                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboard_C::OnSuccess_5D0BD61349684A77B1F14281DB4BC02B(TArray<struct FSteamLeaderBoard> ScoreList, int EntryCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.OnSuccess_5D0BD61349684A77B1F14281DB4BC02B");

	UWBP_Leaderboard_C_OnSuccess_5D0BD61349684A77B1F14281DB4BC02B_Params params;
	params.ScoreList = ScoreList;
	params.EntryCount = EntryCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.Populate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMALeaderboardRequest> LeaderBoardRequestType         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboard_C::Populate(const struct FName& GameMode, TEnumAsByte<EMALeaderboardRequest> LeaderBoardRequestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.Populate");

	UWBP_Leaderboard_C_Populate_Params params;
	params.GameMode = GameMode;
	params.LeaderBoardRequestType = LeaderBoardRequestType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.PreConstruct");

	UWBP_Leaderboard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Leaderboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.Construct");

	UWBP_Leaderboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboard_C::BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature");

	UWBP_Leaderboard_C_BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_51_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboard_C::BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_51_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_51_OnUserScrolledEvent__DelegateSignature");

	UWBP_Leaderboard_C_BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_51_OnUserScrolledEvent__DelegateSignature_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.Cleanup Loop
// (BlueprintCallable, BlueprintEvent)

void UWBP_Leaderboard_C::Cleanup_Loop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.Cleanup Loop");

	UWBP_Leaderboard_C_Cleanup_Loop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Leaderboard.WBP_Leaderboard_C.ExecuteUbergraph_WBP_Leaderboard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Leaderboard_C::ExecuteUbergraph_WBP_Leaderboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Leaderboard.WBP_Leaderboard_C.ExecuteUbergraph_WBP_Leaderboard");

	UWBP_Leaderboard_C_ExecuteUbergraph_WBP_Leaderboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
