#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_HoverTank_MachineGunShell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HoverTank_MachineGunShell.BP_HoverTank_MachineGunShell_C
// 0x0008 (0x0958 - 0x0950)
class ABP_HoverTank_MachineGunShell_C : public AMAProjectile
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoverTank_MachineGunShell.BP_HoverTank_MachineGunShell_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
