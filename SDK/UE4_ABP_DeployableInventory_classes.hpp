#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_DeployableInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_DeployableInventory.ABP_DeployableInventory_C
// 0x05FA (0x0972 - 0x0378)
class UABP_DeployableInventory_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0654721F442A781674A82A974CFBA843;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8B2202147CD215EF6812981A9AD19BC;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B880F99A4B267118E6A348914008155B;// 0x0450(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_720D3BC2432EAC8ED7A53C8858838C02;// 0x04D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_42154A574B2DD46CB3FBF0975F17546F;// 0x0540(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5979111740EF89E4557C979E1AADB145;      // 0x0588(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_538FE6B046113E1585C918B640D11AC2;// 0x05E8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B45766CD45987AC06B4DC18C2B88825A;// 0x0658(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31C7F80B4E76E003B59F488C1B989A02;// 0x0728(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D8281B174E543E4C2A2579A2B0604501;// 0x0798(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F98847CC45736133158F3D988DB4A190;// 0x07E0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EB7E3A964EA98EAE047CD9BA5A22914E;// 0x0850(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AD4C548844E7C3676FAC088C534E1AEB;// 0x0898(0x00D8)
	bool                                               IsDead;                                                   // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowHealth;                                                // 0x0971(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_DeployableInventory.ABP_DeployableInventory_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableInventory_AnimGraphNode_TransitionResult_B880F99A4B267118E6A348914008155B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableInventory_AnimGraphNode_TransitionResult_D8B2202147CD215EF6812981A9AD19BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeployableInventory_AnimGraphNode_BlendListByBool_B45766CD45987AC06B4DC18C2B88825A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_DeployableInventory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
