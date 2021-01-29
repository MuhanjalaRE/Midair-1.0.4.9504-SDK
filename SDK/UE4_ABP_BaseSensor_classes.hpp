#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_BaseSensor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_BaseSensor.ABP_BaseSensor_C
// 0x0A4F (0x0DC7 - 0x0378)
class UABP_BaseSensor_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_502F03F9416CB3972B0AC19EF2BB100A;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31C404FD49A97E141CBF78AD3F9E615F;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_295AD63240B8D71406D2D283E9F518A6;// 0x0450(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9B6511904C96CECBEDF8C3A594EC4463;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A9A45C714115960F6968C6B3B36C1DBD;// 0x0550(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E7849AD4742D14AEF6D7782F9B66CC2;// 0x05D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1115A3354923DFF7BF69609A3E381EC3;// 0x0650(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5969AA4B46DA4F8CC33FC69A1035C210;// 0x06D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_365CF99448B842B010F18E921280F26D;// 0x0740(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_773AD2E74137C4AFA7DE0F9CE135F24D;// 0x0788(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6C520AAB4E8C022A06D1D593C9C4A395;// 0x07F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E2E212824B4901F02057DDBD01619A94;// 0x0840(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_552F0F794F4A1696BB17E1B871AB16AC;// 0x08B0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20F6DFF244231ECDCD33A5873EB4437D;// 0x0980(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0FFEE12541E82C10CB7FFE9C74120815;// 0x09F0(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_83E4713548F65234302BA3BD9989DDBE;// 0x0A60(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7D10F5A640D4B626ED5EC388DF14D738;// 0x0B30(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECA80D074914B89FF031318B2392EA90;// 0x0B78(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FA46FE8E48235CC7D3FB10B027ED0958;// 0x0BE8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_051EBA4746BFEE0BC875B0971CD8776C;// 0x0C30(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F5ED3A69411CE7B5F8A90FAE24DACA7D;// 0x0CA0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8A5DD2A647F7E1D9CBA1DA86EF43831C;// 0x0CE8(0x00D8)
	int                                                CurrentScanIndex;                                         // 0x0DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAlive;                                                  // 0x0DC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDamaged;                                                // 0x0DC5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPowered;                                                // 0x0DC6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BaseSensor.ABP_BaseSensor_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseSensor_AnimGraphNode_TransitionResult_A9A45C714115960F6968C6B3B36C1DBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseSensor_AnimGraphNode_TransitionResult_4E7849AD4742D14AEF6D7782F9B66CC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseSensor_AnimGraphNode_TransitionResult_1115A3354923DFF7BF69609A3E381EC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseSensor_AnimGraphNode_TransitionResult_295AD63240B8D71406D2D283E9F518A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseSensor_AnimGraphNode_BlendListByBool_552F0F794F4A1696BB17E1B871AB16AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseSensor_AnimGraphNode_BlendListByInt_83E4713548F65234302BA3BD9989DDBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseSensor_AnimGraphNode_TransitionResult_31C404FD49A97E141CBF78AD3F9E615F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseSensor_AnimGraphNode_TransitionResult_9B6511904C96CECBEDF8C3A594EC4463();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_FinishScan();
	void ExecuteUbergraph_ABP_BaseSensor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
