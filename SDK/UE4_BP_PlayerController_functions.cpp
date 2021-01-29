// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PlayerController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerController.BP_PlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.UserConstructionScript");

	ABP_PlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.SetupDeathEffects
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::SetupDeathEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.SetupDeathEffects");

	ABP_PlayerController_C_SetupDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ClearDeathEffects
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::ClearDeathEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ClearDeathEffects");

	ABP_PlayerController_C_ClearDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController");

	ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
