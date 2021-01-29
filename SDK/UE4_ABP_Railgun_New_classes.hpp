#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Railgun_New_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Railgun_New.ABP_Railgun_New_C
// 0x00E8 (0x0460 - 0x0378)
class UABP_Railgun_New_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_92E453F24BB37248AA5FB89C302578B8;      // 0x0380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AB5B693241839F5907A7E9BE98808696;      // 0x03C8(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_8027859B446019BC0F3E4FB0CD2B102C;// 0x0428(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Railgun_New.ABP_Railgun_New_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void AnimNotify_OnDetachAmmo1P();
	void AnimNotify_OnDetachAmmo3P();
	void ExecuteUbergraph_ABP_Railgun_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
