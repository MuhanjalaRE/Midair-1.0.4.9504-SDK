// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_HoverTank_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HoverTank.BP_HoverTank_C.TankGoingBackwards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HoverTank_C::TankGoingBackwards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank.BP_HoverTank_C.TankGoingBackwards");

	ABP_HoverTank_C_TankGoingBackwards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HoverTank.BP_HoverTank_C.TankIsReversing
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HoverTank_C::TankIsReversing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank.BP_HoverTank_C.TankIsReversing");

	ABP_HoverTank_C_TankIsReversing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HoverTank.BP_HoverTank_C.ApplyLeveling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverTank_C::ApplyLeveling(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank.BP_HoverTank_C.ApplyLeveling");

	ABP_HoverTank_C_ApplyLeveling_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverTank.BP_HoverTank_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HoverTank_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank.BP_HoverTank_C.UserConstructionScript");

	ABP_HoverTank_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverTank.BP_HoverTank_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverTank_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank.BP_HoverTank_C.ReceiveTick");

	ABP_HoverTank_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverTank.BP_HoverTank_C.BndEvt__VehicleMovementComponent_K2Node_ComponentBoundEvent_0_OnVehicleTick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverTank_C::BndEvt__VehicleMovementComponent_K2Node_ComponentBoundEvent_0_OnVehicleTick__DelegateSignature(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank.BP_HoverTank_C.BndEvt__VehicleMovementComponent_K2Node_ComponentBoundEvent_0_OnVehicleTick__DelegateSignature");

	ABP_HoverTank_C_BndEvt__VehicleMovementComponent_K2Node_ComponentBoundEvent_0_OnVehicleTick__DelegateSignature_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverTank.BP_HoverTank_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HoverTank_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank.BP_HoverTank_C.ReceiveBeginPlay");

	ABP_HoverTank_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverTank.BP_HoverTank_C.OnEnterNewTankMode
// (Event, Public, BlueprintEvent)

void ABP_HoverTank_C::OnEnterNewTankMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank.BP_HoverTank_C.OnEnterNewTankMode");

	ABP_HoverTank_C_OnEnterNewTankMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverTank.BP_HoverTank_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverTank_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank.BP_HoverTank_C.ReceiveEndPlay");

	ABP_HoverTank_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverTank.BP_HoverTank_C.ExecuteUbergraph_BP_HoverTank
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverTank_C::ExecuteUbergraph_BP_HoverTank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverTank.BP_HoverTank_C.ExecuteUbergraph_BP_HoverTank");

	ABP_HoverTank_C_ExecuteUbergraph_BP_HoverTank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
