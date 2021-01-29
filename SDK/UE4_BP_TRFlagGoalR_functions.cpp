// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_TRFlagGoalR_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TRFlagGoalR_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.UserConstructionScript");

	ABP_TRFlagGoalR_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TRFlagGoalR_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.ReceiveActorBeginOverlap");

	ABP_TRFlagGoalR_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TRFlagGoalR_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.ReceiveTick");

	ABP_TRFlagGoalR_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.ExecuteUbergraph_BP_TRFlagGoalR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TRFlagGoalR_C::ExecuteUbergraph_BP_TRFlagGoalR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TRFlagGoalR.BP_TRFlagGoalR_C.ExecuteUbergraph_BP_TRFlagGoalR");

	ABP_TRFlagGoalR_C_ExecuteUbergraph_BP_TRFlagGoalR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
