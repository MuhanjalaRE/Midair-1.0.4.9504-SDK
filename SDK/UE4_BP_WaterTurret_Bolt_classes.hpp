#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_WaterTurret_Bolt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterTurret_Bolt.BP_WaterTurret_Bolt_C
// 0x0000 (0x0950 - 0x0950)
class ABP_WaterTurret_Bolt_C : public AMAProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterTurret_Bolt.BP_WaterTurret_Bolt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
