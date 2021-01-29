#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_DeployerWeaponAttachment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DeployerWeaponAttachment.BP_DeployerWeaponAttachment_C
// 0x0000 (0x0718 - 0x0718)
class ABP_DeployerWeaponAttachment_C : public AMAWeaponAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeployerWeaponAttachment.BP_DeployerWeaponAttachment_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
