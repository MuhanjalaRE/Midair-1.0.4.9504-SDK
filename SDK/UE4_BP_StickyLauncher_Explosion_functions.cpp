// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_StickyLauncher_Explosion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StickyLauncher_Explosion.BP_StickyLauncher_Explosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StickyLauncher_Explosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StickyLauncher_Explosion.BP_StickyLauncher_Explosion_C.UserConstructionScript");

	ABP_StickyLauncher_Explosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StickyLauncher_Explosion.BP_StickyLauncher_Explosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StickyLauncher_Explosion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StickyLauncher_Explosion.BP_StickyLauncher_Explosion_C.ReceiveBeginPlay");

	ABP_StickyLauncher_Explosion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StickyLauncher_Explosion.BP_StickyLauncher_Explosion_C.ExecuteUbergraph_BP_StickyLauncher_Explosion
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StickyLauncher_Explosion_C::ExecuteUbergraph_BP_StickyLauncher_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StickyLauncher_Explosion.BP_StickyLauncher_Explosion_C.ExecuteUbergraph_BP_StickyLauncher_Explosion");

	ABP_StickyLauncher_Explosion_C_ExecuteUbergraph_BP_StickyLauncher_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
