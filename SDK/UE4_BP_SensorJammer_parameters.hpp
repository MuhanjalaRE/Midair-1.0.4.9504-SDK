#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_SensorJammer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SensorJammer.BP_SensorJammer_C.GetCurrentEnergyChangeRate
struct UBP_SensorJammer_C_GetCurrentEnergyChangeRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SensorJammer.BP_SensorJammer_C.OnGivenTo
struct UBP_SensorJammer_C_OnGivenTo_Params
{
};

// Function BP_SensorJammer.BP_SensorJammer_C.OnRemoved
struct UBP_SensorJammer_C_OnRemoved_Params
{
};

// Function BP_SensorJammer.BP_SensorJammer_C.OnAddBuddy
struct UBP_SensorJammer_C_OnAddBuddy_Params
{
	class AMACharacter**                               Buddy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SensorJammer.BP_SensorJammer_C.OnRemoveBuddy
struct UBP_SensorJammer_C_OnRemoveBuddy_Params
{
	class AMACharacter**                               Buddy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SensorJammer.BP_SensorJammer_C.ExecuteUbergraph_BP_SensorJammer
struct UBP_SensorJammer_C_ExecuteUbergraph_BP_SensorJammer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
