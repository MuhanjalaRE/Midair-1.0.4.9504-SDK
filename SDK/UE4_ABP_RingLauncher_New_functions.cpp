// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_RingLauncher_New_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_RingLauncher_New.ABP_RingLauncher_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RingLauncher_New_AnimGraphNode_BlendListByInt_01E9624344C1B399F85A1096F225EF71
// (BlueprintEvent)

void UABP_RingLauncher_New_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RingLauncher_New_AnimGraphNode_BlendListByInt_01E9624344C1B399F85A1096F225EF71()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RingLauncher_New.ABP_RingLauncher_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RingLauncher_New_AnimGraphNode_BlendListByInt_01E9624344C1B399F85A1096F225EF71");

	UABP_RingLauncher_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RingLauncher_New_AnimGraphNode_BlendListByInt_01E9624344C1B399F85A1096F225EF71_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RingLauncher_New.ABP_RingLauncher_New_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RingLauncher_New_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RingLauncher_New.ABP_RingLauncher_New_C.BlueprintUpdateAnimation");

	UABP_RingLauncher_New_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_RingLauncher_New.ABP_RingLauncher_New_C.ExecuteUbergraph_ABP_RingLauncher_New
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RingLauncher_New_C::ExecuteUbergraph_ABP_RingLauncher_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RingLauncher_New.ABP_RingLauncher_New_C.ExecuteUbergraph_ABP_RingLauncher_New");

	UABP_RingLauncher_New_C_ExecuteUbergraph_ABP_RingLauncher_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
