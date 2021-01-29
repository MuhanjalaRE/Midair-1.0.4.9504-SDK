// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_DetectedStatus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DetectedStatus.WBP_DetectedStatus_C.SetDetectedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDetectedState                 NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DetectedStatus_C::SetDetectedState(EDetectedState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DetectedStatus.WBP_DetectedStatus_C.SetDetectedState");

	UWBP_DetectedStatus_C_SetDetectedState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DetectedStatus.WBP_DetectedStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DetectedStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DetectedStatus.WBP_DetectedStatus_C.Construct");

	UWBP_DetectedStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DetectedStatus.WBP_DetectedStatus_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWBP_DetectedStatus_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DetectedStatus.WBP_DetectedStatus_C.CustomEvent_1");

	UWBP_DetectedStatus_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DetectedStatus.WBP_DetectedStatus_C.ExecuteUbergraph_WBP_DetectedStatus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DetectedStatus_C::ExecuteUbergraph_WBP_DetectedStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DetectedStatus.WBP_DetectedStatus_C.ExecuteUbergraph_WBP_DetectedStatus");

	UWBP_DetectedStatus_C_ExecuteUbergraph_WBP_DetectedStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
