// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_DeployableSensor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DeployableSensor.BP_DeployableSensor_C.GetPlacementVisualRadius
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_DeployableSensor_C::GetPlacementVisualRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableSensor.BP_DeployableSensor_C.GetPlacementVisualRadius");

	ABP_DeployableSensor_C_GetPlacementVisualRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DeployableSensor.BP_DeployableSensor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DeployableSensor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployableSensor.BP_DeployableSensor_C.UserConstructionScript");

	ABP_DeployableSensor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
