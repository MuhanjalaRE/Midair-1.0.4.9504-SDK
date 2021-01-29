#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PlasmaTurret_Bolt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlasmaTurret_Bolt.BP_PlasmaTurret_Bolt_C
// 0x0008 (0x0958 - 0x0950)
class ABP_PlasmaTurret_Bolt_C : public AMAProjectile
{
public:
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlasmaTurret_Bolt.BP_PlasmaTurret_Bolt_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
