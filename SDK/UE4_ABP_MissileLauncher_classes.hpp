#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_MissileLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_MissileLauncher.ABP_MissileLauncher_C
// 0x00B0 (0x0428 - 0x0378)
class UABP_MissileLauncher_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A0392E414AFB37B58F4E50A76DBF1D7A;      // 0x0380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_72062FD54B904A7C4EFBEABFC4AB0687;      // 0x03C8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MissileLauncher.ABP_MissileLauncher_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_MissileLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
