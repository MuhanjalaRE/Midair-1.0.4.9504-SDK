#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_PR-Shooting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PR-Shooting.PR-Shooting_C
// 0x01B8 (0x0548 - 0x0390)
class APR_Shooting_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UTutorialDialougeManager*                    DialougeManager;                                          // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APRGameMode*                                 PRGameMode;                                               // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentTimeFailureIndex;                                  // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TMap<struct FName, struct FTutorialDialougeDetails> OutroMap;                                                 // 0x03B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, struct FTutorialDialougeDetails> IntroMap;                                                 // 0x0400(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRandomizeTimeFailureCue;                                 // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	TArray<struct FTutorialDialougeDetails>            TimeFailures_StaticTargets;                               // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_MovingTargets;                               // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_Repair;                                      // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_Inventory;                                   // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTutorialDialougeDetails>            TimeFailures_Base;                                        // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRandomizeDeathFailureCue;                                // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	TArray<struct FTutorialDialougeDetails>            DeathFailures_Base;                                       // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                TimeFailureHandle;                                        // 0x04C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TooLongWaitDuration;                                      // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                _1_LowAmmoCount;                                          // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                _1_1_TooManyStaticTargets;                                // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumDestroyedMovingTargets;                                // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                _1_2_TooFewDestroyedMovingTargets;                        // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	struct FTutorialDialougeDetails                    _1_1_AimBetterScrub;                                      // 0x04E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTutorialDialougeDetails                    _1_2_LeadYourTargets;                                     // 0x04F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTutorialDialougeDetails                    _2_1_ChangeArmor;                                         // 0x0510(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ATriggerVolume*                              Trigger_MovingOverlapCheck_ExecuteUbergraph_PR_Shooting_RefProperty;// 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_BaseInventory_C*                         BP_BaseInventory_410_ExecuteUbergraph_PR_Shooting_RefProperty;// 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerVolume*                              Trigger_RepairTrigger_ExecuteUbergraph_PR_Shooting_RefProperty;// 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_AnimatedDoor_C*                          BP_AnimatedDoor_398_ExecuteUbergraph_PR_Shooting_RefProperty;// 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PR-Shooting.PR-Shooting_C");
		return ptr;
	}


	void BndEvt__Trigger_ProjectileOverlap_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Trigger_MovingOverlapCheck_K2Node_ActorBoundEvent_22_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__Trigger_UnlimitedAmmo_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void Lesson_Started(const struct FName& RelevantLesson);
	void Lesson_Ended(const struct FName& RelevantLesson);
	void TimeFailure();
	void ResetTimeFailure();
	void TimeFailure_Inner(TArray<struct FTutorialDialougeDetails> Possible_Sounds);
	void CannedDeathFailure_Inner(TArray<struct FTutorialDialougeDetails> Possible_Sounds);
	void OnPlayerDeath();
	void BndEvt__Trigger_ApproachedDoor_K2Node_ActorBoundEvent_220_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void ExecuteUbergraph_PR_Shooting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
