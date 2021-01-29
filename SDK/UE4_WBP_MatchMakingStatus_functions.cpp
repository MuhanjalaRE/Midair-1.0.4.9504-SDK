// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_MatchMakingStatus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.RefreshMatchType
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MatchMakingStatus_C::RefreshMatchType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.RefreshMatchType");

	UWBP_MatchMakingStatus_C_RefreshMatchType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.DeleteMatchType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMAMatchType>      MatchType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchMakingStatus_C::DeleteMatchType(TEnumAsByte<EMAMatchType> MatchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.DeleteMatchType");

	UWBP_MatchMakingStatus_C_DeleteMatchType_Params params;
	params.MatchType = MatchType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.AddMatchType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMAMatchType>      MatchType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchMakingStatus_C::AddMatchType(TEnumAsByte<EMAMatchType> MatchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.AddMatchType");

	UWBP_MatchMakingStatus_C_AddMatchType_Params params;
	params.MatchType = MatchType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.UpdateMatchType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMAMatchType>      MatchType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchMakingStatus_C::UpdateMatchType(TEnumAsByte<EMAMatchType> MatchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.UpdateMatchType");

	UWBP_MatchMakingStatus_C_UpdateMatchType_Params params;
	params.MatchType = MatchType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.GetVisibility_3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MatchMakingStatus_C::GetVisibility_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.GetVisibility_3");

	UWBP_MatchMakingStatus_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MatchMakingStatus_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.GetVisibility_2");

	UWBP_MatchMakingStatus_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_MatchMakingStatus_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.GetVisibility_1");

	UWBP_MatchMakingStatus_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.Get_TextLobbyStatus_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MatchMakingStatus_C::Get_TextLobbyStatus_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.Get_TextLobbyStatus_Text_1");

	UWBP_MatchMakingStatus_C_Get_TextLobbyStatus_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MatchMakingStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.Construct");

	UWBP_MatchMakingStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.OnLobbyChatUpdate_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMAMatchType>      MatchType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMAChatMemberStateChange> ChatMemberStateChange          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerInfo             PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MatchMakingStatus_C::OnLobbyChatUpdate_Event_1(TEnumAsByte<EMAMatchType> MatchType, TEnumAsByte<EMAChatMemberStateChange> ChatMemberStateChange, const struct FPlayerInfo& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.OnLobbyChatUpdate_Event_1");

	UWBP_MatchMakingStatus_C_OnLobbyChatUpdate_Event_1_Params params;
	params.MatchType = MatchType;
	params.ChatMemberStateChange = ChatMemberStateChange;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchMakingStatus_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.Tick");

	UWBP_MatchMakingStatus_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.ExecuteUbergraph_WBP_MatchMakingStatus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchMakingStatus_C::ExecuteUbergraph_WBP_MatchMakingStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.ExecuteUbergraph_WBP_MatchMakingStatus");

	UWBP_MatchMakingStatus_C_ExecuteUbergraph_WBP_MatchMakingStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
