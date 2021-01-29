#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_RingLauncherProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RingLauncherProjectile.BP_RingLauncherProjectile_C
// 0x0008 (0x0958 - 0x0950)
class ABP_RingLauncherProjectile_C : public AMAProjectile
{
public:
	class UStaticMeshComponent*                        SM_RingLOD1;                                              // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RingLauncherProjectile.BP_RingLauncherProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
