#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_RepairTool_1P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_RepairTool_1P.ABP_RepairTool_1P_C
// 0x0539 (0x08B1 - 0x0378)
class UABP_RepairTool_1P_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CB222771477CDF1D331ED7842B69FCC6;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E14E91045FDF01ECA7BBB9DC2BDABB5;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DEE713384215976B68B91AA97E488E3D;// 0x0450(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55082B154419F1B2CE14968F5B3ED4D8;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54C9EED94A388617883199902DE86BE2;// 0x0550(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8FE822D7439D9A8B234242A1D1470C8D;// 0x05D0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FA88C7A74334DAC522A63A90B7BED013;// 0x0618(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E1D7E9914F4EF73734DE2B9076E4BB5E;// 0x0660(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5DDCBCC4C1D88541D5649B532A9D51C;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4175DA994A2551EB7DA33DB1F53335D4;// 0x0718(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C03C216A4D800C7A85189F9BF2602C70;// 0x0788(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2E9ACCFC4271C4DE347A44A290C0C88B;// 0x07D0(0x00D8)
	class ABP_RepairGun_Attachment_C*                  Owning_Attachment;                                        // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Firing;                                                // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RepairTool_1P.ABP_RepairTool_1P_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RepairTool_1P_AnimGraphNode_TransitionResult_55082B154419F1B2CE14968F5B3ED4D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RepairTool_1P_AnimGraphNode_TransitionResult_54C9EED94A388617883199902DE86BE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RepairTool_1P_AnimGraphNode_TransitionResult_9E14E91045FDF01ECA7BBB9DC2BDABB5();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RepairTool_1P_AnimGraphNode_TransitionResult_DEE713384215976B68B91AA97E488E3D();
	void ExecuteUbergraph_ABP_RepairTool_1P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
