#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_GrenadeLauncher_New_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C
// 0x0350 (0x06C8 - 0x0378)
class UABP_GrenadeLauncher_New_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A396677E47A136CABF7865AAF55CE39E;      // 0x0380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F1462CB7434FEB0432BF899DF4B4B9EA;      // 0x03C8(0x0060)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_7586B4B24BAA06897790518E65AD1EDE;// 0x0428(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C1A4AF83447C39CEDC49759F279B04E2;// 0x04F8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32BC41734A59B5AA1952FE805DB175AC;// 0x0568(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F990387349010F1F8339AAB3EECC6000;// 0x05D8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A95192204ED019C4DEDA78B96CC47B9F;// 0x0648(0x0070)
	int                                                Ammo;                                                     // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	class AMAWeapon*                                   Weapon;                                                   // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrenadeLauncher_New_AnimGraphNode_BlendListByInt_7586B4B24BAA06897790518E65AD1EDE();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_GrenadeLauncher_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
