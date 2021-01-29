#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_DeployableMotionSensor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DeployableMotionSensor.BP_DeployableMotionSensor_C
// 0x0028 (0x0488 - 0x0460)
class ABP_DeployableMotionSensor_C : public AMAAsset
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Motionsensor;                                           // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USensorNetworkComponent*                     SensorNetwork;                                            // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  OnTargetedActorSound;                                     // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeployableMotionSensor.BP_DeployableMotionSensor_C");
		return ptr;
	}


	float GetPlacementVisualRadius();
	void UserConstructionScript();
	void BndEvt__SensorNetwork_K2Node_ComponentBoundEvent_0_OnTargetAcquired__DelegateSignature(class UTargetComponent* Target);
	void NM_TargetAcquirred();
	void ExecuteUbergraph_BP_DeployableMotionSensor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
