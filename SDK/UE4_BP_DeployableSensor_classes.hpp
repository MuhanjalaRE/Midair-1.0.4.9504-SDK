#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_DeployableSensor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DeployableSensor.BP_DeployableSensor_C
// 0x0010 (0x0470 - 0x0460)
class ABP_DeployableSensor_C : public AMAAsset
{
public:
	class USensorNetworkComponent*                     SensorNetwork;                                            // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeployableSensor.BP_DeployableSensor_C");
		return ptr;
	}


	float GetPlacementVisualRadius();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
