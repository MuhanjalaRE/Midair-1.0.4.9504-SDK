// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Railgun_New_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Railgun_New.ABP_Railgun_New_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Railgun_New_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Railgun_New.ABP_Railgun_New_C.BlueprintInitializeAnimation");

	UABP_Railgun_New_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Railgun_New.ABP_Railgun_New_C.AnimNotify_OnDetachAmmo1P
// (BlueprintCallable, BlueprintEvent)

void UABP_Railgun_New_C::AnimNotify_OnDetachAmmo1P()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Railgun_New.ABP_Railgun_New_C.AnimNotify_OnDetachAmmo1P");

	UABP_Railgun_New_C_AnimNotify_OnDetachAmmo1P_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Railgun_New.ABP_Railgun_New_C.AnimNotify_OnDetachAmmo3P
// (BlueprintCallable, BlueprintEvent)

void UABP_Railgun_New_C::AnimNotify_OnDetachAmmo3P()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Railgun_New.ABP_Railgun_New_C.AnimNotify_OnDetachAmmo3P");

	UABP_Railgun_New_C_AnimNotify_OnDetachAmmo3P_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Railgun_New.ABP_Railgun_New_C.ExecuteUbergraph_ABP_Railgun_New
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Railgun_New_C::ExecuteUbergraph_ABP_Railgun_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Railgun_New.ABP_Railgun_New_C.ExecuteUbergraph_ABP_Railgun_New");

	UABP_Railgun_New_C_ExecuteUbergraph_ABP_Railgun_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
