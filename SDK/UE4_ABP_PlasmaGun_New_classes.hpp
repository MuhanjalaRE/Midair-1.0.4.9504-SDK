#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_PlasmaGun_New_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_PlasmaGun_New.ABP_PlasmaGun_New_C
// 0x00B0 (0x0428 - 0x0378)
class UABP_PlasmaGun_New_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E4163851427823C9C30A30A791E9229B;      // 0x0380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_173876064B24A490C08E89A2486E230D;      // 0x03C8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PlasmaGun_New.ABP_PlasmaGun_New_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void AnimNotify_OnDetachAmmo1P();
	void AnimNotify_OnDetachAmmo3P();
	void ExecuteUbergraph_ABP_PlasmaGun_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
