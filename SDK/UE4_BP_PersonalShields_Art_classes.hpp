#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PersonalShields_Art_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PersonalShields_Art.BP_PersonalShields_Art_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_PersonalShields_Art_C : public UAugment_PersonalShield_Art
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PersonalShields_Art.BP_PersonalShields_Art_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
