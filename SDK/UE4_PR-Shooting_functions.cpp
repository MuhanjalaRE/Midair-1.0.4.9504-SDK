// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_PR-Shooting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_ProjectileOverlap_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APR_Shooting_C::BndEvt__Trigger_ProjectileOverlap_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_ProjectileOverlap_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature");

	APR_Shooting_C_BndEvt__Trigger_ProjectileOverlap_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_MovingOverlapCheck_K2Node_ActorBoundEvent_22_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APR_Shooting_C::BndEvt__Trigger_MovingOverlapCheck_K2Node_ActorBoundEvent_22_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_MovingOverlapCheck_K2Node_ActorBoundEvent_22_ActorEndOverlapSignature__DelegateSignature");

	APR_Shooting_C_BndEvt__Trigger_MovingOverlapCheck_K2Node_ActorBoundEvent_22_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APR_Shooting_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.ReceiveBeginPlay");

	APR_Shooting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APR_Shooting_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.ReceiveTick");

	APR_Shooting_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_UnlimitedAmmo_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APR_Shooting_C::BndEvt__Trigger_UnlimitedAmmo_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_UnlimitedAmmo_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature");

	APR_Shooting_C_BndEvt__Trigger_UnlimitedAmmo_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APR_Shooting_C::BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature");

	APR_Shooting_C_BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.Lesson Started
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RelevantLesson                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APR_Shooting_C::Lesson_Started(const struct FName& RelevantLesson)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.Lesson Started");

	APR_Shooting_C_Lesson_Started_Params params;
	params.RelevantLesson = RelevantLesson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.Lesson Ended
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RelevantLesson                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APR_Shooting_C::Lesson_Ended(const struct FName& RelevantLesson)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.Lesson Ended");

	APR_Shooting_C_Lesson_Ended_Params params;
	params.RelevantLesson = RelevantLesson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.TimeFailure
// (BlueprintCallable, BlueprintEvent)

void APR_Shooting_C::TimeFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.TimeFailure");

	APR_Shooting_C_TimeFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.ResetTimeFailure
// (BlueprintCallable, BlueprintEvent)

void APR_Shooting_C::ResetTimeFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.ResetTimeFailure");

	APR_Shooting_C_ResetTimeFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.TimeFailure_Inner
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTutorialDialougeDetails> Possible_Sounds                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void APR_Shooting_C::TimeFailure_Inner(TArray<struct FTutorialDialougeDetails> Possible_Sounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.TimeFailure_Inner");

	APR_Shooting_C_TimeFailure_Inner_Params params;
	params.Possible_Sounds = Possible_Sounds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.CannedDeathFailure_Inner
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTutorialDialougeDetails> Possible_Sounds                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void APR_Shooting_C::CannedDeathFailure_Inner(TArray<struct FTutorialDialougeDetails> Possible_Sounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.CannedDeathFailure_Inner");

	APR_Shooting_C_CannedDeathFailure_Inner_Params params;
	params.Possible_Sounds = Possible_Sounds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.OnPlayerDeath
// (BlueprintCallable, BlueprintEvent)

void APR_Shooting_C::OnPlayerDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.OnPlayerDeath");

	APR_Shooting_C_OnPlayerDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_ApproachedDoor_K2Node_ActorBoundEvent_220_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APR_Shooting_C::BndEvt__Trigger_ApproachedDoor_K2Node_ActorBoundEvent_220_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_ApproachedDoor_K2Node_ActorBoundEvent_220_ActorBeginOverlapSignature__DelegateSignature");

	APR_Shooting_C_BndEvt__Trigger_ApproachedDoor_K2Node_ActorBoundEvent_220_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PR-Shooting.PR-Shooting_C.ExecuteUbergraph_PR-Shooting
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APR_Shooting_C::ExecuteUbergraph_PR_Shooting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PR-Shooting.PR-Shooting_C.ExecuteUbergraph_PR-Shooting");

	APR_Shooting_C_ExecuteUbergraph_PR_Shooting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
