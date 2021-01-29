#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Warden_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Warden.ABP_Warden_C
// 0x0709 (0x0A81 - 0x0378)
class UABP_Warden_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_36BB8A7B42F3EED794F8F5832F7CEDC2;      // 0x0380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8D3F25A947734C7C633F14A1AE003825;      // 0x03C8(0x0060)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3AB961CE41BC7E50EAC10EA3F0DB5DAA;// 0x0430(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA2304F6425F53362E77278975BF50F9;// 0x04B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC26DD5148A0436862773CB481A44F4A;// 0x0530(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51EFC47E402676663520B0911871761C;// 0x05B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D6C6D52E4076F7AC1B164AB031B9947D;// 0x0630(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B9BAA504256D31060FE9FA6674EBDAF;// 0x06B0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_718FAB664529633F9B92B0BE5BD5FD1D;// 0x0730(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_68D734A34401E54CD01CBD88FD7B41FA;// 0x07A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1D3E89DC48B5D625A86A7189D82AEECA;// 0x07E8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_918BB7A24F802C902FA495851F095EAC;// 0x0858(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E0AE0AE040DCD22C00D71A8754CFA020;// 0x08A0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E3EA42A247F6C215D6CB34B98850D135;// 0x0910(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A471296E4981B7E936F5A9B304F45931;// 0x0958(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4EE62255476DA511D09E798ED11B70D5;// 0x09A0(0x00D8)
	class ABP_WardenAttachment_C*                      Owning_Attachment;                                        // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Firing;                                                // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Warden.ABP_Warden_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Warden_AnimGraphNode_TransitionResult_EC26DD5148A0436862773CB481A44F4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Warden_AnimGraphNode_TransitionResult_51EFC47E402676663520B0911871761C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Warden_AnimGraphNode_TransitionResult_EA2304F6425F53362E77278975BF50F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Warden_AnimGraphNode_TransitionResult_D6C6D52E4076F7AC1B164AB031B9947D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Warden_AnimGraphNode_TransitionResult_7B9BAA504256D31060FE9FA6674EBDAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Warden_AnimGraphNode_TransitionResult_3AB961CE41BC7E50EAC10EA3F0DB5DAA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Warden(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
