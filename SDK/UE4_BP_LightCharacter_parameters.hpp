#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_LightCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LightCharacter.BP_LightCharacter_C.UserConstructionScript
struct ABP_LightCharacter_C_UserConstructionScript_Params
{
};

// Function BP_LightCharacter.BP_LightCharacter_C.ReceiveTick
struct ABP_LightCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightCharacter.BP_LightCharacter_C.ReceiveBeginPlay
struct ABP_LightCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_LightCharacter.BP_LightCharacter_C.BP_UpdateForClientPerspective
struct ABP_LightCharacter_C_BP_UpdateForClientPerspective_Params
{
	bool*                                              bFirstPerson;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightCharacter.BP_LightCharacter_C.ExecuteUbergraph_BP_LightCharacter
struct ABP_LightCharacter_C_ExecuteUbergraph_BP_LightCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
