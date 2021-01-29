#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BlasterAttachment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BlasterAttachment.BP_BlasterAttachment_C.UserConstructionScript
struct ABP_BlasterAttachment_C_UserConstructionScript_Params
{
};

// Function BP_BlasterAttachment.BP_BlasterAttachment_C.ReceiveBeginPlay
struct ABP_BlasterAttachment_C_ReceiveBeginPlay_Params
{
};

// Function BP_BlasterAttachment.BP_BlasterAttachment_C.ReceiveTick
struct ABP_BlasterAttachment_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlasterAttachment.BP_BlasterAttachment_C.ExecuteUbergraph_BP_BlasterAttachment
struct ABP_BlasterAttachment_C_ExecuteUbergraph_BP_BlasterAttachment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
