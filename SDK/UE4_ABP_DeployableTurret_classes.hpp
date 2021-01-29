#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_DeployableTurret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_DeployableTurret.ABP_DeployableTurret_C
// 0x08AD (0x0C25 - 0x0378)
class UABP_DeployableTurret_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EC14AA6B4E3BBCF281556FA6587FBC95;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_250443C6493F30B38502F48C1D88AE8D;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6424CCA94ACEBCFA18F13895E8DF6A06;// 0x0450(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_462AE24F425C55537821F4A038BD723C;// 0x04D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A8446F2044804253AED941AE65D80990;// 0x0540(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4AB474F04A325E49116C2F9C0FB20941;// 0x0588(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_22179F3441F6655937AF1783C5AE5F10;// 0x05F8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F149ECFC49D8A386C29DDA82997FCE42;// 0x0670(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5D490F1A46954DD83FF2138019153B61;// 0x06E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61194E2C4285781F7197D48906977217;// 0x0728(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_066D701B474202070CE137ACCA209936;// 0x0798(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_050231614EE690DAFA49C09B63615754;// 0x07E0(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7238F6F243BC83305057F08C4C0B4972;      // 0x08B8(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_55E3ACD8485D1AB0F1EC1FB95B45D8BC;// 0x0918(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E91B102E4887E99BC6692888D1147BE1;// 0x09C0(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B278F0D64529C8C2DFEA3F8B47A254E6;// 0x0A10(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2C0F32874A53FFE9592127AD0F65478F;// 0x0AC8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_354FE45544F47E4E72B5CFA270A19425;// 0x0B10(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14BED426431672B81EFD84AF2D9FB2AC;// 0x0B58(0x00B8)
	float                                              Yaw;                                                      // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x0C14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C15(0x0003) MISSED OFFSET
	class AMATurretAsset*                              Owner;                                                    // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowHealth;                                                // 0x0C24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_DeployableTurret.ABP_DeployableTurret_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableTurret_AnimGraphNode_ApplyAdditive_22179F3441F6655937AF1783C5AE5F10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableTurret_AnimGraphNode_TransitionResult_6424CCA94ACEBCFA18F13895E8DF6A06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableTurret_AnimGraphNode_ModifyBone_B278F0D64529C8C2DFEA3F8B47A254E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableTurret_AnimGraphNode_ModifyBone_14BED426431672B81EFD84AF2D9FB2AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableTurret_AnimGraphNode_TransitionResult_250443C6493F30B38502F48C1D88AE8D();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_DeployableTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
