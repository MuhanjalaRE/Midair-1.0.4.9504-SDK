// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleStateInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Hide Vehicle Abilities
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VehicleStateInfo_C::Hide_Vehicle_Abilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Hide Vehicle Abilities");

	UWBP_VehicleStateInfo_C_Hide_Vehicle_Abilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.CreateAbilityInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_VehicleAbilityInfo_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWBP_VehicleAbilityInfo_C* UWBP_VehicleStateInfo_C::CreateAbilityInfoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.CreateAbilityInfoWidget");

	UWBP_VehicleStateInfo_C_CreateAbilityInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VehicleStateInfo_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Update");

	UWBP_VehicleStateInfo_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_VehicleStateInfo_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.GetVisibility_2");

	UWBP_VehicleStateInfo_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VehicleStateInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Construct");

	UWBP_VehicleStateInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Custom Tick
// (BlueprintCallable, BlueprintEvent)

void UWBP_VehicleStateInfo_C::Custom_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.Custom Tick");

	UWBP_VehicleStateInfo_C_Custom_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.ExecuteUbergraph_WBP_VehicleStateInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VehicleStateInfo_C::ExecuteUbergraph_WBP_VehicleStateInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleStateInfo.WBP_VehicleStateInfo_C.ExecuteUbergraph_WBP_VehicleStateInfo");

	UWBP_VehicleStateInfo_C_ExecuteUbergraph_WBP_VehicleStateInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
