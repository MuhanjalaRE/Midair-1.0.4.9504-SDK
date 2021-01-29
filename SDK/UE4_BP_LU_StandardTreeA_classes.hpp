#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_LU_StandardTreeA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LU_StandardTreeA.BP_LU_StandardTreeA_C
// 0x0008 (0x03C8 - 0x03C0)
class ABP_LU_StandardTreeA_C : public ABP_TreeTemplate_C
{
public:
	class UStaticMeshComponent*                        SM_LU_StandardTreeA_Collision;                            // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LU_StandardTreeA.BP_LU_StandardTreeA_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
