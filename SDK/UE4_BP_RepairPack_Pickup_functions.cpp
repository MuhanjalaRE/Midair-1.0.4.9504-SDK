// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_RepairPack_Pickup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RepairPack_Pickup.BP_RepairPack_Pickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RepairPack_Pickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RepairPack_Pickup.BP_RepairPack_Pickup_C.UserConstructionScript");

	ABP_RepairPack_Pickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
