#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_MediumCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MediumCharacter.BP_MediumCharacter_C.UserConstructionScript
struct ABP_MediumCharacter_C_UserConstructionScript_Params
{
};

// Function BP_MediumCharacter.BP_MediumCharacter_C.ReceiveTick
struct ABP_MediumCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MediumCharacter.BP_MediumCharacter_C.BP_UpdateForClientPerspective
struct ABP_MediumCharacter_C_BP_UpdateForClientPerspective_Params
{
	bool*                                              bFirstPerson;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MediumCharacter.BP_MediumCharacter_C.ReceiveBeginPlay
struct ABP_MediumCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_MediumCharacter.BP_MediumCharacter_C.ExecuteUbergraph_BP_MediumCharacter
struct ABP_MediumCharacter_C_ExecuteUbergraph_BP_MediumCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
