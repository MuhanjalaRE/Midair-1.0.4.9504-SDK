#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Generator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Generator.ABP_Generator_C
// 0x04E2 (0x085A - 0x0378)
class UABP_Generator_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A838848740A948BFEF9568B1C05FB976;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FB7885574B37A06BAE4AA9963E594737;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E22198FF472EFCC76BDA38AF06D5DE60;// 0x0450(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D69BFD7B49D2DC28648F308EEE695845;// 0x04D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_20F4A2484A35ED8240CC808E19955386;// 0x0540(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3AC8BED74B3F051E76867B972B0E5BE4;// 0x0588(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8A03A95740C27DCE60B082834A925060;// 0x0658(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_02A497B9484745A233A2A39992FDF444;// 0x06C8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_01D79E7740BBDB38F6D4AC91C73668BC;// 0x0738(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B1585B5345D720098D7D9B9FF1DEC5DD;// 0x0780(0x00D8)
	bool                                               IsAlive;                                                  // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDamaged;                                                // 0x0859(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Generator.ABP_Generator_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Generator_AnimGraphNode_TransitionResult_E22198FF472EFCC76BDA38AF06D5DE60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Generator_AnimGraphNode_BlendListByBool_3AC8BED74B3F051E76867B972B0E5BE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Generator_AnimGraphNode_TransitionResult_FB7885574B37A06BAE4AA9963E594737();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_Generator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
