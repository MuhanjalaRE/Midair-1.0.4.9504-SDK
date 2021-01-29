// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_HoverDust_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HoverDust.BP_HoverDust_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HoverDust_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDust.BP_HoverDust_C.UserConstructionScript");

	ABP_HoverDust_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverDust.BP_HoverDust_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverDust_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDust.BP_HoverDust_C.ReceiveTick");

	ABP_HoverDust_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverDust.BP_HoverDust_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_HoverDust_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDust.BP_HoverDust_C.ReceiveDestroyed");

	ABP_HoverDust_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverDust.BP_HoverDust_C.ExecuteUbergraph_BP_HoverDust
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoverDust_C::ExecuteUbergraph_BP_HoverDust(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverDust.BP_HoverDust_C.ExecuteUbergraph_BP_HoverDust");

	ABP_HoverDust_C_ExecuteUbergraph_BP_HoverDust_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
