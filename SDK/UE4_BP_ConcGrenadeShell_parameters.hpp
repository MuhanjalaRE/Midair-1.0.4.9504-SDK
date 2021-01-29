#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_ConcGrenadeShell_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ConcGrenadeShell.BP_ConcGrenadeShell_C.UserConstructionScript
struct ABP_ConcGrenadeShell_C_UserConstructionScript_Params
{
};

// Function BP_ConcGrenadeShell.BP_ConcGrenadeShell_C.ReceiveEndPlay
struct ABP_ConcGrenadeShell_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConcGrenadeShell.BP_ConcGrenadeShell_C.ExecuteUbergraph_BP_ConcGrenadeShell
struct ABP_ConcGrenadeShell_C_ExecuteUbergraph_BP_ConcGrenadeShell_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
