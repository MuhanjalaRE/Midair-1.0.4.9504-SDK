// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_HoverTank_SiegeShellExplosion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HoverTank_SiegeShellExplosion.BP_HoverTank_SiegeShellExplosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HoverTank_SiegeShellExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank_SiegeShellExplosion.BP_HoverTank_SiegeShellExplosion_C.UserConstructionScript");

	ABP_HoverTank_SiegeShellExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
