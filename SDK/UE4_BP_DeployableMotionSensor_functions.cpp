// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_DeployableMotionSensor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DeployableMotionSensor.BP_DeployableMotionSensor_C.GetPlacementVisualRadius
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_DeployableMotionSensor_C::GetPlacementVisualRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableMotionSensor.BP_DeployableMotionSensor_C.GetPlacementVisualRadius");

	ABP_DeployableMotionSensor_C_GetPlacementVisualRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DeployableMotionSensor.BP_DeployableMotionSensor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DeployableMotionSensor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableMotionSensor.BP_DeployableMotionSensor_C.UserConstructionScript");

	ABP_DeployableMotionSensor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableMotionSensor.BP_DeployableMotionSensor_C.BndEvt__SensorNetwork_K2Node_ComponentBoundEvent_0_OnTargetAcquired__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTargetComponent*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableMotionSensor_C::BndEvt__SensorNetwork_K2Node_ComponentBoundEvent_0_OnTargetAcquired__DelegateSignature(class UTargetComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableMotionSensor.BP_DeployableMotionSensor_C.BndEvt__SensorNetwork_K2Node_ComponentBoundEvent_0_OnTargetAcquired__DelegateSignature");

	ABP_DeployableMotionSensor_C_BndEvt__SensorNetwork_K2Node_ComponentBoundEvent_0_OnTargetAcquired__DelegateSignature_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableMotionSensor.BP_DeployableMotionSensor_C.NM_TargetAcquirred
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_DeployableMotionSensor_C::NM_TargetAcquirred()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableMotionSensor.BP_DeployableMotionSensor_C.NM_TargetAcquirred");

	ABP_DeployableMotionSensor_C_NM_TargetAcquirred_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeployableMotionSensor.BP_DeployableMotionSensor_C.ExecuteUbergraph_BP_DeployableMotionSensor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeployableMotionSensor_C::ExecuteUbergraph_BP_DeployableMotionSensor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableMotionSensor.BP_DeployableMotionSensor_C.ExecuteUbergraph_BP_DeployableMotionSensor");

	ABP_DeployableMotionSensor_C_ExecuteUbergraph_BP_DeployableMotionSensor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
