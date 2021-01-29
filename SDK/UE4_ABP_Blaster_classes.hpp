#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Blaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Blaster.ABP_Blaster_C
// 0x00E8 (0x0460 - 0x0378)
class UABP_Blaster_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5EA03D8F44CF14C5ABD61893CCF92310;      // 0x0380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_46F9584D47DD5CC64DA11F9DA8DA1362;      // 0x03C8(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6376631B49D1C0D7C341C6878E618561;// 0x0428(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Blaster.ABP_Blaster_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Blaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
