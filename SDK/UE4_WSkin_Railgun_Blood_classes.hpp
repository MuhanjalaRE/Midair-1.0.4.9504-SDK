#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WSkin_Railgun_Blood_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WSkin_Railgun_Blood.WSkin_Railgun_Blood_C
// 0x0000 (0x0430 - 0x0430)
class AWSkin_Railgun_Blood_C : public AWSkin_Railgun_Default_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WSkin_Railgun_Blood.WSkin_Railgun_Blood_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
