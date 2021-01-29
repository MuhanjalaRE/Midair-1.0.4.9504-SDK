// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_StickyLauncher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_StickyLauncher.ABP_StickyLauncher_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_StickyLauncher_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_StickyLauncher.ABP_StickyLauncher_C.BlueprintInitializeAnimation");

	UABP_StickyLauncher_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_StickyLauncher.ABP_StickyLauncher_C.AnimNotify_OnDetachAmmo1P
// (BlueprintCallable, BlueprintEvent)

void UABP_StickyLauncher_C::AnimNotify_OnDetachAmmo1P()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_StickyLauncher.ABP_StickyLauncher_C.AnimNotify_OnDetachAmmo1P");

	UABP_StickyLauncher_C_AnimNotify_OnDetachAmmo1P_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_StickyLauncher.ABP_StickyLauncher_C.AnimNotify_OnDetachAmmo3P
// (BlueprintCallable, BlueprintEvent)

void UABP_StickyLauncher_C::AnimNotify_OnDetachAmmo3P()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_StickyLauncher.ABP_StickyLauncher_C.AnimNotify_OnDetachAmmo3P");

	UABP_StickyLauncher_C_AnimNotify_OnDetachAmmo3P_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_StickyLauncher.ABP_StickyLauncher_C.ExecuteUbergraph_ABP_StickyLauncher
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_StickyLauncher_C::ExecuteUbergraph_ABP_StickyLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_StickyLauncher.ABP_StickyLauncher_C.ExecuteUbergraph_ABP_StickyLauncher");

	UABP_StickyLauncher_C_ExecuteUbergraph_ABP_StickyLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
