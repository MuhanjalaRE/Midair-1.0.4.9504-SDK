// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_DeployableChargeIndicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.GetNewMaterialWithFillValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UWBP_DeployableChargeIndicator_C::GetNewMaterialWithFillValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.GetNewMaterialWithFillValue");

	UWBP_DeployableChargeIndicator_C_GetNewMaterialWithFillValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DeployableChargeIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.Construct");

	UWBP_DeployableChargeIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.SetLiteralFillValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FillPercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableChargeIndicator_C::SetLiteralFillValue(float FillPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.SetLiteralFillValue");

	UWBP_DeployableChargeIndicator_C_SetLiteralFillValue_Params params;
	params.FillPercent = FillPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.StartFilling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          From                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableChargeIndicator_C::StartFilling(float From, float OverTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.StartFilling");

	UWBP_DeployableChargeIndicator_C_StartFilling_Params params;
	params.From = From;
	params.OverTime = OverTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.UpdateTexture
// (BlueprintCallable, BlueprintEvent)

void UWBP_DeployableChargeIndicator_C::UpdateTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.UpdateTexture");

	UWBP_DeployableChargeIndicator_C_UpdateTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.Redraw
// (BlueprintCallable, BlueprintEvent)

void UWBP_DeployableChargeIndicator_C::Redraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.Redraw");

	UWBP_DeployableChargeIndicator_C_Redraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.ExecuteUbergraph_WBP_DeployableChargeIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DeployableChargeIndicator_C::ExecuteUbergraph_WBP_DeployableChargeIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DeployableChargeIndicator.WBP_DeployableChargeIndicator_C.ExecuteUbergraph_WBP_DeployableChargeIndicator");

	UWBP_DeployableChargeIndicator_C_ExecuteUbergraph_WBP_DeployableChargeIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
