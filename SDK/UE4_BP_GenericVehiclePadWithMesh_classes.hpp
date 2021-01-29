#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_GenericVehiclePadWithMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GenericVehiclePadWithMesh.BP_GenericVehiclePadWithMesh_C
// 0x0010 (0x0540 - 0x0530)
class ABP_GenericVehiclePadWithMesh_C : public ABP_GenericVehiclePad_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericVehiclePadWithMesh.BP_GenericVehiclePadWithMesh_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
