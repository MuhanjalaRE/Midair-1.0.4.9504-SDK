#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BlasterAmmoArt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BlasterAmmoArt.BP_BlasterAmmoArt_C
// 0x0000 (0x0418 - 0x0418)
class ABP_BlasterAmmoArt_C : public AWeaponAmmoArt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlasterAmmoArt.BP_BlasterAmmoArt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
