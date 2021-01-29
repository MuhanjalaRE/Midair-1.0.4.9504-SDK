// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WBP_VehicleInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VehicleInfo.WBP_VehicleInfo_C.Get_VehicleIcon_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWBP_VehicleInfo_C::Get_VehicleIcon_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleInfo.WBP_VehicleInfo_C.Get_VehicleIcon_ColorAndOpacity_1");

	UWBP_VehicleInfo_C_Get_VehicleIcon_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleInfo.WBP_VehicleInfo_C.CanSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_VehicleInfo_C::CanSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleInfo.WBP_VehicleInfo_C.CanSpawn");

	UWBP_VehicleInfo_C_CanSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleInfo.WBP_VehicleInfo_C.Get_VehicleIcon_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_VehicleInfo_C::Get_VehicleIcon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleInfo.WBP_VehicleInfo_C.Get_VehicleIcon_Brush_1");

	UWBP_VehicleInfo_C_Get_VehicleIcon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleInfo.WBP_VehicleInfo_C.GetNumSeats
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_VehicleInfo_C::GetNumSeats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleInfo.WBP_VehicleInfo_C.GetNumSeats");

	UWBP_VehicleInfo_C_GetNumSeats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleInfo.WBP_VehicleInfo_C.GetDeployedCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_VehicleInfo_C::GetDeployedCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleInfo.WBP_VehicleInfo_C.GetDeployedCount");

	UWBP_VehicleInfo_C_GetDeployedCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleInfo.WBP_VehicleInfo_C.GetMaxArmorIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_VehicleInfo_C::GetMaxArmorIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleInfo.WBP_VehicleInfo_C.GetMaxArmorIcon");

	UWBP_VehicleInfo_C_GetMaxArmorIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VehicleInfo.WBP_VehicleInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VehicleInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleInfo.WBP_VehicleInfo_C.Construct");

	UWBP_VehicleInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VehicleInfo.WBP_VehicleInfo_C.ExecuteUbergraph_WBP_VehicleInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VehicleInfo_C::ExecuteUbergraph_WBP_VehicleInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VehicleInfo.WBP_VehicleInfo_C.ExecuteUbergraph_WBP_VehicleInfo");

	UWBP_VehicleInfo_C_ExecuteUbergraph_WBP_VehicleInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
