// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_WardenAttachment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WardenAttachment.BP_WardenAttachment_C.HideAll
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WardenAttachment_C::HideAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WardenAttachment.BP_WardenAttachment_C.HideAll");

	ABP_WardenAttachment_C_HideAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WardenAttachment.BP_WardenAttachment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WardenAttachment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WardenAttachment.BP_WardenAttachment_C.UserConstructionScript");

	ABP_WardenAttachment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WardenAttachment.BP_WardenAttachment_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WardenAttachment_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WardenAttachment.BP_WardenAttachment_C.ReceiveTick");

	ABP_WardenAttachment_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WardenAttachment.BP_WardenAttachment_C.ExecuteUbergraph_BP_WardenAttachment
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WardenAttachment_C::ExecuteUbergraph_BP_WardenAttachment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WardenAttachment.BP_WardenAttachment_C.ExecuteUbergraph_BP_WardenAttachment");

	ABP_WardenAttachment_C_ExecuteUbergraph_BP_WardenAttachment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
