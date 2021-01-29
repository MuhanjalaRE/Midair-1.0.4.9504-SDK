// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleSeatInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_VehicleSeatInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetVisibility_1");

	UWBP_VehicleSeatInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetForegroundColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWBP_VehicleSeatInfo_C::GetForegroundColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetForegroundColor_1");

	UWBP_VehicleSeatInfo_C_GetForegroundColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetBrushColor_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_VehicleSeatInfo_C::GetBrushColor_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetBrushColor_2");

	UWBP_VehicleSeatInfo_C_GetBrushColor_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetBrushColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_VehicleSeatInfo_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetBrushColor_1");

	UWBP_VehicleSeatInfo_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_VehicleSeatInfo_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.GetPercent_1");

	UWBP_VehicleSeatInfo_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.UpdateInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SeatOrdinal                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleSeatComponent*   Seat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VehicleSeatInfo_C::UpdateInfo(int SeatOrdinal, class UVehicleSeatComponent* Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.UpdateInfo");

	UWBP_VehicleSeatInfo_C_UpdateInfo_Params params;
	params.SeatOrdinal = SeatOrdinal;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VehicleSeatInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.Construct");

	UWBP_VehicleSeatInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.Slow Tick
// (BlueprintCallable, BlueprintEvent)

void UWBP_VehicleSeatInfo_C::Slow_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.Slow Tick");

	UWBP_VehicleSeatInfo_C_Slow_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.ExecuteUbergraph_WBP_VehicleSeatInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VehicleSeatInfo_C::ExecuteUbergraph_WBP_VehicleSeatInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleSeatInfo.WBP_VehicleSeatInfo_C.ExecuteUbergraph_WBP_VehicleSeatInfo");

	UWBP_VehicleSeatInfo_C_ExecuteUbergraph_WBP_VehicleSeatInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
