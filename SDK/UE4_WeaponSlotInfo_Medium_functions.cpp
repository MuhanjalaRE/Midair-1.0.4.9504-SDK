// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WeaponSlotInfo_Medium_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponSlotInfo_Medium.WeaponSlotInfo_Medium_C.OnUnlock
// (Event, Public, BlueprintEvent)

void UWeaponSlotInfo_Medium_C::OnUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotInfo_Medium.WeaponSlotInfo_Medium_C.OnUnlock");

	UWeaponSlotInfo_Medium_C_OnUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotInfo_Medium.WeaponSlotInfo_Medium_C.ExecuteUbergraph_WeaponSlotInfo_Medium
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSlotInfo_Medium_C::ExecuteUbergraph_WeaponSlotInfo_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotInfo_Medium.WeaponSlotInfo_Medium_C.ExecuteUbergraph_WeaponSlotInfo_Medium");

	UWeaponSlotInfo_Medium_C_ExecuteUbergraph_WeaponSlotInfo_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
