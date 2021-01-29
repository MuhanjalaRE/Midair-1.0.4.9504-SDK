// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_TRFlagGoalB_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TRFlagGoalB_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.UserConstructionScript");

	ABP_TRFlagGoalB_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TRFlagGoalB_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.ReceiveActorBeginOverlap");

	ABP_TRFlagGoalB_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TRFlagGoalB_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.ReceiveTick");

	ABP_TRFlagGoalB_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.ExecuteUbergraph_BP_TRFlagGoalB
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TRFlagGoalB_C::ExecuteUbergraph_BP_TRFlagGoalB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TRFlagGoalB.BP_TRFlagGoalB_C.ExecuteUbergraph_BP_TRFlagGoalB");

	ABP_TRFlagGoalB_C_ExecuteUbergraph_BP_TRFlagGoalB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
