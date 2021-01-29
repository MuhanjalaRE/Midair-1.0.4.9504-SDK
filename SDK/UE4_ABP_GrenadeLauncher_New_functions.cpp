// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_GrenadeLauncher_New_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrenadeLauncher_New_AnimGraphNode_BlendListByInt_7586B4B24BAA06897790518E65AD1EDE
// (BlueprintEvent)

void UABP_GrenadeLauncher_New_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrenadeLauncher_New_AnimGraphNode_BlendListByInt_7586B4B24BAA06897790518E65AD1EDE()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrenadeLauncher_New_AnimGraphNode_BlendListByInt_7586B4B24BAA06897790518E65AD1EDE");

	UABP_GrenadeLauncher_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrenadeLauncher_New_AnimGraphNode_BlendListByInt_7586B4B24BAA06897790518E65AD1EDE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_GrenadeLauncher_New_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.BlueprintUpdateAnimation");

	UABP_GrenadeLauncher_New_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.ExecuteUbergraph_ABP_GrenadeLauncher_New
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_GrenadeLauncher_New_C::ExecuteUbergraph_ABP_GrenadeLauncher_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.ExecuteUbergraph_ABP_GrenadeLauncher_New");

	UABP_GrenadeLauncher_New_C_ExecuteUbergraph_ABP_GrenadeLauncher_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
