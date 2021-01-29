#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_DeployableInfo_DeployableInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DeployableInfo_DeployableInventory.DeployableInfo_DeployableInventory_C
// 0x0000 (0x01B8 - 0x01B8)
class UDeployableInfo_DeployableInventory_C : public UDeployableInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DeployableInfo_DeployableInventory.DeployableInfo_DeployableInventory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
