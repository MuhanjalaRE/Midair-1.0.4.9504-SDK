#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WSkin_Chaingun_Blood_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WSkin_Chaingun_Blood.WSkin_Chaingun_Blood_C
// 0x0000 (0x0440 - 0x0440)
class AWSkin_Chaingun_Blood_C : public AWSkin_Chaingun_Default_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WSkin_Chaingun_Blood.WSkin_Chaingun_Blood_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
