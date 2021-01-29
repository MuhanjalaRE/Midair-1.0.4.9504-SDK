#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_RingLauncher_New_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_RingLauncher_New.ABP_RingLauncher_New_C
// 0x0264 (0x05DC - 0x0378)
class UABP_RingLauncher_New_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4DE77ABE48C4018D52F1BAA3FF184EC7;      // 0x0380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BEBA664D405647DBA2E0179CA04F1290;      // 0x03C8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CB4EFE44E38D50345F821BF733E3DC3;// 0x0428(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24F43D054337FA947C6E7A95F48C60FD;// 0x0498(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_01E9624344C1B399F85A1096F225EF71;// 0x0508(0x00D0)
	int                                                Ammo;                                                     // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RingLauncher_New.ABP_RingLauncher_New_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RingLauncher_New_AnimGraphNode_BlendListByInt_01E9624344C1B399F85A1096F225EF71();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_RingLauncher_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
