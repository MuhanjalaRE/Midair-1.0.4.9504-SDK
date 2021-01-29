// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameStatus_Arena2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_PlayerIsTeamB_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_GameStatus_Arena2_C::Get_PlayerIsTeamB_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_PlayerIsTeamB_Visibility_1");

	UWBP_GameStatus_Arena2_C_Get_PlayerIsTeamB_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_PlayerIsTeamA_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_GameStatus_Arena2_C::Get_PlayerIsTeamA_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_PlayerIsTeamA_Visibility_1");

	UWBP_GameStatus_Arena2_C_Get_PlayerIsTeamA_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get Team Status Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UWBP_GameStatus_Arena2_C::Get_Team_Status_Text(unsigned char TeamID, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get Team Status Text");

	UWBP_GameStatus_Arena2_C_Get_Team_Status_Text_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_BTeamScoreBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_GameStatus_Arena2_C::Get_BTeamScoreBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_BTeamScoreBar_Percent_1");

	UWBP_GameStatus_Arena2_C_Get_BTeamScoreBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_ATeamScoreBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_GameStatus_Arena2_C::Get_ATeamScoreBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_ATeamScoreBar_Percent_1");

	UWBP_GameStatus_Arena2_C_Get_ATeamScoreBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_TimeLeftText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_GameStatus_Arena2_C::Get_TimeLeftText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_TimeLeftText_Text_1");

	UWBP_GameStatus_Arena2_C_Get_TimeLeftText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_BTeamScoreText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_GameStatus_Arena2_C::Get_BTeamScoreText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_BTeamScoreText_Text_1");

	UWBP_GameStatus_Arena2_C_Get_BTeamScoreText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_ATeamScoreText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_GameStatus_Arena2_C::Get_ATeamScoreText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get_ATeamScoreText_Text_1");

	UWBP_GameStatus_Arena2_C_Get_ATeamScoreText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get Team B Status Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_GameStatus_Arena2_C::Get_Team_B_Status_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get Team B Status Text");

	UWBP_GameStatus_Arena2_C_Get_Team_B_Status_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get Team A Status Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_GameStatus_Arena2_C::Get_Team_A_Status_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Arena2.WBP_GameStatus_Arena2_C.Get Team A Status Text");

	UWBP_GameStatus_Arena2_C_Get_Team_A_Status_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
