#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_DmgProfile_BaseSensor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgProfile_BaseSensor.DmgProfile_BaseSensor_C
// 0x0000 (0x0040 - 0x0040)
class UDmgProfile_BaseSensor_C : public UDmgProfile_Deployable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgProfile_BaseSensor.DmgProfile_BaseSensor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
