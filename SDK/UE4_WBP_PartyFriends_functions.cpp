// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PartyFriends_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PartyFriends.WBP_PartyFriends_C.RefreshFriendsList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamFriendInfo> InFriendsList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_PartyFriends_C::RefreshFriendsList(TArray<struct FSteamFriendInfo>* InFriendsList)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyFriends.WBP_PartyFriends_C.RefreshFriendsList");

	UWBP_PartyFriends_C_RefreshFriendsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InFriendsList != nullptr)
		*InFriendsList = params.InFriendsList;
}


// Function WBP_PartyFriends.WBP_PartyFriends_C.OnFailure_D0FE5EAE416AC33432519DA20EC04BD6
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamFriendInfo> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_PartyFriends_C::OnFailure_D0FE5EAE416AC33432519DA20EC04BD6(TArray<struct FSteamFriendInfo> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyFriends.WBP_PartyFriends_C.OnFailure_D0FE5EAE416AC33432519DA20EC04BD6");

	UWBP_PartyFriends_C_OnFailure_D0FE5EAE416AC33432519DA20EC04BD6_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyFriends.WBP_PartyFriends_C.OnSuccess_D0FE5EAE416AC33432519DA20EC04BD6
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamFriendInfo> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_PartyFriends_C::OnSuccess_D0FE5EAE416AC33432519DA20EC04BD6(TArray<struct FSteamFriendInfo> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyFriends.WBP_PartyFriends_C.OnSuccess_D0FE5EAE416AC33432519DA20EC04BD6");

	UWBP_PartyFriends_C_OnSuccess_D0FE5EAE416AC33432519DA20EC04BD6_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyFriends.WBP_PartyFriends_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyFriends_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyFriends.WBP_PartyFriends_C.Tick");

	UWBP_PartyFriends_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyFriends.WBP_PartyFriends_C.UpdateFriendsList
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartyFriends_C::UpdateFriendsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyFriends.WBP_PartyFriends_C.UpdateFriendsList");

	UWBP_PartyFriends_C_UpdateFriendsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyFriends.WBP_PartyFriends_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PartyFriends_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyFriends.WBP_PartyFriends_C.Construct");

	UWBP_PartyFriends_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PartyFriends.WBP_PartyFriends_C.ExecuteUbergraph_WBP_PartyFriends
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PartyFriends_C::ExecuteUbergraph_WBP_PartyFriends(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyFriends.WBP_PartyFriends_C.ExecuteUbergraph_WBP_PartyFriends");

	UWBP_PartyFriends_C_ExecuteUbergraph_WBP_PartyFriends_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
