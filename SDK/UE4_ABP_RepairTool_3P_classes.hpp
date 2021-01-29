#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_RepairTool_3P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_RepairTool_3P.ABP_RepairTool_3P_C
// 0x0539 (0x08B1 - 0x0378)
class UABP_RepairTool_3P_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B27287BE4F9114175AC498A6ABA91852;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B839E08B49B8B0EA812645ACDAD51FED;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5EFB40C14BB635B6EF9C1695689AE0FE;// 0x0450(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F99EB0C141413F61D128868129B7CC8D;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E85946094747E04AE4A52FBB44D5D652;// 0x0550(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27F1A5784D46A042032C2CB9FA191F60;// 0x05D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_602F073C42D4A788CE8565A0E26FC084;// 0x0640(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5DEA851E4BDBC7178B757EA6C0A62113;// 0x0688(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F350C5B746DB56E90EFA589CE070360D;// 0x06F8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2DF021EB469A489FEC6E9FB98436C4EE;// 0x0740(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CB13D4E7410E29C35DDDDB82E62C511A;// 0x0788(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8CA08B424FBDEF41D3653CB5D630CAF3;// 0x07D0(0x00D8)
	class ABP_RepairGun_Attachment_C*                  Owning_Attachment;                                        // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Firing;                                                // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RepairTool_3P.ABP_RepairTool_3P_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RepairTool_3P_AnimGraphNode_TransitionResult_F99EB0C141413F61D128868129B7CC8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RepairTool_3P_AnimGraphNode_TransitionResult_E85946094747E04AE4A52FBB44D5D652();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RepairTool_3P_AnimGraphNode_TransitionResult_B839E08B49B8B0EA812645ACDAD51FED();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RepairTool_3P_AnimGraphNode_TransitionResult_5EFB40C14BB635B6EF9C1695689AE0FE();
	void ExecuteUbergraph_ABP_RepairTool_3P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
