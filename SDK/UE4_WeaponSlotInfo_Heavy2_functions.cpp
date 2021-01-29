// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WeaponSlotInfo_Heavy2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponSlotInfo_Heavy2.WeaponSlotInfo_Heavy2_C.OnUnlock
// (Event, Public, BlueprintEvent)

void UWeaponSlotInfo_Heavy2_C::OnUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotInfo_Heavy2.WeaponSlotInfo_Heavy2_C.OnUnlock");

	UWeaponSlotInfo_Heavy2_C_OnUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotInfo_Heavy2.WeaponSlotInfo_Heavy2_C.ExecuteUbergraph_WeaponSlotInfo_Heavy2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSlotInfo_Heavy2_C::ExecuteUbergraph_WeaponSlotInfo_Heavy2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotInfo_Heavy2.WeaponSlotInfo_Heavy2_C.ExecuteUbergraph_WeaponSlotInfo_Heavy2");

	UWeaponSlotInfo_Heavy2_C_ExecuteUbergraph_WeaponSlotInfo_Heavy2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
