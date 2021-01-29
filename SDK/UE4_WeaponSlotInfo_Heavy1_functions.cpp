// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WeaponSlotInfo_Heavy1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponSlotInfo_Heavy1.WeaponSlotInfo_Heavy1_C.OnUnlock
// (Event, Public, BlueprintEvent)

void UWeaponSlotInfo_Heavy1_C::OnUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotInfo_Heavy1.WeaponSlotInfo_Heavy1_C.OnUnlock");

	UWeaponSlotInfo_Heavy1_C_OnUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotInfo_Heavy1.WeaponSlotInfo_Heavy1_C.ExecuteUbergraph_WeaponSlotInfo_Heavy1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSlotInfo_Heavy1_C::ExecuteUbergraph_WeaponSlotInfo_Heavy1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotInfo_Heavy1.WeaponSlotInfo_Heavy1_C.ExecuteUbergraph_WeaponSlotInfo_Heavy1");

	UWeaponSlotInfo_Heavy1_C_ExecuteUbergraph_WeaponSlotInfo_Heavy1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
