#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_BaseTurret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_BaseTurret.ABP_BaseTurret_C
// 0x0B32 (0x0EAA - 0x0378)
class UABP_BaseTurret_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_854C02B64C0B90DC317B37BE2E01336D;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8D38E774204E4C0E5DA77BCF117E690;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27D1EF004C11277496743AB797249CD3;// 0x0450(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5DFC742B4D7C341D21247488777286FE;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1094D9274FBBC9BA5E460582A14DD935;// 0x0550(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E13B548B4689CF4FB0D9A78E01A0A684;// 0x05D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60D1DB714D57CB6C46E11AB8B30F0FC6;// 0x0650(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9E2F90334CE0FABF034B6D8063575661;// 0x06C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_529E97814C56E4BEDCCE86AADC88B9B8;// 0x0708(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4B739525402CD824EF5D538A60F3814A;// 0x0778(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5C9A277D49387BF6ADDA339875FD540B;// 0x07C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4EC44EBE40E170E64F280CB82BDFD815;// 0x0830(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_471EE7494C79A11DEC2498941E74EA59;// 0x0878(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D9A4E1694A322FDB4B98F88A9C7A0250;// 0x08E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D07A3EBA4048E3A3274B3FA98C58CCED;// 0x0930(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A1B2D282457DE91E9A10F99CCA261C23;// 0x0A08(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CE86A5A0462B5CBB5A1800B013999C27;// 0x0AB0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3D6EB4F04E625CEAD72DF0A4C4E0D07A;// 0x0B00(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9FEB54264160C7B431F476A7E135A89F;// 0x0C28(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_374343464C2630A44FDA069C88E6A9D3;// 0x0CA0(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3226412F47F49EC87CCB6CA7B9A50C74;// 0x0D18(0x0128)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7E08339C45BE281EDB2AF3A20DA83C60;      // 0x0E40(0x0060)
	float                                              Pitch;                                                    // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Active;                                                   // 0x0EA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dead;                                                     // 0x0EA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BaseTurret.ABP_BaseTurret_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseTurret_AnimGraphNode_TransitionResult_1094D9274FBBC9BA5E460582A14DD935();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseTurret_AnimGraphNode_TransitionResult_E13B548B4689CF4FB0D9A78E01A0A684();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseTurret_AnimGraphNode_TransitionResult_5DFC742B4D7C341D21247488777286FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseTurret_AnimGraphNode_TransitionResult_27D1EF004C11277496743AB797249CD3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseTurret_AnimGraphNode_BlendSpacePlayer_3D6EB4F04E625CEAD72DF0A4C4E0D07A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseTurret_AnimGraphNode_ApplyAdditive_374343464C2630A44FDA069C88E6A9D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseTurret_AnimGraphNode_BlendSpacePlayer_3226412F47F49EC87CCB6CA7B9A50C74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseTurret_AnimGraphNode_TransitionResult_D8D38E774204E4C0E5DA77BCF117E690();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_BaseTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
