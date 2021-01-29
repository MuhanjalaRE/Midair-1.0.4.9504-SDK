#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Reload_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Reload.BP_Reload_C.OnActiveChanged
struct UBP_Reload_C_OnActiveChanged_Params
{
	class AMACharacter**                               ReceivingCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Reload.BP_Reload_C.OnGivenTo
struct UBP_Reload_C_OnGivenTo_Params
{
};

// Function BP_Reload.BP_Reload_C.OnRemoved
struct UBP_Reload_C_OnRemoved_Params
{
};

// Function BP_Reload.BP_Reload_C.ExecuteUbergraph_BP_Reload
struct UBP_Reload_C_ExecuteUbergraph_BP_Reload_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
