#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_DeployableInfo_MotionSensor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DeployableInfo_MotionSensor.DeployableInfo_MotionSensor_C
// 0x0000 (0x01B8 - 0x01B8)
class UDeployableInfo_MotionSensor_C : public UDeployableInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DeployableInfo_MotionSensor.DeployableInfo_MotionSensor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif