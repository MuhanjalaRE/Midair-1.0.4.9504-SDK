// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_KineticWeaponryA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.OnGivenTo
// (Event, Protected, BlueprintEvent)

void UBP_KineticWeaponryA_C::OnGivenTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.OnGivenTo");

	UBP_KineticWeaponryA_C_OnGivenTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.OnRemoved
// (Event, Protected, BlueprintEvent)

void UBP_KineticWeaponryA_C::OnRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.OnRemoved");

	UBP_KineticWeaponryA_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.ExecuteUbergraph_BP_KineticWeaponryA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KineticWeaponryA_C::ExecuteUbergraph_BP_KineticWeaponryA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.ExecuteUbergraph_BP_KineticWeaponryA");

	UBP_KineticWeaponryA_C_ExecuteUbergraph_BP_KineticWeaponryA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
