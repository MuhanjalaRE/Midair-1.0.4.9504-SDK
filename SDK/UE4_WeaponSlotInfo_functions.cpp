// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WeaponSlotInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponSlotInfo.WeaponSlotInfo_C.OnUnlock
// (Event, Public, BlueprintEvent)

void UWeaponSlotInfo_C::OnUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotInfo.WeaponSlotInfo_C.OnUnlock");

	UWeaponSlotInfo_C_OnUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSlotInfo.WeaponSlotInfo_C.ExecuteUbergraph_WeaponSlotInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSlotInfo_C::ExecuteUbergraph_WeaponSlotInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSlotInfo.WeaponSlotInfo_C.ExecuteUbergraph_WeaponSlotInfo");

	UWeaponSlotInfo_C_ExecuteUbergraph_WeaponSlotInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
