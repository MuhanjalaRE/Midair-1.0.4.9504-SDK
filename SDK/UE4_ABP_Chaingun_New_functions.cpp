// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Chaingun_New_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Chaingun_New.ABP_Chaingun_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Chaingun_New_AnimGraphNode_ModifyBone_7BDCEE37452BA7E7FE24D8854DF3B788
// (BlueprintEvent)

void UABP_Chaingun_New_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Chaingun_New_AnimGraphNode_ModifyBone_7BDCEE37452BA7E7FE24D8854DF3B788()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Chaingun_New.ABP_Chaingun_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Chaingun_New_AnimGraphNode_ModifyBone_7BDCEE37452BA7E7FE24D8854DF3B788");

	UABP_Chaingun_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Chaingun_New_AnimGraphNode_ModifyBone_7BDCEE37452BA7E7FE24D8854DF3B788_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Chaingun_New.ABP_Chaingun_New_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Chaingun_New_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Chaingun_New.ABP_Chaingun_New_C.BlueprintUpdateAnimation");

	UABP_Chaingun_New_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Chaingun_New.ABP_Chaingun_New_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Chaingun_New_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Chaingun_New.ABP_Chaingun_New_C.BlueprintInitializeAnimation");

	UABP_Chaingun_New_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Chaingun_New.ABP_Chaingun_New_C.ExecuteUbergraph_ABP_Chaingun_New
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Chaingun_New_C::ExecuteUbergraph_ABP_Chaingun_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Chaingun_New.ABP_Chaingun_New_C.ExecuteUbergraph_ABP_Chaingun_New");

	UABP_Chaingun_New_C_ExecuteUbergraph_ABP_Chaingun_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
