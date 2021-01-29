#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_HoverTank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HoverTank.BP_HoverTank_C.TankGoingBackwards
struct ABP_HoverTank_C_TankGoingBackwards_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HoverTank.BP_HoverTank_C.TankIsReversing
struct ABP_HoverTank_C_TankIsReversing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HoverTank.BP_HoverTank_C.ApplyLeveling
struct ABP_HoverTank_C_ApplyLeveling_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverTank.BP_HoverTank_C.UserConstructionScript
struct ABP_HoverTank_C_UserConstructionScript_Params
{
};

// Function BP_HoverTank.BP_HoverTank_C.ReceiveTick
struct ABP_HoverTank_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverTank.BP_HoverTank_C.BndEvt__VehicleMovementComponent_K2Node_ComponentBoundEvent_0_OnVehicleTick__DelegateSignature
struct ABP_HoverTank_C_BndEvt__VehicleMovementComponent_K2Node_ComponentBoundEvent_0_OnVehicleTick__DelegateSignature_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverTank.BP_HoverTank_C.ReceiveBeginPlay
struct ABP_HoverTank_C_ReceiveBeginPlay_Params
{
};

// Function BP_HoverTank.BP_HoverTank_C.OnEnterNewTankMode
struct ABP_HoverTank_C_OnEnterNewTankMode_Params
{
};

// Function BP_HoverTank.BP_HoverTank_C.ReceiveEndPlay
struct ABP_HoverTank_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverTank.BP_HoverTank_C.ExecuteUbergraph_BP_HoverTank
struct ABP_HoverTank_C_ExecuteUbergraph_BP_HoverTank_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
