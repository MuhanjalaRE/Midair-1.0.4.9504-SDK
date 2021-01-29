#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_DeployableSensor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_DeployableSensor.ABP_DeployableSensor_C
// 0x059A (0x0912 - 0x0378)
class UABP_DeployableSensor_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6552266941876E8AC1F80BA19C36249F;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_690D752E461AC1BEEEC5BAAE10C81F0B;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A182473C4EC32C11226F51BC3678DA48;// 0x0450(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_687377F247449C157FC954AB2A9F4221;// 0x04D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A7236CED43B7B150EED171988ED70EA1;// 0x0540(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C9C792654356A9E651514DBF2339511D;// 0x0588(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7A0699BA4FB4419220AEA68F73785C5A;// 0x05F8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3A55BA9A4F7D673FF6194DB546CE0C15;// 0x06C8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4885A17443F6C9062DE4E7BADDF0392F;// 0x0738(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C43BD1B4994E9792724078259CCFD97;// 0x0780(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CB34F0C74E13E2BBD572029F6C0C8325;// 0x07F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2CBDA84141487789AFCA2FB5B702B5FF;// 0x0838(0x00D8)
	bool                                               IsDamaged;                                                // 0x0910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x0911(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_DeployableSensor.ABP_DeployableSensor_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableSensor_AnimGraphNode_TransitionResult_A182473C4EC32C11226F51BC3678DA48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableSensor_AnimGraphNode_TransitionResult_690D752E461AC1BEEEC5BAAE10C81F0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableSensor_AnimGraphNode_BlendListByBool_7A0699BA4FB4419220AEA68F73785C5A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_DeployableSensor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
