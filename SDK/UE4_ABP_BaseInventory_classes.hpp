#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_BaseInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_BaseInventory.ABP_BaseInventory_C
// 0x0ABE (0x0E36 - 0x0378)
class UABP_BaseInventory_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_72432768473CBCFCE2EE168D5E3965DD;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CFAB5E8E4C6B85A530B4D7BC1BD1B737;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CC83D314008BBE10547B0B025355236;// 0x0450(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EB8F9F04C48E6CC9D51059099DEDD48;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2BF4A7ED4C9BC2827D885A9EF9F7ED35;// 0x0550(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_731AF4584796B510CE7CA190A9FAF53F;// 0x05D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D5FECE474CDF505BB8CE9B8C03BC5211;// 0x0650(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8D9DD7CD4F0AF9BE897938BAE7739D9C;// 0x06D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F2C7ECE745D8B6B37D5DB0BF3A37FBB4;// 0x0740(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71F9BF2F4796D3917D548BBB5EC039C7;// 0x0788(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_278F2D8C4586FC609AFEF18107900B58;// 0x07F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54B337A34A639304337135BA97504A8E;// 0x0840(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_34E0F1EE4A2A822B39CBD8BC6F6091C6;// 0x08B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_266811FE4BF6A3642B8A29BC7F8C695C;// 0x08F8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_09A8A74F46EDEF7E90AEED85F8F17677;// 0x0968(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FAA2080245FB85A5BD6F40BF5366F0BD;// 0x09D8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7987DB9B45E96E43F9BCECAE3284E4BE;// 0x0A48(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96999A8C4A18DC3FB3991AA4B5D52CF2;// 0x0AB8(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_C1B70B6D47EA13FB94926DA9FC692D46;// 0x0B28(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4B29A27F401DFD4556CC58982EFE5F5D;// 0x0BF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0101D0A94CDF30AA91906CAB99106B91;// 0x0C40(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_164C89CD45C205504828AAB2F447C4A8;// 0x0CB0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_98E2452A4C84B1DDD9117B8EE1386D21;// 0x0CF8(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_991F8266447F4B0EF98C54BCD9E44800;      // 0x0DD0(0x0060)
	int                                                CurrentIdleIndex;                                         // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPowered;                                                // 0x0E34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAlive;                                                  // 0x0E35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BaseInventory.ABP_BaseInventory_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseInventory_AnimGraphNode_TransitionResult_2BF4A7ED4C9BC2827D885A9EF9F7ED35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseInventory_AnimGraphNode_TransitionResult_731AF4584796B510CE7CA190A9FAF53F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseInventory_AnimGraphNode_TransitionResult_D5FECE474CDF505BB8CE9B8C03BC5211();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseInventory_AnimGraphNode_TransitionResult_4CC83D314008BBE10547B0B025355236();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseInventory_AnimGraphNode_BlendListByInt_C1B70B6D47EA13FB94926DA9FC692D46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseInventory_AnimGraphNode_TransitionResult_CFAB5E8E4C6B85A530B4D7BC1BD1B737();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseInventory_AnimGraphNode_TransitionResult_9EB8F9F04C48E6CC9D51059099DEDD48();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_FinishIdle();
	void ExecuteUbergraph_ABP_BaseInventory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
