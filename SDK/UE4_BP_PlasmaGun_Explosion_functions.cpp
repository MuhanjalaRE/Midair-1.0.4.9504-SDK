// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PlasmaGun_Explosion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlasmaGun_Explosion.BP_PlasmaGun_Explosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlasmaGun_Explosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlasmaGun_Explosion.BP_PlasmaGun_Explosion_C.UserConstructionScript");

	ABP_PlasmaGun_Explosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
