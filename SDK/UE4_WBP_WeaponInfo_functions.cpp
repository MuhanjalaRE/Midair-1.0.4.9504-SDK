// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_WeaponInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_WeaponInfo.WBP_WeaponInfo_C.Update Weapon Stats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponStatDetails      Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWBP_WeaponInfo_C::Update_Weapon_Stats(const struct FWeaponStatDetails& Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponInfo.WBP_WeaponInfo_C.Update Weapon Stats");

	UWBP_WeaponInfo_C_Update_Weapon_Stats_Params params;
	params.Stats = Stats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WeaponInfo.WBP_WeaponInfo_C.ExecuteUbergraph_WBP_WeaponInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WeaponInfo_C::ExecuteUbergraph_WBP_WeaponInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponInfo.WBP_WeaponInfo_C.ExecuteUbergraph_WBP_WeaponInfo");

	UWBP_WeaponInfo_C_ExecuteUbergraph_WBP_WeaponInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
