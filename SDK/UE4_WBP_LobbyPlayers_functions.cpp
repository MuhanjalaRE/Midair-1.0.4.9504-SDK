// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_LobbyPlayers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LobbyPlayers.WBP_LobbyPlayers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LobbyPlayers_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbyPlayers.WBP_LobbyPlayers_C.Construct");

	UWBP_LobbyPlayers_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LobbyPlayers.WBP_LobbyPlayers_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LobbyPlayers_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbyPlayers.WBP_LobbyPlayers_C.Tick");

	UWBP_LobbyPlayers_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LobbyPlayers.WBP_LobbyPlayers_C.ExecuteUbergraph_WBP_LobbyPlayers
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LobbyPlayers_C::ExecuteUbergraph_WBP_LobbyPlayers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbyPlayers.WBP_LobbyPlayers_C.ExecuteUbergraph_WBP_LobbyPlayers");

	UWBP_LobbyPlayers_C_ExecuteUbergraph_WBP_LobbyPlayers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
