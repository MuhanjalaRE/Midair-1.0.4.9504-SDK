// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_StickyProjectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StickyProjectile.BP_StickyProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StickyProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StickyProjectile.BP_StickyProjectile_C.UserConstructionScript");

	ABP_StickyProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StickyProjectile.BP_StickyProjectile_C.FlickerCurve__FinishedFunc
// (BlueprintEvent)

void ABP_StickyProjectile_C::FlickerCurve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StickyProjectile.BP_StickyProjectile_C.FlickerCurve__FinishedFunc");

	ABP_StickyProjectile_C_FlickerCurve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StickyProjectile.BP_StickyProjectile_C.FlickerCurve__UpdateFunc
// (BlueprintEvent)

void ABP_StickyProjectile_C::FlickerCurve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StickyProjectile.BP_StickyProjectile_C.FlickerCurve__UpdateFunc");

	ABP_StickyProjectile_C_FlickerCurve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StickyProjectile.BP_StickyProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StickyProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StickyProjectile.BP_StickyProjectile_C.ReceiveBeginPlay");

	ABP_StickyProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StickyProjectile.BP_StickyProjectile_C.BP_StartArm
// (Event, Protected, BlueprintEvent)

void ABP_StickyProjectile_C::BP_StartArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StickyProjectile.BP_StickyProjectile_C.BP_StartArm");

	ABP_StickyProjectile_C_BP_StartArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StickyProjectile.BP_StickyProjectile_C.BP_FinishedArm
// (Event, Protected, BlueprintEvent)

void ABP_StickyProjectile_C::BP_FinishedArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StickyProjectile.BP_StickyProjectile_C.BP_FinishedArm");

	ABP_StickyProjectile_C_BP_FinishedArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StickyProjectile.BP_StickyProjectile_C.ExecuteUbergraph_BP_StickyProjectile
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StickyProjectile_C::ExecuteUbergraph_BP_StickyProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StickyProjectile.BP_StickyProjectile_C.ExecuteUbergraph_BP_StickyProjectile");

	ABP_StickyProjectile_C_ExecuteUbergraph_BP_StickyProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
