#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FragGrenade_Shell_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.UserConstructionScript
struct ABP_FragGrenade_Shell_C_UserConstructionScript_Params
{
};

// Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.ReceiveEndPlay
struct ABP_FragGrenade_Shell_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.ExecuteUbergraph_BP_FragGrenade_Shell
struct ABP_FragGrenade_Shell_C_ExecuteUbergraph_BP_FragGrenade_Shell_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
