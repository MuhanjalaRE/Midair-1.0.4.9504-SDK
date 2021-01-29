#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_PR-Movement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PR-Movement.PR-Movement_C.BndEvt__Failstate_3-2_BottomDetector_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature
struct APR_Movement_C_BndEvt__Failstate_3_2_BottomDetector_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Movement.PR-Movement_C.BndEvt__Failstate_3-2_DidLandBottomLedge_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature
struct APR_Movement_C_BndEvt__Failstate_3_2_DidLandBottomLedge_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Movement.PR-Movement_C.BndEvt__Failstate_3-2_DidLandTopLedge_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature
struct APR_Movement_C_BndEvt__Failstate_3_2_DidLandTopLedge_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Movement.PR-Movement_C.BndEvt__Failstate_3-2_NearTop_K2Node_ActorBoundEvent_17_ActorBeginOverlapSignature__DelegateSignature
struct APR_Movement_C_BndEvt__Failstate_3_2_NearTop_K2Node_ActorBoundEvent_17_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Movement.PR-Movement_C.ReceiveBeginPlay
struct APR_Movement_C_ReceiveBeginPlay_Params
{
};

// Function PR-Movement.PR-Movement_C.BndEvt__Trigger_Exit_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct APR_Movement_C_BndEvt__Trigger_Exit_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Movement.PR-Movement_C.Lesson Started
struct APR_Movement_C_Lesson_Started_Params
{
	struct FName                                       RelevantLesson;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Movement.PR-Movement_C.Lesson Ended
struct APR_Movement_C_Lesson_Ended_Params
{
	struct FName                                       RelevantLesson;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PR-Movement.PR-Movement_C.TimeFailure
struct APR_Movement_C_TimeFailure_Params
{
};

// Function PR-Movement.PR-Movement_C.ResetTimeFailure
struct APR_Movement_C_ResetTimeFailure_Params
{
};

// Function PR-Movement.PR-Movement_C.TimeFailure_Inner
struct APR_Movement_C_TimeFailure_Inner_Params
{
	TArray<struct FTutorialDialougeDetails>            Possible_Sounds;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PR-Movement.PR-Movement_C.CannedDeathFailure_Inner
struct APR_Movement_C_CannedDeathFailure_Inner_Params
{
	TArray<struct FTutorialDialougeDetails>            Possible_Sounds;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PR-Movement.PR-Movement_C.OnPlayerDeath
struct APR_Movement_C_OnPlayerDeath_Params
{
};

// Function PR-Movement.PR-Movement_C.ExecuteUbergraph_PR-Movement
struct APR_Movement_C_ExecuteUbergraph_PR_Movement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
