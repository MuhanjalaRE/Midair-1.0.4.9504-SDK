#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_StickyLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_StickyLauncher.ABP_StickyLauncher_C
// 0x00E8 (0x0460 - 0x0378)
class UABP_StickyLauncher_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B63299F3477C0C708C61D8A66F938266;      // 0x0380(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A97DE672495282D7646A4EB4BE7071BD;// 0x03C8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C65F2D4E4D0DDAE6B4C296ABF2843979;      // 0x0400(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_StickyLauncher.ABP_StickyLauncher_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void AnimNotify_OnDetachAmmo1P();
	void AnimNotify_OnDetachAmmo3P();
	void ExecuteUbergraph_ABP_StickyLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
