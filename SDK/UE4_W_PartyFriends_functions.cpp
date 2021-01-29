// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_PartyFriends_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartyFriends.W_PartyFriends_C.RefreshFriendsList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamFriendInfo> InFriendsList                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UW_PartyFriends_C::RefreshFriendsList(TArray<struct FSteamFriendInfo>* InFriendsList)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyFriends.W_PartyFriends_C.RefreshFriendsList");

	UW_PartyFriends_C_RefreshFriendsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InFriendsList != nullptr)
		*InFriendsList = params.InFriendsList;
}


// Function W_PartyFriends.W_PartyFriends_C.OnFailure_4BF5A74B4418D3E2A98387811A6DAD51
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamFriendInfo> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UW_PartyFriends_C::OnFailure_4BF5A74B4418D3E2A98387811A6DAD51(TArray<struct FSteamFriendInfo> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyFriends.W_PartyFriends_C.OnFailure_4BF5A74B4418D3E2A98387811A6DAD51");

	UW_PartyFriends_C_OnFailure_4BF5A74B4418D3E2A98387811A6DAD51_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyFriends.W_PartyFriends_C.OnSuccess_4BF5A74B4418D3E2A98387811A6DAD51
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamFriendInfo> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UW_PartyFriends_C::OnSuccess_4BF5A74B4418D3E2A98387811A6DAD51(TArray<struct FSteamFriendInfo> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyFriends.W_PartyFriends_C.OnSuccess_4BF5A74B4418D3E2A98387811A6DAD51");

	UW_PartyFriends_C_OnSuccess_4BF5A74B4418D3E2A98387811A6DAD51_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyFriends.W_PartyFriends_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyFriends_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyFriends.W_PartyFriends_C.Tick");

	UW_PartyFriends_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyFriends.W_PartyFriends_C.UpdateFriendsList
// (BlueprintCallable, BlueprintEvent)

void UW_PartyFriends_C::UpdateFriendsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyFriends.W_PartyFriends_C.UpdateFriendsList");

	UW_PartyFriends_C_UpdateFriendsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyFriends.W_PartyFriends_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_PartyFriends_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyFriends.W_PartyFriends_C.Construct");

	UW_PartyFriends_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_PartyFriends.W_PartyFriends_C.ExecuteUbergraph_W_PartyFriends
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_PartyFriends_C::ExecuteUbergraph_W_PartyFriends(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PartyFriends.W_PartyFriends_C.ExecuteUbergraph_W_PartyFriends");

	UW_PartyFriends_C_ExecuteUbergraph_W_PartyFriends_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
