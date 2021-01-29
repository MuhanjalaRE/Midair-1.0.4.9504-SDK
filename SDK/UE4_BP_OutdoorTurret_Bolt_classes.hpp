#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_OutdoorTurret_Bolt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OutdoorTurret_Bolt.BP_OutdoorTurret_Bolt_C
// 0x0000 (0x0950 - 0x0950)
class ABP_OutdoorTurret_Bolt_C : public AMAProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OutdoorTurret_Bolt.BP_OutdoorTurret_Bolt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
