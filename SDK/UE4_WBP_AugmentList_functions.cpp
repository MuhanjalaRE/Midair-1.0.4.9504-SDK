// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_AugmentList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AugmentList.WBP_AugmentList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AugmentList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AugmentList.WBP_AugmentList_C.Construct");

	UWBP_AugmentList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AugmentList.WBP_AugmentList_C.Slow Tick
// (BlueprintCallable, BlueprintEvent)

void UWBP_AugmentList_C::Slow_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AugmentList.WBP_AugmentList_C.Slow Tick");

	UWBP_AugmentList_C_Slow_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AugmentList.WBP_AugmentList_C.ExecuteUbergraph_WBP_AugmentList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AugmentList_C::ExecuteUbergraph_WBP_AugmentList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AugmentList.WBP_AugmentList_C.ExecuteUbergraph_WBP_AugmentList");

	UWBP_AugmentList_C_ExecuteUbergraph_WBP_AugmentList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
