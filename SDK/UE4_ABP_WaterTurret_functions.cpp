// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_WaterTurret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_WaterTurret.ABP_WaterTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WaterTurret_AnimGraphNode_ModifyBone_BDCFB39842E9347A3FA1DFB6E43FDF38
// (BlueprintEvent)

void UABP_WaterTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WaterTurret_AnimGraphNode_ModifyBone_BDCFB39842E9347A3FA1DFB6E43FDF38()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WaterTurret.ABP_WaterTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WaterTurret_AnimGraphNode_ModifyBone_BDCFB39842E9347A3FA1DFB6E43FDF38");

	UABP_WaterTurret_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WaterTurret_AnimGraphNode_ModifyBone_BDCFB39842E9347A3FA1DFB6E43FDF38_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WaterTurret.ABP_WaterTurret_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_WaterTurret_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WaterTurret.ABP_WaterTurret_C.BlueprintUpdateAnimation");

	UABP_WaterTurret_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WaterTurret.ABP_WaterTurret_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_WaterTurret_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WaterTurret.ABP_WaterTurret_C.BlueprintInitializeAnimation");

	UABP_WaterTurret_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_WaterTurret.ABP_WaterTurret_C.ExecuteUbergraph_ABP_WaterTurret
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_WaterTurret_C::ExecuteUbergraph_ABP_WaterTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WaterTurret.ABP_WaterTurret_C.ExecuteUbergraph_ABP_WaterTurret");

	UABP_WaterTurret_C_ExecuteUbergraph_ABP_WaterTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
