// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_IndoorTurret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_IndoorTurret.ABP_IndoorTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_IndoorTurret_AnimGraphNode_ModifyBone_D8FEACD840A09A0A29D0918E0189C11B
// (BlueprintEvent)

void UABP_IndoorTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_IndoorTurret_AnimGraphNode_ModifyBone_D8FEACD840A09A0A29D0918E0189C11B()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_IndoorTurret.ABP_IndoorTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_IndoorTurret_AnimGraphNode_ModifyBone_D8FEACD840A09A0A29D0918E0189C11B");

	UABP_IndoorTurret_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_IndoorTurret_AnimGraphNode_ModifyBone_D8FEACD840A09A0A29D0918E0189C11B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_IndoorTurret.ABP_IndoorTurret_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_IndoorTurret_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_IndoorTurret.ABP_IndoorTurret_C.BlueprintUpdateAnimation");

	UABP_IndoorTurret_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_IndoorTurret.ABP_IndoorTurret_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_IndoorTurret_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_IndoorTurret.ABP_IndoorTurret_C.BlueprintInitializeAnimation");

	UABP_IndoorTurret_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_IndoorTurret.ABP_IndoorTurret_C.ExecuteUbergraph_ABP_IndoorTurret
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_IndoorTurret_C::ExecuteUbergraph_ABP_IndoorTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_IndoorTurret.ABP_IndoorTurret_C.ExecuteUbergraph_ABP_IndoorTurret");

	UABP_IndoorTurret_C_ExecuteUbergraph_ABP_IndoorTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
