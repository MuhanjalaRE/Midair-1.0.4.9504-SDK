#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_DmgType_Chaingun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Chaingun.DmgType_Chaingun_C
// 0x0000 (0x0090 - 0x0090)
class UDmgType_Chaingun_C : public UMADamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Chaingun.DmgType_Chaingun_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
