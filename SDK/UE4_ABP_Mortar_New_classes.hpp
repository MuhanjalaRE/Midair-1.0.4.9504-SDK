#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Mortar_New_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Mortar_New.ABP_Mortar_New_C
// 0x00E8 (0x0460 - 0x0378)
class UABP_Mortar_New_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6EC352784E765AA980BB11BF8A962DEA;      // 0x0380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2D4871DA44D8CFB0F7BBE2B8C7C01A5A;      // 0x03C8(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_1B2427F04CC7564F94A598A0858F5904;// 0x0428(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Mortar_New.ABP_Mortar_New_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Mortar_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
