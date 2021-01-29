#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_GrenadeShell_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GrenadeShell.BP_GrenadeShell_C.UserConstructionScript
struct ABP_GrenadeShell_C_UserConstructionScript_Params
{
};

// Function BP_GrenadeShell.BP_GrenadeShell_C.ReceiveTick
struct ABP_GrenadeShell_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GrenadeShell.BP_GrenadeShell_C.ExecuteUbergraph_BP_GrenadeShell
struct ABP_GrenadeShell_C_ExecuteUbergraph_BP_GrenadeShell_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
