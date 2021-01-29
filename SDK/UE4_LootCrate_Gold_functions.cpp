// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_LootCrate_Gold_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootCrate_Gold.LootCrate_Gold_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALootCrate_Gold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootCrate_Gold.LootCrate_Gold_C.UserConstructionScript");

	ALootCrate_Gold_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootCrate_Gold.LootCrate_Gold_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALootCrate_Gold_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootCrate_Gold.LootCrate_Gold_C.ReceiveBeginPlay");

	ALootCrate_Gold_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootCrate_Gold.LootCrate_Gold_C.ExecuteUbergraph_LootCrate_Gold
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALootCrate_Gold_C::ExecuteUbergraph_LootCrate_Gold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootCrate_Gold.LootCrate_Gold_C.ExecuteUbergraph_LootCrate_Gold");

	ALootCrate_Gold_C_ExecuteUbergraph_LootCrate_Gold_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
