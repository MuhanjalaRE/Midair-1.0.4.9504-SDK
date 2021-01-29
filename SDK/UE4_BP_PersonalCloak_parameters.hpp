#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PersonalCloak_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PersonalCloak.BP_PersonalCloak_C.OnEnergyDepleted
struct UBP_PersonalCloak_C_OnEnergyDepleted_Params
{
};

// Function BP_PersonalCloak.BP_PersonalCloak_C.OnActiveChanged
struct UBP_PersonalCloak_C_OnActiveChanged_Params
{
	class AMACharacter**                               ReceivingCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PersonalCloak.BP_PersonalCloak_C.ExecuteUbergraph_BP_PersonalCloak
struct UBP_PersonalCloak_C_ExecuteUbergraph_BP_PersonalCloak_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
