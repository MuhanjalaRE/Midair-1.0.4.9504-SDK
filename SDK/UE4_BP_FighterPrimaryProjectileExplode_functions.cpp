// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FighterPrimaryProjectileExplode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FighterPrimaryProjectileExplode.BP_FighterPrimaryProjectileExplode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FighterPrimaryProjectileExplode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FighterPrimaryProjectileExplode.BP_FighterPrimaryProjectileExplode_C.UserConstructionScript");

	ABP_FighterPrimaryProjectileExplode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
