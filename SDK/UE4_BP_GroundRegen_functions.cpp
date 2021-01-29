// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_GroundRegen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GroundRegen.BP_GroundRegen_C.GetCurrentEnergyChangeRate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_GroundRegen_C::GetCurrentEnergyChangeRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroundRegen.BP_GroundRegen_C.GetCurrentEnergyChangeRate");

	UBP_GroundRegen_C_GetCurrentEnergyChangeRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
