#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_RepairPack_Pickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RepairPack_Pickup.BP_RepairPack_Pickup_C
// 0x0008 (0x0518 - 0x0510)
class ABP_RepairPack_Pickup_C : public AMAPickupBackpack
{
public:
	class UStaticMeshComponent*                        SM_RepairGunPickup;                                       // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RepairPack_Pickup.BP_RepairPack_Pickup_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
