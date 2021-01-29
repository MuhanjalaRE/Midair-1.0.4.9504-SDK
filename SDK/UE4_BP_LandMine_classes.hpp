#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_LandMine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LandMine.BP_LandMine_C
// 0x0020 (0x0970 - 0x0950)
class ABP_LandMine_C : public AMAProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0950(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MineExclusionRadiusMultiplier;                            // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	class UAudioComponent*                             DeployingLoopSound;                                       // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LandMine.BP_LandMine_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void BP_Activate();
	void BP_StartArm();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void BP_FinishedArm();
	void ReceiveDestroyed();
	void OnRep_TeamID();
	void ExecuteUbergraph_BP_LandMine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
