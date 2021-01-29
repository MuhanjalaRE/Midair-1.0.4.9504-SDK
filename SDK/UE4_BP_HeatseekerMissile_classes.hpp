#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_HeatseekerMissile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HeatseekerMissile.BP_HeatseekerMissile_C
// 0x0008 (0x0998 - 0x0990)
class ABP_HeatseekerMissile_C : public AHeatseekerMissile
{
public:
	class USkeletalMeshComponent*                      Rotated_Mesh;                                             // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HeatseekerMissile.BP_HeatseekerMissile_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
