#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_PosedCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_PosedCharacter.ABP_PosedCharacter_C
// 0x0640 (0x09B8 - 0x0378)
class UABP_PosedCharacter_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_30F0259442C5DA5E39DB1DA4E1E83AE3;      // 0x0380(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C2DDADEB4A80DC79706BA1913D6D1791;    // 0x03D0(0x0260)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0EB6EF9D4BE18B760ADD22BC50C04E60;    // 0x0630(0x0260)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6F0A49E84AD99A894C185CBD905910B0;// 0x0890(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FC5B0601484B00E5860AC19026654926;// 0x08D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11E3B2CB411CFE036AE0ECA7530926DC;// 0x0920(0x0070)
	struct FVector                                     LookAt;                                                   // 0x0990(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Pose;                                                     // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtInWorld;                                            // 0x09A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09AC(0x0004) MISSED OFFSET
	class UAnimSequence*                               Pose_Sequence;                                            // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PosedCharacter.ABP_PosedCharacter_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PosedCharacter_AnimGraphNode_LookAt_C2DDADEB4A80DC79706BA1913D6D1791();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PosedCharacter_AnimGraphNode_SequencePlayer_11E3B2CB411CFE036AE0ECA7530926DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PosedCharacter_AnimGraphNode_LookAt_0EB6EF9D4BE18B760ADD22BC50C04E60();
	void ExecuteUbergraph_ABP_PosedCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
