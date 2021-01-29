#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Character_1P_New_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Character_1P_New.ABP_Character_1P_New_C
// 0x18A0 (0x1C18 - 0x0378)
class UABP_Character_1P_New_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_57FC70AB455A51C7A1CE01BAF1767554;      // 0x0380(0x0048)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_48F3083C406DF4C2047428A7ADDECFB1;// 0x03C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C82F5DFE426AB96257CEA2A7048A9569;// 0x0498(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4025F686414C361D738E5C9EB9523B5C;// 0x0568(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B40C897143882210A50201869AD6A792;// 0x0610(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FEC057704E6918A7229D52AB6F5DB72E;// 0x0660(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5C231B62405E2619C3D40692DF5290B4;// 0x06B0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EE1FAFE74F67D8F7A43C2093E9FC4132;// 0x0758(0x0050)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_22E4FE134EB579A867C1BF813F1FF2E4;  // 0x07A8(0x00A8)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2AE667D344DFF91944DB6A84B7F75EF1; // 0x0850(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EDB70CD4452BC1774FB2C8BEB652ECBF;// 0x0930(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E50FE0AC46CB1B0A5BC0E0A0D238120E;// 0x0978(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3AC5DAFD4835633CC92B60B7160B9272;// 0x09C0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9B534EDE4A448E3561EDA3A813A89C67;// 0x0AA0(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5EB213CF4245EF86101E08957B8B6120;// 0x0B48(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DD01D68F4EE8A9BC764B36AA60D89B16;      // 0x0C18(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C51EE66540065EDE74DC4C91ABB88135;      // 0x0C78(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CD3A6C9C4A1FC4B0F9E0A9822B82FCD3;// 0x0CD8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14BE78A24D9DE57EF2C166BE76E34CBE;// 0x0D28(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_436149AA40FEBE389ABEBCAE69FC8474;// 0x0D78(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2FF831434ECC20A89DBC29A7F0AB29B5;// 0x0DE8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8A0C1EB44C42BA854D877FA259E0165C;// 0x0E58(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4B1CD7D547E48832AE9897B6C44FAC65;// 0x0EC8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9448D6F9496E5856130AB79A65ACF650;// 0x0F38(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2AECA67447D089BB802F788E846AF378;      // 0x0FA8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9787295945C08181BF56329E908DF007;// 0x1008(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3FA361954AFE856A10A19E9570460663;// 0x1078(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F9C145EB471327B7D1D976B60E7EBCE6;// 0x10E8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0BABF0F646565099A36BF1A89C348310;// 0x1190(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5689FFA240162FEBD979E293A090F035;// 0x11E0(0x0050)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_4019AF3F4FA723FBD6CC288283978B9C;// 0x1230(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C95ADC33449BCE071D6124809D08950B;// 0x12A8(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_8BB2B5D4414C74A5EB7207BD7384FBD1;// 0x1318(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A96721854493B122ED3E35AAD143CE32;// 0x13E8(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_592DAEC9459CD4F6412700B822858725;// 0x1458(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D4A429B94161A0ED57182E9F5D03CFA1;// 0x14D0(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB459BEA4B558DCDBBCA198706F2CD52;// 0x15F8(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_048AE07F404B373826E4BDA417B99906;      // 0x1668(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_95E61DF245C2B97734CAA78DBA3FD261;// 0x16C8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2D48985D4497A9FF9C6409AB50AC5962;// 0x1770(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CD57639A446277448A5406AA9630C28B;// 0x17C0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19FA5E42423936ACBDEF278D3D3FEDFF;// 0x18A0(0x0050)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9F397FE045503B48BF50289735B4FE88;  // 0x18F0(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_AB4734D5426F30EF927608A1A7EF742B;  // 0x1998(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_097E86734DA5FA5D5EE204B9522F041F;// 0x1A40(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_051796C345505E256999B59C0ED3BC2F;// 0x1A88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C5DA7DB84853B11A5CE81EA7DCB3088F;// 0x1AD0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3268F1C54547E833325AD49D45D47F54;// 0x1B40(0x0070)
	float                                              YawInertia;                                               // 0x1BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchInertia;                                             // 0x1BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Stance;                                                   // 0x1BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseForegrip;                                              // 0x1BBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1BBD(0x0003) MISSED OFFSET
	float                                              SpeedScale2D;                                             // 0x1BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1BC4(0x0004) MISSED OFFSET
	class AMACharacter*                                Owner;                                                    // 0x1BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastControlRotation;                                      // 0x1BD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPitchInertiaRate;                                      // 0x1BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAccelerationInertia;                                   // 0x1BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastVelocityZ;                                            // 0x1BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxYawInertiaRate;                                        // 0x1BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchInertaZeroRate;                                      // 0x1BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawInertiaZeroRate;                                       // 0x1BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_IO;                                                   // 0x1BF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1BF5(0x0003) MISSED OFFSET
	class UAnimMontage*                                Debug_Montage_1;                                          // 0x1BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Debug_Montage_Freq;                                       // 0x1C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IO_Scale;                                                 // 0x1C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Debug_Montage_2;                                          // 0x1C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Play_Montage_1;                                           // 0x1C10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Play_Montage_2;                                           // 0x1C11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x1C12(0x0002) MISSED OFFSET
	int                                                Movement_State;                                           // 0x1C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Character_1P_New.ABP_Character_1P_New_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_1P_New_AnimGraphNode_ApplyAdditive_592DAEC9459CD4F6412700B822858725();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_1P_New_AnimGraphNode_BlendSpacePlayer_D4A429B94161A0ED57182E9F5D03CFA1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_1P_New_AnimGraphNode_BlendListByBool_C82F5DFE426AB96257CEA2A7048A9569();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_1P_New_AnimGraphNode_BlendListByInt_48F3083C406DF4C2047428A7ADDECFB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_1P_New_AnimGraphNode_SequencePlayer_C95ADC33449BCE071D6124809D08950B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_OnFootStep();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_1P_New_AnimGraphNode_BlendListByBool_5EB213CF4245EF86101E08957B8B6120();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_1P_New_AnimGraphNode_BlendListByInt_8BB2B5D4414C74A5EB7207BD7384FBD1();
	void AnimNotify_OnGrabAmmo();
	void AnimNotify_OnReleaseAmmo();
	void Play_Debug_Montage_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_1P_New_AnimGraphNode_LayeredBoneBlend_3AC5DAFD4835633CC92B60B7160B9272();
	void ExecuteUbergraph_ABP_Character_1P_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
