#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_Chaingun_New_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Chaingun_New.ABP_Chaingun_New_C
// 0x01FC (0x0574 - 0x0378)
class UABP_Chaingun_New_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B0F7C7374B71B7C1ABCED0980CDB7097;      // 0x0380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4822BDC34FBB8F49D2087C833E63144A;      // 0x03C8(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7BDCEE37452BA7E7FE24D8854DF3B788;// 0x0428(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AEBB5C664920DF5DC5E4419BCCF63943;// 0x04E0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BF47292643B949BCC4061A9F4026B861;// 0x0528(0x0048)
	float                                              BarrelRot;                                                // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Chaingun_New.ABP_Chaingun_New_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Chaingun_New_AnimGraphNode_ModifyBone_7BDCEE37452BA7E7FE24D8854DF3B788();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Chaingun_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
