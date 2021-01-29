// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FlagForcefield_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FlagForcefield.BP_FlagForcefield_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FlagForcefield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagForcefield.BP_FlagForcefield_C.UserConstructionScript");

	ABP_FlagForcefield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagForcefield.BP_FlagForcefield_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FlagForcefield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagForcefield.BP_FlagForcefield_C.ReceiveBeginPlay");

	ABP_FlagForcefield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagForcefield.BP_FlagForcefield_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlagForcefield_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagForcefield.BP_FlagForcefield_C.ReceiveTick");

	ABP_FlagForcefield_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagForcefield.BP_FlagForcefield_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlagForcefield_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagForcefield.BP_FlagForcefield_C.ReceiveActorBeginOverlap");

	ABP_FlagForcefield_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagForcefield.BP_FlagForcefield_C.ExecuteUbergraph_BP_FlagForcefield
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlagForcefield_C::ExecuteUbergraph_BP_FlagForcefield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagForcefield.BP_FlagForcefield_C.ExecuteUbergraph_BP_FlagForcefield");

	ABP_FlagForcefield_C_ExecuteUbergraph_BP_FlagForcefield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
