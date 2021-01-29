#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Resupply_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Resupply.BP_Resupply_C.OnActiveChanged
struct UBP_Resupply_C_OnActiveChanged_Params
{
	class AMACharacter**                               ReceivingCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Resupply.BP_Resupply_C.ExecuteUbergraph_BP_Resupply
struct UBP_Resupply_C_ExecuteUbergraph_BP_Resupply_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
