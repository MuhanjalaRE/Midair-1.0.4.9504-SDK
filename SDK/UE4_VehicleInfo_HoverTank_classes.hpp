#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_VehicleInfo_HoverTank_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleInfo_HoverTank.VehicleInfo_HoverTank_C
// 0x0000 (0x01B8 - 0x01B8)
class UVehicleInfo_HoverTank_C : public UVehicleInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleInfo_HoverTank.VehicleInfo_HoverTank_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
