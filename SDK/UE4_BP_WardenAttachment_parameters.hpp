#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_WardenAttachment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WardenAttachment.BP_WardenAttachment_C.HideAll
struct ABP_WardenAttachment_C_HideAll_Params
{
};

// Function BP_WardenAttachment.BP_WardenAttachment_C.UserConstructionScript
struct ABP_WardenAttachment_C_UserConstructionScript_Params
{
};

// Function BP_WardenAttachment.BP_WardenAttachment_C.ReceiveTick
struct ABP_WardenAttachment_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WardenAttachment.BP_WardenAttachment_C.ExecuteUbergraph_BP_WardenAttachment
struct ABP_WardenAttachment_C_ExecuteUbergraph_BP_WardenAttachment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
