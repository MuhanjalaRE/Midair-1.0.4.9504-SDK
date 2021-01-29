#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_HoverTank_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HoverTank.BP_HoverTank_C
// 0x0090 (0x0730 - 0x06A0)
class ABP_HoverTank_C : public AHoverTankVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_HoverDust;                                              // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BigPontoon;                                               // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Pontoon;                                                  // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Pontoon6;                                                 // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Pontoon5;                                                 // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Pontoon4;                                                 // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Pontoon3;                                                 // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Pontoon2;                                                 // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               EntryBox;                                                 // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SKM_HoverTank_Barrel;                                     // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SKM_HoverTank_TurretB;                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SKM_HoverTank_TurretA;                                    // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SKM_HoverTank_MachineGun;                                 // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverLevelingAngularDampeningTotal;                       // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverLevelingAngularTotal;                                // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Test;                                                     // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              TankReversingBeepDuration;                                // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScanDownDist;                                             // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoverTank.BP_HoverTank_C");
		return ptr;
	}


	bool TankGoingBackwards();
	bool TankIsReversing();
	void ApplyLeveling(float DeltaSeconds);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__VehicleMovementComponent_K2Node_ComponentBoundEvent_0_OnVehicleTick__DelegateSignature(float DeltaTime);
	void ReceiveBeginPlay();
	void OnEnterNewTankMode();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_HoverTank(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
