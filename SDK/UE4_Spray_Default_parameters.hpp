#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Spray_Default_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Spray_Default.Spray_Default_C.UpdateDecal
struct ASpray_Default_C_UpdateDecal_Params
{
	class UDecalComponent*                             Decal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spray_Default.Spray_Default_C.UserConstructionScript
struct ASpray_Default_C_UserConstructionScript_Params
{
};

// Function Spray_Default.Spray_Default_C.ReceiveBeginPlay
struct ASpray_Default_C_ReceiveBeginPlay_Params
{
};

// Function Spray_Default.Spray_Default_C.ExecuteUbergraph_Spray_Default
struct ASpray_Default_C_ExecuteUbergraph_Spray_Default_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
