// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_PlayerStatus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetValue2_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_PlayerStatus_C::GetValue2_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetValue2_1");

	UWBP_PlayerStatus_C_GetValue2_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetValue1_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_PlayerStatus_C::GetValue1_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetValue1_1");

	UWBP_PlayerStatus_C_GetValue1_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetFillColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_PlayerStatus_C::GetFillColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetFillColorAndOpacity_1");

	UWBP_PlayerStatus_C_GetFillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_PlayerStatus_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetVisibility_1");

	UWBP_PlayerStatus_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetPlayerEnergyText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerStatus_C::GetPlayerEnergyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetPlayerEnergyText");

	UWBP_PlayerStatus_C_GetPlayerEnergyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetPlayerHealthText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerStatus_C::GetPlayerHealthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.GetPlayerHealthText");

	UWBP_PlayerStatus_C_GetPlayerHealthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerStatus.WBP_PlayerStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.Construct");

	UWBP_PlayerStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus.WBP_PlayerStatus_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatus_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.CustomEvent_1");

	UWBP_PlayerStatus_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus.WBP_PlayerStatus_C.ExecuteUbergraph_WBP_PlayerStatus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatus_C::ExecuteUbergraph_WBP_PlayerStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus.WBP_PlayerStatus_C.ExecuteUbergraph_WBP_PlayerStatus");

	UWBP_PlayerStatus_C_ExecuteUbergraph_WBP_PlayerStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
