// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleVitalStatus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetFillColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_VehicleVitalStatus_C::GetFillColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetFillColorAndOpacity_1");

	UWBP_VehicleVitalStatus_C_GetFillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_VehicleVitalStatus_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetVisibility_1");

	UWBP_VehicleVitalStatus_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetPlayerEnergyText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_VehicleVitalStatus_C::GetPlayerEnergyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetPlayerEnergyText");

	UWBP_VehicleVitalStatus_C_GetPlayerEnergyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetPlayerHealthText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_VehicleVitalStatus_C::GetPlayerHealthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.GetPlayerHealthText");

	UWBP_VehicleVitalStatus_C_GetPlayerHealthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VehicleVitalStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.Construct");

	UWBP_VehicleVitalStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWBP_VehicleVitalStatus_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.CustomEvent_1");

	UWBP_VehicleVitalStatus_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.ExecuteUbergraph_WBP_VehicleVitalStatus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VehicleVitalStatus_C::ExecuteUbergraph_WBP_VehicleVitalStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleVitalStatus.WBP_VehicleVitalStatus_C.ExecuteUbergraph_WBP_VehicleVitalStatus");

	UWBP_VehicleVitalStatus_C_ExecuteUbergraph_WBP_VehicleVitalStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
