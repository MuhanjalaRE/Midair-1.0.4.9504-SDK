#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_PR-Shooting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_ProjectileOverlap_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature
struct APR_Shooting_C_BndEvt__Trigger_ProjectileOverlap_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_MovingOverlapCheck_K2Node_ActorBoundEvent_22_ActorEndOverlapSignature__DelegateSignature
struct APR_Shooting_C_BndEvt__Trigger_MovingOverlapCheck_K2Node_ActorBoundEvent_22_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Shooting.PR-Shooting_C.ReceiveBeginPlay
struct APR_Shooting_C_ReceiveBeginPlay_Params
{
};

// Function PR-Shooting.PR-Shooting_C.ReceiveTick
struct APR_Shooting_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_UnlimitedAmmo_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature
struct APR_Shooting_C_BndEvt__Trigger_UnlimitedAmmo_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Shooting.PR-Shooting_C.BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature
struct APR_Shooting_C_BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Shooting.PR-Shooting_C.Lesson Started
struct APR_Shooting_C_Lesson_Started_Params
{
	struct FName                                       RelevantLesson;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Shooting.PR-Shooting_C.Lesson Ended
struct APR_Shooting_C_Lesson_Ended_Params
{
	struct FName                                       RelevantLesson;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Shooting.PR-Shooting_C.TimeFailure
struct APR_Shooting_C_TimeFailure_Params
{
};

// Function PR-Shooting.PR-Shooting_C.ResetTimeFailure
struct APR_Shooting_C_ResetTimeFailure_Params
{
};

// Function PR-Shooting.PR-Shooting_C.TimeFailure_Inner
struct APR_Shooting_C_TimeFailure_Inner_Params
{
	TArray<struct FTutorialDialougeDetails>            Possible_Sounds;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PR-Shooting.PR-Shooting_C.CannedDeathFailure_Inner
struct APR_Shooting_C_CannedDeathFailure_Inner_Params
{
	TArray<struct FTutorialDialougeDetails>            Possible_Sounds;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PR-Shooting.PR-Shooting_C.OnPlayerDeath
struct APR_Shooting_C_OnPlayerDeath_Params
{
};

// Function PR-Shooting.PR-Shooting_C.BndEvt__Trigger_ApproachedDoor_K2Node_ActorBoundEvent_220_ActorBeginOverlapSignature__DelegateSignature
struct APR_Shooting_C_BndEvt__Trigger_ApproachedDoor_K2Node_ActorBoundEvent_220_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Shooting.PR-Shooting_C.ExecuteUbergraph_PR-Shooting
struct APR_Shooting_C_ExecuteUbergraph_PR_Shooting_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
