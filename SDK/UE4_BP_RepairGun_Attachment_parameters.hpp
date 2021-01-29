#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_RepairGun_Attachment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.UserConstructionScript
struct ABP_RepairGun_Attachment_C_UserConstructionScript_Params
{
};

// Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.ReceiveTick
struct ABP_RepairGun_Attachment_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.Set Beam Color
struct ABP_RepairGun_Attachment_C_Set_Beam_Color_Params
{
	struct FVector                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.ExecuteUbergraph_BP_RepairGun_Attachment
struct ABP_RepairGun_Attachment_C_ExecuteUbergraph_BP_RepairGun_Attachment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
