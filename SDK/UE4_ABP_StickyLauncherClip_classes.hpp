#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ABP_StickyLauncherClip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_StickyLauncherClip.ABP_StickyLauncherClip_C
// 0x04C4 (0x083C - 0x0378)
class UABP_StickyLauncherClip_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5BEBB8B148437FA3A95C14A52C7DDA1E;      // 0x0380(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_26B8484E4821B27405831ABBFB1B3F9A;// 0x03C8(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9B4C9CFE44BB043B52DF80BF4FC3F4CE;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_64A457EA42BBDEA74B26F38330DB0FF3;// 0x04C8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9617DD704BBF362E1C9AAD966EE7D613;// 0x0580(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6A91EEDF46699353865A71B7A647E645;// 0x0638(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0D9AC7B5470E7E61A2DB8E8183C54C1D;// 0x06F0(0x00B8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_65FBDD07496C95180C2107A02BEE60EE;// 0x07A8(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DDB33D8D414BFFFF94918EBEC4DF8AAC;// 0x07E0(0x0048)
	bool                                               Grenade1_Visible;                                         // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Grenade2_Visible;                                         // 0x0829(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Grenade3_Visible;                                         // 0x082A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Grenade4_Visible;                                         // 0x082B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Clip_Rot;                                                 // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Loaded_Ammo;                                              // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Last_Loaded_Ammo;                                         // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Desired_Rot;                                              // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_StickyLauncherClip.ABP_StickyLauncherClip_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StickyLauncherClip_AnimGraphNode_ModifyBone_9617DD704BBF362E1C9AAD966EE7D613();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StickyLauncherClip_AnimGraphNode_ModifyBone_6A91EEDF46699353865A71B7A647E645();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StickyLauncherClip_AnimGraphNode_ModifyBone_0D9AC7B5470E7E61A2DB8E8183C54C1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StickyLauncherClip_AnimGraphNode_ModifyBone_64A457EA42BBDEA74B26F38330DB0FF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StickyLauncherClip_AnimGraphNode_ModifyBone_26B8484E4821B27405831ABBFB1B3F9A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_StickyLauncherClip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
