#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_PR-Movement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PR-Movement.PR-Movement_C
// 0x0298 (0x0628 - 0x0390)
class APR_Movement_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class APRGameMode*                                 PRGameMode;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UTutorialDialougeManager*                    DialougeManager;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FTutorialDialougeDetails> IntroMap;                                                 // 0x03A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, struct FTutorialDialougeDetails> OutroMap;                                                 // 0x03F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TooLongWaitDuration;                                      // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimeFailureHandle;                                        // 0x0450(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentTimeFailureIndex;                                  // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	TArray<struct FTutorialDialougeDetails>            TimeFailures_Jumping;                                     // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_JettingUpPlats;                              // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_JettingAcrossPits;                           // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_JettingToLedge;                              // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_JettingAroundCorner;                         // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_BasicSkiing;                                 // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_SkiingAndJetting;                            // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_ChainedSkiiJet;                              // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRandomizeTimeFailureCue;                                 // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	TArray<struct FTutorialDialougeDetails>            DeathFailures_Jumping;                                    // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            DeathFailures_JettingUpPlats;                             // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            DeathFailures_JettingAcrossPits;                          // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            DeathFailures_JettingToLedge;                             // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            DeathFailures_JettingAroundCorner;                        // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            DeathFailures_BasicSkiing;                                // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            DeathFailures_SkiingAndJetting;                           // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            DeathFailures_ChainedSkiiJet;                             // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentDeathFailureIndex;                                 // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRandomizeDeathFailureCue;                                // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDidAlmostGetThere;                                       // 0x056D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDidLandTopLedge;                                         // 0x056E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDidLandBottomLedge;                                      // 0x056F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumTimesFail;                                             // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TimesFailBeforeCoaching;                                  // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTutorialDialougeDetails                    _3_2_AlmostThere;                                         // 0x0578(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTutorialDialougeDetails                    _3_2_WaitASec;                                            // 0x0590(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTutorialDialougeDetails                    _3_2_TryLedges;                                           // 0x05A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTutorialDialougeDetails                    _3_2_ManageEnergy;                                        // 0x05C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTutorialDialougeDetails                    _3_2_HoldingW;                                            // 0x05D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTutorialDialougeDetails                    _3_2_IDontEvenKnow;                                       // 0x05F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTutorialDialougeDetails                    _3_2_DidYouGiveUp;                                        // 0x0608(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ATriggerBox*                                 Failstate_3_2_NearBottomDetector_ExecuteUbergraph_PR_Movement_RefProperty;// 0x0620(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PR-Movement.PR-Movement_C");
		return ptr;
	}


	void BndEvt__Failstate_3_2_BottomDetector_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Failstate_3_2_DidLandBottomLedge_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Failstate_3_2_DidLandTopLedge_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Failstate_3_2_NearTop_K2Node_ActorBoundEvent_17_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void ReceiveBeginPlay();
	void BndEvt__Trigger_Exit_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void Lesson_Started(const struct FName& RelevantLesson);
	void Lesson_Ended(const struct FName& RelevantLesson);
	void TimeFailure();
	void ResetTimeFailure();
	void TimeFailure_Inner(TArray<struct FTutorialDialougeDetails> Possible_Sounds);
	void CannedDeathFailure_Inner(TArray<struct FTutorialDialougeDetails> Possible_Sounds);
	void OnPlayerDeath();
	void ExecuteUbergraph_PR_Movement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
