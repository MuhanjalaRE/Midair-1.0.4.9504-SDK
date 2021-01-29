#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_IndoorTurret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_IndoorTurret.ABP_IndoorTurret_C
// 0x0246 (0x05BE - 0x0378)
class UABP_IndoorTurret_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9A175A2F43E987C7277237B261FC11BA;      // 0x0380(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D8FEACD840A09A0A29D0918E0189C11B;// 0x03C8(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0E71C1AA4A4FCE70E7D7D28FC6D25083;// 0x0480(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C89E938148FD15C0FD3DF3B70E01C8FF;// 0x04C8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7AE0D1FF4104A405B423F085DAC4FA0B;      // 0x0500(0x0060)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_538C54D34B417875D6C8FC858A4E66B6;// 0x0560(0x0048)
	class AMATurretAsset*                              Owner;                                                    // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurretRotation;                                           // 0x05B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x05BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowHealth;                                                // 0x05BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_IndoorTurret.ABP_IndoorTurret_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_IndoorTurret_AnimGraphNode_ModifyBone_D8FEACD840A09A0A29D0918E0189C11B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_IndoorTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
