#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_MortarShell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MortarShell.BP_MortarShell_C
// 0x0008 (0x0958 - 0x0950)
class ABP_MortarShell_C : public AMAProjectile
{
public:
	class UParticleSystemComponent*                    P_GrenadeLauncher_Shell_Trail;                            // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MortarShell.BP_MortarShell_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
