// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_GameEventMessageSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GameEventMessageSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.Construct");

	UWBP_GameEventMessageSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GameEventMessageSlot_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.Tick");

	UWBP_GameEventMessageSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.ExecuteUbergraph_WBP_GameEventMessageSlot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GameEventMessageSlot_C::ExecuteUbergraph_WBP_GameEventMessageSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.ExecuteUbergraph_WBP_GameEventMessageSlot");

	UWBP_GameEventMessageSlot_C_ExecuteUbergraph_WBP_GameEventMessageSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
