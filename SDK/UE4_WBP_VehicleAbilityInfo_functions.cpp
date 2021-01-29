// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleAbilityInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_VehicleAbilityInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetVisibility_1");

	UWBP_VehicleAbilityInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetForegroundColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_VehicleAbilityInfo_C::GetForegroundColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetForegroundColor_1");

	UWBP_VehicleAbilityInfo_C_GetForegroundColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetBrushColor_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_VehicleAbilityInfo_C::GetBrushColor_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetBrushColor_2");

	UWBP_VehicleAbilityInfo_C_GetBrushColor_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetBrushColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_VehicleAbilityInfo_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetBrushColor_1");

	UWBP_VehicleAbilityInfo_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_VehicleAbilityInfo_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.GetPercent_1");

	UWBP_VehicleAbilityInfo_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.UpdateInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AbilityBind                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   AbilityName                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_VehicleAbilityInfo_C::UpdateInfo(const struct FName& AbilityBind, const struct FText& AbilityName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleAbilityInfo.WBP_VehicleAbilityInfo_C.UpdateInfo");

	UWBP_VehicleAbilityInfo_C_UpdateInfo_Params params;
	params.AbilityBind = AbilityBind;
	params.AbilityName = AbilityName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
