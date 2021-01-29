// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Resupply2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Resupply2.BP_Resupply2_C.OnGivenTo
// (Event, Protected, BlueprintEvent)

void UBP_Resupply2_C::OnGivenTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Resupply2.BP_Resupply2_C.OnGivenTo");

	UBP_Resupply2_C_OnGivenTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Resupply2.BP_Resupply2_C.OnRemoved
// (Event, Protected, BlueprintEvent)

void UBP_Resupply2_C::OnRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Resupply2.BP_Resupply2_C.OnRemoved");

	UBP_Resupply2_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Resupply2.BP_Resupply2_C.ExecuteUbergraph_BP_Resupply2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Resupply2_C::ExecuteUbergraph_BP_Resupply2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Resupply2.BP_Resupply2_C.ExecuteUbergraph_BP_Resupply2");

	UBP_Resupply2_C_ExecuteUbergraph_BP_Resupply2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
