// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_RepairGun_Attachment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RepairGun_Attachment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.UserConstructionScript");

	ABP_RepairGun_Attachment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RepairGun_Attachment_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.ReceiveTick");

	ABP_RepairGun_Attachment_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.Set Beam Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_RepairGun_Attachment_C::Set_Beam_Color(const struct FVector& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.Set Beam Color");

	ABP_RepairGun_Attachment_C_Set_Beam_Color_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.ExecuteUbergraph_BP_RepairGun_Attachment
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RepairGun_Attachment_C::ExecuteUbergraph_BP_RepairGun_Attachment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RepairGun_Attachment.BP_RepairGun_Attachment_C.ExecuteUbergraph_BP_RepairGun_Attachment");

	ABP_RepairGun_Attachment_C_ExecuteUbergraph_BP_RepairGun_Attachment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
