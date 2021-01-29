// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleWeaponInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetCurrentRoundDisplayVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_VehicleWeaponInfo_C::GetCurrentRoundDisplayVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetCurrentRoundDisplayVisibility");

	UWBP_VehicleWeaponInfo_C_GetCurrentRoundDisplayVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.Get_TextBlock_0_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_VehicleWeaponInfo_C::Get_TextBlock_0_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.Get_TextBlock_0_Text_1");

	UWBP_VehicleWeaponInfo_C_Get_TextBlock_0_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_VehicleWeaponInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetVisibility_1");

	UWBP_VehicleWeaponInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetForegroundColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_VehicleWeaponInfo_C::GetForegroundColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetForegroundColor_1");

	UWBP_VehicleWeaponInfo_C_GetForegroundColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetBrushColor_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_VehicleWeaponInfo_C::GetBrushColor_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetBrushColor_2");

	UWBP_VehicleWeaponInfo_C_GetBrushColor_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetBrushColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_VehicleWeaponInfo_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetBrushColor_1");

	UWBP_VehicleWeaponInfo_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_VehicleWeaponInfo_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.GetPercent_1");

	UWBP_VehicleWeaponInfo_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.UpdateInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVehicleSeatComponent*   AssociatedSeat                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleWeaponComponent* Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VehicleWeaponInfo_C::UpdateInfo(class UVehicleSeatComponent* AssociatedSeat, class UVehicleWeaponComponent* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.UpdateInfo");

	UWBP_VehicleWeaponInfo_C_UpdateInfo_Params params;
	params.AssociatedSeat = AssociatedSeat;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VehicleWeaponInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.Construct");

	UWBP_VehicleWeaponInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.Slow Tick
// (BlueprintCallable, BlueprintEvent)

void UWBP_VehicleWeaponInfo_C::Slow_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.Slow Tick");

	UWBP_VehicleWeaponInfo_C_Slow_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.ExecuteUbergraph_WBP_VehicleWeaponInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VehicleWeaponInfo_C::ExecuteUbergraph_WBP_VehicleWeaponInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleWeaponInfo.WBP_VehicleWeaponInfo_C.ExecuteUbergraph_WBP_VehicleWeaponInfo");

	UWBP_VehicleWeaponInfo_C_ExecuteUbergraph_WBP_VehicleWeaponInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
