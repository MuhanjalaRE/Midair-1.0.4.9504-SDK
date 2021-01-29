#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_RepairGun_Attachment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RepairGun_Attachment.BP_RepairGun_Attachment_C
// 0x0040 (0x0758 - 0x0718)
class ABP_RepairGun_Attachment_C : public AMAWeaponAttachment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    RepairMF;                                                 // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RepairSparks;                                             // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RepairBeam;                                               // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetTangent;                                            // 0x0738(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_1;                                                 // 0x0744(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class AActor*                                      RepairTarget;                                             // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RepairGun_Attachment.BP_RepairGun_Attachment_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Set_Beam_Color(const struct FVector& InputPin);
	void ExecuteUbergraph_BP_RepairGun_Attachment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
