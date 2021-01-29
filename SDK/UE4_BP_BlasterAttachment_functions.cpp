// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BlasterAttachment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BlasterAttachment.BP_BlasterAttachment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BlasterAttachment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlasterAttachment.BP_BlasterAttachment_C.UserConstructionScript");

	ABP_BlasterAttachment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlasterAttachment.BP_BlasterAttachment_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BlasterAttachment_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlasterAttachment.BP_BlasterAttachment_C.ReceiveBeginPlay");

	ABP_BlasterAttachment_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlasterAttachment.BP_BlasterAttachment_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlasterAttachment_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlasterAttachment.BP_BlasterAttachment_C.ReceiveTick");

	ABP_BlasterAttachment_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlasterAttachment.BP_BlasterAttachment_C.ExecuteUbergraph_BP_BlasterAttachment
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlasterAttachment_C::ExecuteUbergraph_BP_BlasterAttachment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlasterAttachment.BP_BlasterAttachment_C.ExecuteUbergraph_BP_BlasterAttachment");

	ABP_BlasterAttachment_C_ExecuteUbergraph_BP_BlasterAttachment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
