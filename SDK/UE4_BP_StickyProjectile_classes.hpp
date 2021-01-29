#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_StickyProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StickyProjectile.BP_StickyProjectile_C
// 0x0020 (0x0980 - 0x0960)
class ABP_StickyProjectile_C : public AStickyProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0960(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_SL_ProjActive;                                          // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlickerCurve_NewTrack_0_9EB0AB58400ACF964A3D7AB7E9613CA8; // 0x0970(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FlickerCurve__Direction_9EB0AB58400ACF964A3D7AB7E9613CA8; // 0x0974(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FlickerCurve;                                             // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StickyProjectile.BP_StickyProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void FlickerCurve__FinishedFunc();
	void FlickerCurve__UpdateFunc();
	void ReceiveBeginPlay();
	void BP_StartArm();
	void BP_FinishedArm();
	void ExecuteUbergraph_BP_StickyProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
