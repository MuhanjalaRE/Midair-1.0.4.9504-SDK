#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_WaterTurret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_WaterTurret.ABP_WaterTurret_C
// 0x0246 (0x05BE - 0x0378)
class UABP_WaterTurret_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_03D9E6204192B2B3435D3E85FCAEEA6B;      // 0x0380(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BDCFB39842E9347A3FA1DFB6E43FDF38;// 0x03C8(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_67EA53CC4724EB4CA04DD8858B7637BB;// 0x0480(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F959721644303816E77D8882EEB22B21;// 0x04C8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_80C5727747D2D744D1D32CA92A32BE5D;      // 0x0500(0x0060)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1D64BD2D4281B98389486E8CDCBB445A;// 0x0560(0x0048)
	class AMATurretAsset*                              Owner;                                                    // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurretRotation;                                           // 0x05B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x05BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowHealth;                                                // 0x05BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_WaterTurret.ABP_WaterTurret_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WaterTurret_AnimGraphNode_ModifyBone_BDCFB39842E9347A3FA1DFB6E43FDF38();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_WaterTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
