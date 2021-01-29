// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Boost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Boost.BP_Boost_C.OnActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter**           ReceivingCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Boost_C::OnActiveChanged(class AMACharacter** ReceivingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boost.BP_Boost_C.OnActiveChanged");

	UBP_Boost_C_OnActiveChanged_Params params;
	params.ReceivingCharacter = ReceivingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boost.BP_Boost_C.ExecuteUbergraph_BP_Boost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Boost_C::ExecuteUbergraph_BP_Boost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boost.BP_Boost_C.ExecuteUbergraph_BP_Boost");

	UBP_Boost_C_ExecuteUbergraph_BP_Boost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
