#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CSkin_Medium_DesertCamo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CSkin_Medium_DesertCamo.CSkin_Medium_DesertCamo_C
// 0x0000 (0x0400 - 0x0400)
class ACSkin_Medium_DesertCamo_C : public ACSkin_Medium_Default_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CSkin_Medium_DesertCamo.CSkin_Medium_DesertCamo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
