#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CamShake_WEP_Ping_Heavy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CamShake_WEP_Ping_Heavy.CamShake_WEP_Ping_Heavy_C
// 0x0000 (0x0160 - 0x0160)
class UCamShake_WEP_Ping_Heavy_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamShake_WEP_Ping_Heavy.CamShake_WEP_Ping_Heavy_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
